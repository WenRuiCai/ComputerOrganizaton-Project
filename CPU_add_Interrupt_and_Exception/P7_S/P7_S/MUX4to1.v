`timescale 1ns / 1ps
`define in0_code 2'b00
`define in1_code 2'b01
`define in2_code 2'b10
`define in3_code 2'b11
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:10:18 12/06/2017 
// Design Name: 
// Module Name:    MUX4to1 
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
module MUX4to1 #(parameter WIDTH = 32)(
    input [WIDTH - 1 : 0] in0,
    input [WIDTH - 1 : 0] in1,
    input [WIDTH - 1 : 0] in2,
    input [WIDTH - 1 : 0] in3,
    input [1:0] sel,
    output [WIDTH - 1 : 0] out
    );
  
				
  reg [WIDTH - 1 : 0] out_result;
  assign out = out_result;
  
  always@(*)begin
    case(sel)
	   `in0_code: out_result <= in0;
		`in1_code: out_result <= in1;
		`in2_code: out_result <= in2;
		`in3_code: out_result <= in3;
		default  : out_result <= in0;
	 endcase
  end


endmodule
