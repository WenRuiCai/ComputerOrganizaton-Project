`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:45 12/06/2017 
// Design Name: 
// Module Name:    ID 
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
module ID(
    input clk,
    input reset,
    input WE,
    
	 //
	 input [31:0] Instr,
    
	 //
	 input NPCOp,
    input [2:0] CMPOp,
    input [1:0] EXTOp,
    
	 //
	 input [2:0] FRSID,
    input [2:0] FRTID,
    
	 //
	 input [1:0] RegDst_sel,
    
	 //
	 input [31:0] PC4_D,
    input [31:0] PC8_D,
    
	 //转发输入信号
	 input [31:0] DM_RD_W,
    input [31:0] ALU_O_W,
    input [31:0] ALU_O_M,
    input [31:0] PC8_M,
	 
	 //from WB -- 写寄存器 地址/数据
	 input [4:0]  A3_WB,
    input [31:0] WD_WB,
   
	 //
    output [31:0] NPC_result,			//下一PC值
    output        CMP_result,			//CMP比较器结果
    
	 //
	 output [31:0] V1_ID,
    output [31:0] V2_ID,
    output [4:0]  A3_ID,
    output [31:0] EXT_ID,
    output [31:0] PC4_ID,
    output [31:0] PC8_ID
    );
  
  
  wire [31:0] RFRD1_MuxF_wire_ID;
  wire [31:0] RFRD2_MuxF_wire_ID;
  
  assign PC4_ID = PC4_D;
  assign PC8_ID = PC8_D;
  

  
  RF RegFile(
  
      clk, 
		reset, 
		WE, 
		
		Instr[25:21], 
		Instr[20:16], 
		A3_WB, 
		WD_WB, 
		
		RFRD1_MuxF_wire_ID, 
		RFRD2_MuxF_wire_ID
		
		      );
				
  NPC NextPC(
      
		PC4_D, 
		Instr[25:0], 
		
		NPCOp, 						//NPC选择
										//       0：PC+4+sign_ext(offset||00)
										//       1: PC31..28||index||00
		NPC_result
		
		      );
				
  CMP Compare_For_Branch(
      
		V1_ID, 
		V2_ID, 
		
		CMPOp,						//CMP选择
										//       0：相等为1
		
		CMP_result
		      );
				
  EXT Ext_in_ID(
      
		Instr[15:0], 				// offset
		
		EXTOp, 						//EXT选择
										//      00：无符号扩展
										//      01：符号扩展
										//      10：末位拼接
		
		EXT_ID
		
		      );
  
  //*************转发多选器***********//
  MUX5to1 #(32) MuxF_CMPD1_ID(
      
		RFRD1_MuxF_wire_ID, 
		DM_RD_W, 
		ALU_O_W, 
		ALU_O_M, 
		PC8_M, 
		
		FRSID, 
		
		V1_ID
		
		      );			
  MUX5to1 #(32) MuxF_CMPD2_ID(
      
		RFRD2_MuxF_wire_ID, 
		DM_RD_W, 
		ALU_O_W, 
		ALU_O_M, 
		PC8_M, 
		
		FRTID, 
		
		V2_ID
		      
				);
  //*************转发多选器***********//
  
  //功能多选器
  MUX3to1 #(5)  Mux_A3_ID(
      
		Instr[20:16], 
		Instr[15:11], 
		5'b11111, 
		
		RegDst_sel, 
		
		A3_ID
		      
				);
				
endmodule
