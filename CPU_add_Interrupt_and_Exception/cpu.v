`timescale 1ns / 1ps
`include "IFU.v"
`include "Reg_IF_to_D.v"
`include "Level_Decode.v"
`include "Reg_D_to_E.v"
`include "Level_Execute.v"
`include "Reg_E_to_M.v"
`include "Level_Memory.v"
`include "Reg_M_to_W.v"
`include "Level_WriteBack.v"
`include "Hizzard.v"
`include "CP0.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    16:07:11 12/01/2018
// Design Name:
// Module Name:    cpu
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module cpu(
    input clk,
    input reset,
    input [31:0] WriteData_from_timer,
    input [7:2] HWInt,
    output [31:0] MemAddr_M,
    output [31:0] WriteData_from_CPU,
    output [31:0] Instruction_M,
    output IRQ_E_and_M
    );

    wire [31:0] j_addr, b_addr, jr_addr,Instruction_IF, pc_add_4_IF, pc_add_8_IF,Instruction_D, pc_add_4_D, pc_add_8_D,Instruction_E, pc_add_4_E,pc_add_8_E,Instruction_M, pc_add_4_M,pc_add_8_M,Instruction_W, pc_add_4_W, pc_add_8_W, EPC_cp0, EPC_IFU;

    wire [31:0] Write_GRF_Data, ext_D, ReadData1_D, ReadData2_D, ext_E, ReadData1_E, ReadData2_E, ALUResult_E, rt_value_E, Data_out_M, ALUResult_M, MemAddr_M, WriteData_M, ALUResult_W, Data_out_W, Data_out_CP0;

    wire judge_equal, pc_enabled_hizzrad, IF_to_D_enabled_hizzard, WE3, reset_D_to_E_hizzard, start_mult_div, busy, WE_cp0, EXLSet, EXLClr, IntReq;

    wire [3:0] choose_way_cpu;

    wire [6:2] ExcCode_IF_to_D,ExcCode_D,ExcCode_D_to_E,ExcCode_E,ExcCode_E_to_M,ExcCode_M,ExcCode_M_new;

    wire [4:0] GRF_A3, select_rs_out_D, select_rt_out_D, rs_D, rt_D, rd_D, A1_E, A2_E, A3_E, select_rs_or_SrcA_E, select_rt_E, WriteRegNum_E, WriteRegNum_M, A2_M, select_Writedata_M, WriteRegNum_W, T_use_rs, T_use_rt, T_new_E, T_new_M, T_new_W;

/*******************************************************************************************/
    wire reset_IF_to_D_irq,reset_D_to_E_irq, reset_E_to_M_irq, reset_M_to_W_irq, WE_cp0_irq;
    wire reset_IF_to_D_eret;
    wire [3:0] choose_way;
    wire IRQ_E_and_M;
    assign EXLSet = (IntReq==1||ExcCode_M_new!=0)?1:0;
    assign EXLClr = ({Instruction_D[31:26]}==6'b010000&&{Instruction_D[5:0]}==6'b011000)?1:0;                 //EXLClr和NPC选择信号同时产生
    assign reset_E_to_M_irq = (IntReq==1||ExcCode_M_new!=0)?1:0;
    assign reset_IF_to_D_irq = (IntReq==1||ExcCode_M_new!=0)?1:0;
    assign reset_D_to_E_irq = (IntReq==1||ExcCode_M_new!=0)?1:0;
    assign reset_M_to_W_irq = (IntReq==1||ExcCode_M_new!=0)?1:0;
    assign WE_cp0_irq = (IntReq==1||ExcCode_M_new!=0)?0:1;
    assign IRQ_E_and_M = (IntReq==1||ExcCode_M_new!=0)?1:0;
    assign choose_way = (IntReq==1||ExcCode_M_new!=0)?4:choose_way_cpu;
    assign reset_IF_to_D_eret = ({Instruction_D[31:26]}==6'b010000&&{Instruction_D[5:0]}==6'b011000)?1:0;

    assign EPC_IFU = (((WE_cp0&WE_cp0_irq)==1)&&A3_E==14)?rt_value_E:EPC_cp0;

