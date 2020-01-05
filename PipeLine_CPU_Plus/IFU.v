`timescale 1ns / 1ps
`include "Reg_PC.v"
`include "InstructionMemory.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:46:37 11/26/2018
// Design Name:
// Module Name:    IFU
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
module IFU(
	input [31:0] j_addr,
	input [31:0] b_addr,
	input [31:0] jr_addr,
	input judge_equal,
	input [3:0] choose_way,
	input reset,
	input clk,
	input en,
	output [31:0] Instruction,
	output [31:0] PC_plus_4,
	output [31:0] PC_plus_8
    );

	wire [31:0] nPC;
	wire [31:0] PC;

	assign nPC=(choose_way==0)?PC_plus_4:(
					(choose_way==1)?((judge_equal==1)?b_addr:PC_plus_4):(
					(choose_way==2)?j_addr:jr_addr));

	Reg_PC Reg_PC(clk,reset,en,nPC,PC_plus_4,PC_plus_8,PC);

	InstructionMemory InstructionMemory(PC,Instruction);

endmodule
