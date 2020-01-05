`timescale 1ns / 1ps
`define in0_code 1'b0
`define in1_code 1'b1
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:02:41 12/06/2017 
// Design Name: 
// Module Name:    MUX2to1 
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
module MUX2to1 # (parameter WIDTH = 32)(
    input [WIDTH - 1 : 0] in0,
    input [WIDTH - 1 : 0] in1,
    input sel,
    output [WIDTH - 1 : 0] out
    );
  
  reg [WIDTH - 1 : 0] out_result;
  assign out = out_result;
  
  always@(*)begin
    case(sel)
	   `in0_code: out_result <= in0;
		`in1_code: out_result <= in1;
	 endcase
  end

endmodule
