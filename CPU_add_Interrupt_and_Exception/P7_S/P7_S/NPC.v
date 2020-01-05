`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:54:35 12/06/2017 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
    input [31:0] PCPlus4,
    input [25:0] Instr_2500,
    input NPCOp,
    output [31:0] NPC_result
    );
  wire [31:0] Ext_LBit_wire_NPC;
  wire [31:0] LBit_ADD4_wire_NPC;
  wire [31:0] ADD4_Mux_wire_NPC;
  wire [31:0] J_PC_Mux_wire_NPC;
  
  assign J_PC_Mux_wire_NPC = {{PCPlus4[31:28]}, Instr_2500, {2{1'b0}}};
  
  EXT  Ext_in_NPC(Instr_2500[15:0], 2'b01, Ext_LBit_wire_NPC);
  LBit Lbit_in_NPC(Ext_LBit_wire_NPC, LBit_ADD4_wire_NPC);
  ADD4 Add4_in_NPC(LBit_ADD4_wire_NPC, PCPlus4, ADD4_Mux_wire_NPC);
  MUX2to1 #(32) Mux_in_NPC(ADD4_Mux_wire_NPC, J_PC_Mux_wire_NPC, NPCOp, NPC_result);
  
endmodule