/*******************************************************************************************/
    CP0 CP0(A3_E, A3_E, rt_value_E, pc_add_4_M-4, Instruction_W, ExcCode_M_new, HWInt, WE_cp0&WE_cp0_irq, EXLSet, EXLClr, clk, reset, IntReq, EPC_cp0, Data_out_CP0);

	IFU IFU (j_addr, b_addr, jr_addr, EPC_IFU, judge_equal, choose_way, reset, clk, pc_enabled_hizzrad, Instruction_IF, pc_add_4_IF, pc_add_8_IF, ExcCode_IF_to_D);

	Reg_IF_to_D Reg_IF_to_D (ExcCode_IF_to_D, Instruction_IF, pc_add_4_IF, pc_add_8_IF, clk, reset|reset_IF_to_D_irq|reset_IF_to_D_eret, IF_to_D_enabled_hizzard, Instruction_D, pc_add_4_D, pc_add_8_D, T_use_rs, T_use_rt, ExcCode_D);

	Level_Decode Level_Decode (ExcCode_D, clk, reset, WE3, Instruction_D, pc_add_4_D, pc_add_8_D, pc_add_4_W, GRF_A3, Write_GRF_Data, ALUResult_M, pc_add_8_E, pc_add_8_M, select_rs_out_D, select_rt_out_D, rs_D, rt_D, rd_D, ext_D, b_addr, j_addr, jr_addr, ReadData1_D, ReadData2_D, choose_way_cpu, judge_equal, ExcCode_D_to_E);

    Reg_D_to_E Reg_D_to_E (ExcCode_D_to_E, Instruction_D, pc_add_4_D, pc_add_8_D, clk, reset_D_to_E_hizzard|reset|reset_D_to_E_irq, 1'b1, rs_D, rt_D, rd_D, ReadData1_D, ReadData2_D, ext_D, Instruction_E, pc_add_4_E, pc_add_8_E, A1_E, A2_E, A3_E, ReadData1_E, ReadData2_E, ext_E, T_new_E, ExcCode_E);

    Level_Execute Level_Execute (IRQ_E_and_M, ExcCode_E, clk, reset, Instruction_E, pc_add_4_E, pc_add_8_E, A1_E, A2_E, A3_E, ReadData1_E, ReadData2_E, ext_E, Write_GRF_Data, ALUResult_M, pc_add_8_M, select_rs_or_SrcA_E, select_rt_E, Data_out_CP0, WriteRegNum_E, rt_value_E, ALUResult_E, start_mult_div, busy, WE_cp0, ExcCode_E_to_M);

    Reg_E_to_M Reg_E_to_M (ExcCode_E_to_M, clk, reset|reset_E_to_M_irq, 1'b1, Instruction_E, pc_add_4_E, pc_add_8_E, WriteRegNum_E, A2_E, ALUResult_E, rt_value_E, T_new_E, Instruction_M, pc_add_4_M, pc_add_8_M, WriteRegNum_M, A2_M, MemAddr_M, WriteData_M, T_new_M, ExcCode_M);

    Level_Memory Level_Memory (IRQ_E_and_M, ExcCode_M, clk, reset, Instruction_M, pc_add_4_M, pc_add_8_M, MemAddr_M, WriteData_from_timer, WriteData_M, Write_GRF_Data, select_Writedata_M, Data_out_M, ALUResult_M, WriteData_from_CPU, ExcCode_M_new);

    Reg_M_to_W Reg_M_to_W (clk, 1'b1, reset|reset_M_to_W_irq, Instruction_M, pc_add_4_M, pc_add_8_M, ALUResult_M, Data_out_M, WriteRegNum_M, T_new_M, Instruction_W, pc_add_4_W, pc_add_8_W, ALUResult_W, Data_out_W, WriteRegNum_W,T_new_W);

    Level_WriteBack Level_WriteBack (Instruction_W, pc_add_4_W, pc_add_8_W, ALUResult_W, Data_out_W, WriteRegNum_W, GRF_A3, WE3, Write_GRF_Data);

    Hizzard Hizzard (Instruction_D, Instruction_E, Instruction_M, Instruction_W, T_use_rs, T_use_rt, T_new_E, T_new_M, T_new_W, rs_D, rt_D, A1_E, A2_E, WriteRegNum_E, WriteRegNum_M, WriteRegNum_W, start_mult_div, busy, select_rs_out_D, select_rt_out_D, select_rs_or_SrcA_E, select_rt_E, select_Writedata_M, pc_enabled_hizzrad, reset_D_to_E_hizzard, IF_to_D_enabled_hizzard);

endmodule
