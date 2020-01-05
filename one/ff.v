`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:40:24 10/10/2018 
// Design Name: 
// Module Name:    ff 
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
module ff(
	input clk,
	input a,
	input b,
	output c
    );
	reg[31:0] _reg[31:0];
	parameter i=0;
	initial begin
		for(i=0;i<32;i++)begin
			_reg[i] <= 0;
		end
	end

endmodule
