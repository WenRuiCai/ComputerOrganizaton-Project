`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:12 10/18/2018 
// Design Name: 
// Module Name:    code_1 
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
module code_1(
	input [3:0]d0,d1,
	input  s,
	output [3:0] y
    );
	assign y=s?d1:d0;
endmodule
