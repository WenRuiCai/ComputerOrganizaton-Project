`timescale 1ns / 1ps

`define HitDM (ALU_O_M >= 32'h00000000) & (ALU_O_M <= 32'h00002fff)
`define HitDevice ((ALU_O_M >= 32'h00007f00) & (ALU_O_M <= 32'h000007f0b)) | ((ALU_O_M >= 32'h00007f10) & (ALU_O_M <= 32'h000007f1b))
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:58:24 12/06/2017 
// Design Name: 
// Module Name:    MEM 
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
module MEM(
    //
	 input clk,
    input reset,
    input MemWrite,
	 input DM_NE,
	 input [1:0] Sw_sel,
	 input       MEMout_sel,
	 //
	 input [31:0] V2_M,
    input [4:0]  A3_M,
    input [31:0] ALU_O_M,
    input [31:0] PC4_M,
    input [31:0] PC8_M,
    
	 //
    input [1:0] FV2MEM,
    
	 //转发输入信号
	 input [31:0] DM_RD_W,
    input [31:0] ALU_O_W,
    
	 //Device
	 input [31:0] PrRD,
	 
	 //CP0
	 input [31:0] CP0_DOut,
	 
	 //
	 output [31:0] MEM_DR_MEM,
    output [31:0] ALU_O_MEM,
    output [31:0] PC4_MEM,
    output [31:0] PC8_MEM,
    output [4:0]  A3_MEM,
	 output [1:0]  A_DR_MEM,
	 
	 output [31:0] CP0_DIn,									// RF[rt]->CP0(已转发之后)
	 
	 output [31:2] PrAddr,
	 output [3:0]  PrBE,
	 output [31:0] PrWD,
	 output        PrWE
    );
  
  wire [31:0] MuxF_DM_wire_MEM;
  wire [3:0]  BE_wire_MEM;									//
  wire [31:0] DR_MEM;
  wire [31:0] DM_Pr_DR_MEM;
  wire        DM_WE;
  
  assign DM_WE = MemWrite & `HitDM;						// DM 写使能
  
  // CPU-Device
  assign PrAddr = ALU_O_M[31:2];
  assign PrBE = BE_wire_MEM;
  assign PrWD = MuxF_DM_wire_MEM;
  assign PrWE = MemWrite & `HitDevice & (!DM_NE);
  
  
  //相关传递信号
  assign A_DR_MEM = ALU_O_M[1:0];
  assign PC4_MEM = PC4_M;
  assign PC8_MEM = PC8_M;
  assign A3_MEM  = A3_M;
  assign ALU_O_MEM = ALU_O_M;
  
  assign CP0_DIn = MuxF_DM_wire_MEM;
  
  BitExtend  BE(
                ALU_O_M[1:0], 
                Sw_sel, 
					 BE_wire_MEM
					);
  
  DM DataMemory(
      
		clk, 
		reset, 
		DM_WE & (!DM_NE), 
		
		BE_wire_MEM,
		ALU_O_M[13:0], 
		MuxF_DM_wire_MEM,
      PC4_M,		
		
		DR_MEM
		
		      );
		
  MUX3to1 #(32) MuxF_V2_MEM(
  
      V2_M, 
		DM_RD_W, 
		ALU_O_W, 
		
		FV2MEM, 
		
		MuxF_DM_wire_MEM
		       
				 );

  MUX2to1 #(32) Mux_DM_Pr_DR_MEM(
      DR_MEM,
		PrRD,
		
		`HitDevice,
		
		DM_Pr_DR_MEM
				 
				 );
  MUX2to1 #(32) Mux_MEM_DR_MEM(
      DM_Pr_DR_MEM,
		CP0_DOut,
		
		MEMout_sel,
		
		MEM_DR_MEM
				 );
endmodule
