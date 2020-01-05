`timescale 1ns / 1ps
`include "Instr_Decode.v"

`define ADD_I_SUB (`add | `sub | `addi)
`define EXC_Ov    5'b01100
`define NEXC 		5'b11111
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:38:35 12/27/2017 
// Design Name: 
// Module Name:    EXC_DT_EX 
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

module EXC_DT_EX(
    input [31:0] Instr,
    input Overflow,
    
	 output [4:0] Ov
    );
  
  assign Ov = (`ADD_I_SUB & Overflow) ? `EXC_Ov : `NEXC;

endmodule
