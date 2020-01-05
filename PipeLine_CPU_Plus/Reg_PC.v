`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:51:48 11/26/2018 
// Design Name: 
// Module Name:    Reg_PC 
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
module Reg_PC(
    input clk,
    input reset,
    input Enabled,
    input [31:0] nPC,
	 output [31:0] PC_plus_4,
	 output [31:0] PC_plus_8,
    output [31:0] PC
    );
	reg [31:0] now_PC;
	
	assign PC=now_PC;
	assign PC_plus_4=now_PC+4;
	assign PC_plus_8=now_PC+8;
	
	initial begin
		now_PC=32'h0x00003000;
	end
	always @(posedge clk)begin
		if(reset)begin
			now_PC=32'h0x00003000;
		end
		else begin
			if(Enabled)begin
				//$display("%h",now_PC);
				now_PC=nPC;
			end
		end
	end

endmodule
