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
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    16:07:11 12/01/2018
// Design Name:
// Module Name:    mips
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
module mips(
    input clk,
    input reset
    );

    wire [31:0] j_addr, b_addr, jr_addr,Instruction_IF, pc_add_4_IF, pc_add_8_IF,Instruction_D, pc_add_4_D, pc_add_8_D,Instruction_E, pc_add_4_E,pc_add_8_E,Instruction_M, pc_add_4_M,pc_add_8_M,Instruction_W, pc_add_4_W, pc_add_8_W;

    wire [31:0] Write_GRF_Data, ext_D, ReadData1_D, ReadData2_D, ext_E, ReadData1_E, ReadData2_E, ALUResult_E, rt_value_E, Data_out_M, ALUResult_M, MemAddr_M, WriteData_M, ALUResult_W, Data_out_W;

    wire judge_equal, pc_enabled, IF_to_D_enabled, WE3, reset_D_to_E, start_mult_div, busy;

    wire [3:0] choose_way;


    wire [4:0] GRF_A3, select_rs_out_D, select_rt_out_D, rs_D, rt_D, rd_D, A1_E, A2_E, A3_E, select_rs_or_SrcA_E, select_rt_E, WriteRegNum_E, WriteRegNum_M, A2_M, select_Writedata_M, WriteRegNum_W, T_use_rs, T_use_rt, T_new_E, T_new_M, T_new_W;



	IFU IFU (j_addr, b_addr, jr_addr, judge_equal, choose_way, reset, clk, pc_enabled, Instruction_IF, pc_add_4_IF, pc_add_8_IF);

	Reg_IF_to_D Reg_IF_to_D (Instruction_IF, pc_add_4_IF, pc_add_8_IF, clk, reset, IF_to_D_enabled, Instruction_D, pc_add_4_D, pc_add_8_D, T_use_rs, T_use_rt);

	Level_Decode Level_Decode (clk, reset, WE3, Instruction_D, pc_add_4_D, pc_add_8_D, pc_add_4_W, GRF_A3, Write_GRF_Data, ALUResult_M, pc_add_8_E, pc_add_8_M, select_rs_out_D, select_rt_out_D, rs_D, rt_D, rd_D, ext_D, b_addr, j_addr, jr_addr, ReadData1_D, ReadData2_D, choose_way, judge_equal);

    Reg_D_to_E Reg_D_to_E (Instruction_D, pc_add_4_D, pc_add_8_D, clk, reset_D_to_E, 1, rs_D, rt_D, rd_D, ReadData1_D, ReadData2_D, ext_D, Instruction_E, pc_add_4_E, pc_add_8_E, A1_E, A2_E, A3_E, ReadData1_E, ReadData2_E, ext_E, T_new_E);

    Level_Execute Level_Execute (clk, reset, Instruction_E, pc_add_4_E, pc_add_8_E, A1_E, A2_E, A3_E, ReadData1_E, ReadData2_E, ext_E, Write_GRF_Data, ALUResult_M, pc_add_8_M, select_rs_or_SrcA_E, select_rt_E, WriteRegNum_E, rt_value_E, ALUResult_E, start_mult_div, busy);

    Reg_E_to_M Reg_E_to_M (clk, reset, 1, Instruction_E, pc_add_4_E, pc_add_8_E, WriteRegNum_E, A2_E, ALUResult_E, rt_value_E, T_new_E, Instruction_M, pc_add_4_M, pc_add_8_M, WriteRegNum_M, A2_M, MemAddr_M, WriteData_M, T_new_M);

    Level_Memory Level_Memory (clk, reset, Instruction_M, pc_add_4_M, pc_add_8_M, MemAddr_M, WriteData_M, Write_GRF_Data, select_Writedata_M, Data_out_M, ALUResult_M);

    Reg_M_to_W Reg_M_to_W (clk, 1, reset, Instruction_M, pc_add_4_M, pc_add_8_M, ALUResult_M, Data_out_M, WriteRegNum_M, T_new_M,Instruction_W, pc_add_4_W, pc_add_8_W, ALUResult_W, Data_out_W, WriteRegNum_W,T_new_W);

    Level_WriteBack Level_WriteBack (Instruction_W, pc_add_4_W, pc_add_8_W, ALUResult_W, Data_out_W, WriteRegNum_W, GRF_A3, WE3, Write_GRF_Data);

    Hizzard Hizzard (Instruction_D, Instruction_E, Instruction_M, Instruction_W, T_use_rs, T_use_rt, T_new_E, T_new_M, T_new_W, rs_D, rt_D, A1_E, A2_E, WriteRegNum_E, WriteRegNum_M, WriteRegNum_W, start_mult_div, busy, select_rs_out_D, select_rt_out_D, select_rs_or_SrcA_E, select_rt_E, select_Writedata_M, pc_enabled, reset_D_to_E, IF_to_D_enabled);

endmodule
