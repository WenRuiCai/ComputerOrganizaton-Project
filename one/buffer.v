`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:50:11 09/29/2018 
// Design Name: 
// Module Name:    buffer 
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
module buffer(
    input clk,
    input in,
    output reg out
    );
	 reg buff = 0;
	 always @(posedge clk) begin
		buff<=in;
		out<=buff;
	 end
endmodule
