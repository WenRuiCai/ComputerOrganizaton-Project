`timescale 1ns / 1ps
`include "Instr_Decode.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:26:57 12/27/2017 
// Design Name: 
// Module Name:    Delay_DT 
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
module Delay_DT(
    
	 input [31:0] Instr,
    output Delay_Set
    
	 );
  assign Delay_Set = (`beq | `bne | `bgez | `bltz | `blez | `bgtz | `j | `jal | `jalr | `jr);

endmodule
