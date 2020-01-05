`timescale 1ns / 1ps

`define sw_sel 2'b00
`define sh_sel 2'b01
`define sb_sel 2'b10
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:55:57 12/16/2017 
// Design Name: 
// Module Name:    BitExtend 
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
module BitExtend(
    input [1:0] A_1_0,
	 input [1:0] Sw_sel,
	 
    output [3:0] BE
    );
  
  assign BE = (Sw_sel === `sw_sel) ? 4'b1111:
              ((Sw_sel === `sh_sel) & (A_1_0[1] === 1'b0)) ? 4'b0011 :
				  ((Sw_sel === `sh_sel) & (A_1_0[1] === 1'b1)) ? 4'b1100 :
				  ((Sw_sel === `sb_sel) & (A_1_0 === 2'b00))   ? 4'b0001 :
				  ((Sw_sel === `sb_sel) & (A_1_0 === 2'b01))   ? 4'b0010 :
				  ((Sw_sel === `sb_sel) & (A_1_0 === 2'b10))   ? 4'b0100 :
				  ((Sw_sel === `sb_sel) & (A_1_0 === 2'b11))   ? 4'b1000 :
				                                                 4'b0000 ;

endmodule
