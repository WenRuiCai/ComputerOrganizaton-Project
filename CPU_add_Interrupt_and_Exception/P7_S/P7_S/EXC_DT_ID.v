`timescale 1ns / 1ps
`include "Instr_Decode.v"

`define NPC_EXCESS   ((NPC_ID_IF > 32'h00004fff) | (NPC_ID_IF < 32'h00003000) |(NPC_ID_IF[1:0] !== 2'b00))
`define GRFPC_EXCESS ((PC_GRFOut_ID_IF > 32'h00004fff) | (PC_GRFOut_ID_IF < 32'h00003000) | (PC_GRFOut_ID_IF[1:0] !== 2'b00))
`define ERROR_AdEL   (((`B_type | `jal | `j) & `NPC_EXCESS) | ((`jr | `jalr) & `GRFPC_EXCESS))

`define AdEL     5'b00100
`define EXC_RI   5'b01010
`define NEXC     5'b11111
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:09:32 12/27/2017 
// Design Name: 
// Module Name:    EXC_DT_ID 
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
module EXC_DT_ID(
    
	 input [31:0] Instr,
    input [31:0] NPC_ID_IF,
    input [31:0] PC_GRFOut_ID_IF,
    
	 output [4:0] PC_AdEL,
    output [4:0] RI
    
	 );
  assign PC_AdEL = (`ERROR_AdEL) ? `AdEL : `NEXC;
  assign RI      = (!(`LEGAL_INSTR))? `EXC_RI : `NEXC; 

endmodule
