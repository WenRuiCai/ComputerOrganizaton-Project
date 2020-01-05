`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:08:56 12/06/2017 
// Design Name: 
// Module Name:    WB 
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
module WB(
    
	 input [1:0]  A_DR_W,
    input [4:0]  A3_W,
    input [31:0] ALU_O_W,
    input [31:0] DR_W,
    input [31:0] PC4_W,
    input [31:0] PC8_W,
    
	 //
	 input [1:0] Memtoreg_sel,
	 input [2:0] Lw_sel,
    
	 //
	 output [4:0] A3_WB,
    output [31:0] WD_WB,
	 output [31:0] DM_RD_WB
    );
  
  wire [31:0] DR_DE_MUX;
  
  assign A3_WB = A3_W;
  assign DM_RD_WB = DR_DE_MUX;
  
  
  DataExtend DE(A_DR_W, DR_W, Lw_sel, DR_DE_MUX);
  
  
  
  MUX3to1 #(32) Mux_RF_WD_WB(
  
      ALU_O_W, 
		DR_DE_MUX, 
		PC8_W, 
		
		Memtoreg_sel, 						//写寄存器值选择信号：
												//               00：ALU计算结果
												//               01：DM读出
												//					  10：PC+8 （jal/jalr）
		
		WD_WB
		    
			 );

endmodule
