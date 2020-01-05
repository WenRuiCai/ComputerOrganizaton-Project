`timescale 1ns / 1ps

`define NW  2'b00
`define ALU 2'b01
`define DM  2'b10
`define PC  2'b11
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:58:21 12/07/2017 
// Design Name: 
// Module Name:    Stall_Detect 
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
module Stall_Detect(
    input [4:0] A1_cur,
    input [4:0] A2_cur,
    input [4:0] A3_E,
    input [4:0] A3_M,
    input [4:0] A3_W,
    input [2:0] Tuse_rt,
    input [1:0] Tuse_rs,
    input [1:0] Res_E_out,
    input [1:0] Res_M_out,
    input [1:0] Res_W_out,
    output Stall_Data
    );
  
  wire stall_rs0_E1;
  wire stall_rs0_E2;
  wire stall_rs1_E2;
  wire stall_rs0_M1;
  
  wire stall_rt0_E1;
  wire stall_rt0_E2;
  wire stall_rt1_E2;
  wire stall_rt0_M1;
  
  wire stall_rs;
  wire stall_rt;
  
  
  
  assign stall_rs0_E1 = Tuse_rs[0] & (Res_E_out === `ALU) & (A1_cur === A3_E)& (A3_E !== 5'b00000);
  assign stall_rs0_E2 = Tuse_rs[0] & (Res_E_out === `DM)  & (A1_cur === A3_E)& (A3_E !== 5'b00000);
  assign stall_rs1_E2 = Tuse_rs[1] & (Res_E_out === `DM)  & (A1_cur === A3_E)& (A3_E !== 5'b00000);
  assign stall_rs0_M1 = Tuse_rs[0] & (Res_M_out === `DM)  & (A1_cur === A3_M)& (A3_M !== 5'b00000);
  
  assign stall_rt0_E1 = Tuse_rt[0] & (Res_E_out === `ALU) & (A2_cur === A3_E)& (A3_E !== 5'b00000);
  assign stall_rt0_E2 = Tuse_rt[0] & (Res_E_out === `DM)  & (A2_cur === A3_E)& (A3_E !== 5'b00000);
  assign stall_rt1_E2 = Tuse_rt[1] & (Res_E_out === `DM)  & (A2_cur === A3_E)& (A3_E !== 5'b00000);
  assign stall_rt0_M1 = Tuse_rt[0] & (Res_M_out === `DM)  & (A2_cur === A3_M)& (A3_M !== 5'b00000);

  assign stall_rs = stall_rs0_E1|
						  stall_rs0_E2|
						  stall_rs1_E2|
						  stall_rs0_M1;
  
  assign stall_rt = stall_rt0_E1|
						  stall_rt0_E2|
						  stall_rt1_E2|
						  stall_rt0_M1;
						  
  assign Stall_Data = stall_rt | stall_rs;
endmodule
