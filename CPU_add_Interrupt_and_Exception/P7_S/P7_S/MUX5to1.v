`timescale 1ns / 1ps
`define in0_code  3'b000
`define in1_code  3'b001
`define in2_code  3'b010
`define in3_code  3'b011
`define in4_code  3'b100
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:53 12/06/2017 
// Design Name: 
// Module Name:    MUX5to1 
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
module MUX5to1 #(parameter WIDTH = 32)(
    input [WIDTH - 1 : 0] in0,
    input [WIDTH - 1 : 0] in1,
    input [WIDTH - 1 : 0] in2,
    input [WIDTH - 1 : 0] in3,
    input [WIDTH - 1 : 0] in4,
    input [2:0] sel,
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
		`in4_code: out_result <= in4;
		default : out_result <= in0;
	 endcase
  end


endmodule
