`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:31:23 12/06/2017 
// Design Name: 
// Module Name:    EX 
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
module EX(
    
	 input clk,
	 input reset,
	 
	 //
	 input [31:0] V1_E,
    input [31:0] V2_E,
    input [4:0]  A3_E,
    input [31:0] EXT_E,
    input [31:0] PC4_E,
    input [31:0] PC8_E,
    
	 //
	 input [31:0] DM_RD_W,
    input [31:0] ALU_O_W,
    input [31:0] ALU_O_M,

	 //
	 input [1:0] FV1EX,
    input [1:0] FV2EX,
    
	 //
	 input [1:0] ALUSrc_sel,
	 input       ALUout_sel,
    input [3:0] ALUControl,
	 
	 //
	 input [1:0] EXout_sel,
	 input [2:0] MDControl,
	 input Start,
	 
	 input MD_EX_NE,
	 input MTMD_RE,		          // hi、lo寄存器复原信号
	 
	 //
	 output [31:0] EX_O_EX,
    output [31:0] V2_EX,
    output [31:0] PC4_EX,
    output [31:0] PC8_EX,
    output [4:0]  A3_EX,
	 
	 output Busy,
	 output Overflow					// 异常判断
    );
  
  wire [31:0] MuxFV1_ALUA_wire_EX;
  wire [31:0] MuxALUB_ALUB_wire_EX;
  wire [31:0] ALU_O_wire_EX;
  wire [31:0] HI;
  wire [31:0] LO;
  
  //相关传递信号
  assign PC4_EX = PC4_E;
  assign PC8_EX = PC8_E;
  assign A3_EX  = A3_E;
  

  
  ALU alu(
      
		MuxFV1_ALUA_wire_EX, 
		MuxALUB_ALUB_wire_EX, 
		EXT_E[10:6],
		
		ALUControl,
		ALUout_sel,
		
		ALU_O_wire_EX,
		Overflow    
			 );
	MD_EX Mult_Div_Unit(
	   
		clk,
		reset,
		
		MuxFV1_ALUA_wire_EX,
		V2_EX,
		
		MDControl,
		Start,
		MD_EX_NE,
		MTMD_RE,
		
		Busy,
		HI,
		LO
		);
			 
  //*****转发多选器*****//
  MUX4to1 MuxF_V1_EX(
      
		V1_E, 
		DM_RD_W, 
		ALU_O_W, 
		ALU_O_M, 
		
		FV1EX, 
		
		MuxFV1_ALUA_wire_EX
		
		    );
  MUX4to1 MuxF_V2_EX(
      
		V2_E, 
		DM_RD_W, 
		ALU_O_W, 
		ALU_O_M, 
		
		FV2EX, 
		
		V2_EX
		    );
  //*****转发多选器*****//
  
  //*****功能多选器*****//
  MUX3to1 Mux_ALU_B_EX(
      
		V2_EX, 
		EXT_E, 
		32'h00000000,
		
		ALUSrc_sel, 					// ALU端口B选择值
											//              00：RF.RD2
											//					 01: 立即数扩展值
											//              10: 32'h00000000
		
		MuxALUB_ALUB_wire_EX
		
		    );
  MUX3to1 Mux_EXout_EX(
      ALU_O_wire_EX,
		HI,
		LO,
		
		EXout_sel,						// EX级ALU输出口选择值 ALU/MD（HI、LO）
											// 00：ALU
											// 01：HI
											// 10：LO
		EX_O_EX
          );
endmodule
