`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:50:50 11/26/2018
// Design Name:
// Module Name:    Reg_M_to_W
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
module Reg_M_to_W(
    input clk,
    input en,
    input reset,
    input [31:0] Instr_in,
    input [31:0] pc_add_4_in,
    input [31:0] pc_add_8_in,
    input [31:0] ALUResult_in,
    input [31:0] DM_data_out,
    input [4:0] A3,
	 input judge_M,
    input [4:0] T_new_M,
    output [31:0] Instruction,
    output [31:0] pc_add_4,
    output [31:0] pc_add_8,
    output [31:0] ALUResult,
    output [31:0] Data_out,
    output [4:0] WriteRegNum,
    output [4:0] T_new_W,
	 output judge_W
    );

    reg[31:0]store_Instr_in;
    reg[31:0]store_pc_add_4_in;
    reg[31:0]store_pc_add_8_in;
    reg[31:0]store_ALUResult_in;
    reg[31:0]store_DM_data_out;
    reg[4:0] store_WriteRegNum;
    reg [4:0] store_T_new_W;

    assign judge_W=judge_M;
	 assign Instruction = store_Instr_in;
    assign pc_add_4 = store_pc_add_4_in;
    assign pc_add_8 = store_pc_add_8_in;
    assign ALUResult = store_ALUResult_in;
    assign Data_out= store_DM_data_out;
    assign WriteRegNum=store_WriteRegNum;
    assign T_new_W=store_T_new_W;

    initial begin
        store_Instr_in=0;
        store_pc_add_4_in=0;
        store_pc_add_8_in=0;
        store_ALUResult_in=0;
        store_DM_data_out=0;
        store_WriteRegNum=0;
        store_T_new_W=0;
    end

    always @(posedge clk) begin
        if(reset) begin
            store_Instr_in=0;
            store_pc_add_4_in=0;
            store_pc_add_8_in=0;
            store_ALUResult_in=0;
            store_DM_data_out=0;
            store_WriteRegNum=0;
            store_T_new_W=0;
        end
        else begin
            if(en)begin
                store_Instr_in=Instr_in;
                store_pc_add_4_in=pc_add_4_in;
                store_pc_add_8_in=pc_add_8_in;
                store_ALUResult_in=ALUResult_in;
                store_DM_data_out=DM_data_out;
                store_WriteRegNum=A3;
                if(T_new_M>0)
                    store_T_new_W=T_new_M-1;
                else begin
                    store_T_new_W=T_new_M;
                end
            end
        end
    end
endmodule
