`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:49:58 11/26/2018
// Design Name:
// Module Name:    Reg_E_to_M
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
module Reg_E_to_M(
    input clk,
    input reset,
    input en,
    input [31:0] Instr_in,
    input [31:0] pc_add_4_in,
    input [31:0] pc_add_8_in,
    input [4:0] WriteRegNum_in,
    input [4:0] A2_in,
    input [31:0] MemAddr_in,       //ALUResult
    input [31:0] WriteData_in,     //rt_value
    input [4:0] T_new_E,
	 input judge_E,
    output [31:0] Instruction,
    output [31:0] pc_add_4,
    output [31:0] pc_add_8,
    output [4:0] WriteRegNum,
    output [4:0] A2,
    output [31:0] MemAddr,
    output [31:0] WriteData,
    output [4:0] T_new_M,
	 output judge_M
    );

    reg [31:0] store_Instr_in,store_pc_add_4_in,store_pc_add_8_in,store_MemAddr_in,store_WriteData_in;
    reg [4:0] store_WriteRegNum_in,store_t_new_m;

    assign judge_M=judge_E;
	 assign Instruction=store_Instr_in;
    assign pc_add_4 = store_pc_add_4_in;
    assign pc_add_8 = store_pc_add_8_in;
    assign WriteRegNum = store_WriteRegNum_in;
    assign A2 = A2_in;
    assign WriteData = store_WriteData_in;
    assign MemAddr = store_MemAddr_in;
    assign T_new_M=store_t_new_m;

    initial begin
        store_Instr_in=0;
        store_pc_add_4_in=0;
        store_pc_add_8_in=0;
        store_WriteRegNum_in=0;
        store_WriteData_in=0;
        store_MemAddr_in=0;
        store_t_new_m=0;
    end

    always @(posedge clk) begin
        if(reset) begin
            store_Instr_in=0;
            store_pc_add_4_in=0;
            store_pc_add_8_in=0;
            store_WriteRegNum_in=0;
            store_WriteData_in=0;
            store_MemAddr_in=0;
            store_t_new_m=0;
        end
        else begin
            if(en) begin
                store_Instr_in=Instr_in;
                store_pc_add_4_in=pc_add_4_in;
                store_pc_add_8_in=pc_add_8_in;
                store_WriteRegNum_in=WriteRegNum_in;
                store_WriteData_in=WriteData_in;
                store_MemAddr_in=MemAddr_in;
                if(T_new_E>0) begin
                    store_t_new_m=T_new_E-1;
                end
                else begin
                    store_t_new_m=T_new_E;
                end
					 //$display("%d %h",$time,WriteData_in);
            end
        end
    end

endmodule
