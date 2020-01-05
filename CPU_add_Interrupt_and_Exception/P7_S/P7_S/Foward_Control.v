`timescale 1ns / 1ps

`define RF_RD1 3'b000
`define RF_RD2 3'b000

`define DM_RD_W_FID 3'b001
`define ALU_O_W_FID 3'b010
`define ALU_O_M_FID 3'b011
`define PC8_M       3'b100

`define V1_E 2'b00
`define V2_E 2'b00
`define V2_M 2'b00

`define DM_RD_W_FEX 2'b01
`define ALU_O_W_FEX 2'b10
`define ALU_O_M_FEX 2'b11

`define ALU 2'b01
`define DM  2'b10
`define PC  2'b11
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:46 12/07/2017 
// Design Name: 
// Module Name:    Foward_Control 
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
module Foward_Control(
    input [4:0] A1_cur,
    input [4:0] A1_E,
    input [4:0] A1_M,
	 input [4:0] A2_cur, 
	 input [4:0] A2_E,
    input [4:0] A2_M,
	 input [4:0] A3_E,
    input [4:0] A3_M,
    input [4:0] A3_W,
	 input [1:0] Res_E,
	 input [1:0] Res_M,
	 input [1:0] Res_W,
	 
	 output [2:0]  FRSID,
	 output [2:0]  FRTID,
	 output [1:0]  FV1EX,
	 output [1:0]  FV2EX,
	 output [1:0]  FV2MEM
    );


	 
    assign FRSID = ((A1_cur === A3_M) & (A3_M !== 5'b00000) & (Res_M === `PC))  ? `PC8_M:
	                ((A1_cur === A3_M) & (A3_M !== 5'b00000) & (Res_M === `ALU)) ? `ALU_O_M_FID:
						 ((A1_cur === A3_W) & (A3_W !== 5'b00000) & (Res_W === `ALU)) ? `ALU_O_W_FID:
						 ((A1_cur === A3_W) & (A3_W !== 5'b00000) & (Res_W === `DM))  ? `DM_RD_W_FID: 
						                                                                `RF_RD1;
																			  
	 assign FRTID = ((A2_cur === A3_M) & (A3_M !== 5'b00000) & (Res_M === `PC))  ? `PC8_M:
	                ((A2_cur === A3_M) & (A3_M !== 5'b00000) & (Res_M === `ALU)) ? `ALU_O_M_FID:
						 ((A2_cur === A3_W) & (A3_W !== 5'b00000) & (Res_W === `ALU)) ? `ALU_O_W_FID:
						 ((A2_cur === A3_W) & (A3_W !== 5'b00000) & (Res_W === `DM))  ? `DM_RD_W_FID: 
						                                                                `RF_RD2;
																			  
    assign FV1EX = ((A1_E === A3_M)   & (A3_M !== 5'b00000) & (Res_M === `ALU)) ? `ALU_O_M_FEX:
						 ((A1_E === A3_W)   & (A3_W !== 5'b00000) & (Res_W === `ALU)) ? `ALU_O_W_FEX:
						 ((A1_E === A3_W)   & (A3_W !== 5'b00000) & (Res_W === `DM))  ? `DM_RD_W_FEX: 
						                                                                `V1_E;
																			  
	 assign FV2EX = ((A2_E === A3_M)   & (A3_M !== 5'b00000) & (Res_M === `ALU)) ? `ALU_O_M_FEX:
						 ((A2_E === A3_W)   & (A3_W !== 5'b00000) & (Res_W === `ALU)) ? `ALU_O_W_FEX:
						 ((A2_E === A3_W)   & (A3_W !== 5'b00000) & (Res_W === `DM))  ? `DM_RD_W_FEX: 
						                                                                `V2_E;
																			  
    assign FV2MEM= ((A2_M === A3_W)   & (A3_W !== 5'b00000) & (Res_W === `ALU)) ? `ALU_O_W_FEX:
						 ((A2_M === A3_W)   & (A3_W !== 5'b00000) & (Res_W === `DM))  ? `DM_RD_W_FEX: 
						                                                                `V2_M;
endmodule
