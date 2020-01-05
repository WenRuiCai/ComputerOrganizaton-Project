`timescale 1ns / 1ps
`define TC0_AMatch (PrAddr[15:4] === 12'h7f0)
`define TC1_AMatch (PrAddr[15:4] === 12'h7f1)

`define Debug_Data 32'h20171225



/******* BE sel ********/
`define sw    4'b1111
`define sh_lo 4'b0011
`define sh_hi 4'b1100
`define sb_1  4'b0001
`define sb_2  4'b0010
`define sb_3  4'b0100
`define sb_4  4'b1000
/***********************/

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:55 12/26/2017 
// Design Name: 
// Module Name:    Bridge 
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
module Bridge(
    
	 // CPU相关数据输入
	 input [31:2] PrAddr,
    input [3:0]  PrBE,
    input [31:0] PrWD,
    input 		  PrWE,
	 
	 
	 // Device(Timer)相关数据输入
    input [31:0] TC_RD0,
    input [31:0] TC_RD1,
    input        TC_IRQ0,
    input        TC_IRQ1,
    
	 // 相关数据输出 -> Device(Timer)
	 output        TC_WE0,
    output        TC_WE1,
	 output [31:0]	TC_WD0,
	 output [31:0] TC_WD1,

    output [3:2]  TC_Addr0,
    output [3:2]  TC_Addr1,
    
	 // 相关数据输出 -> CPU
	 output [31:0] PrRD,
    output [7:2]  HWInt
	 
    );

/***************************************************/
// Timer寄存器地址
// Timer0: 0x0000_7f00 ~~ 0x0000_7f0B
// Timer1: 0x0000_7f10 ~~ 0x0000_7f1B

// DM地址
// 		  0x0000_0000 ~~ 0x0000_2fff
/**************************************************/


  // -> Device(Timer)
  assign TC_WE0 = PrWE & `TC0_AMatch;
  assign TC_WE1 = PrWE & `TC1_AMatch;
  
  assign TC_Addr0 = PrAddr[3:2];
  assign TC_Addr1 = PrAddr[3:2];
  
  assign TC_WD0 = (PrBE === `sw) ? PrWD :
						(PrBE === `sh_lo) ? {{TC_RD0[31:16]},{PrWD[15:0]}}:
						(PrBE === `sh_hi) ? {{PrWD[15:0]},{TC_RD0[15:0]}}:
						(PrBE === `sb_1)  ? {{TC_RD0[31:8]},{PrWD[7:0]}}:
						(PrBE === `sb_2)  ? {{TC_RD0[31:16]},{PrWD[7:0]},{TC_RD0[7:0]}}:
						(PrBE === `sb_3)  ? {{TC_RD0[31:24]},{PrWD[7:0]},{TC_RD0[15:0]}}:
						(PrBE === `sb_4)  ? {{PrWD[7:0]},{TC_RD0[23:0]}}:
																				  PrWD;
												  
  assign TC_WD1 = (PrBE === `sw) ? PrWD :
						(PrBE === `sh_lo) ? {{TC_RD1[31:16]},{PrWD[15:0]}}:
						(PrBE === `sh_hi) ? {{PrWD[15:0]},{TC_RD1[15:0]}}:
						(PrBE === `sb_1)  ? {{TC_RD1[31:8]},{PrWD[7:0]}}:
						(PrBE === `sb_2)  ? {{TC_RD1[31:16]},{PrWD[7:0]},{TC_RD1[7:0]}}:
						(PrBE === `sb_3)  ? {{TC_RD1[31:24]},{PrWD[7:0]},{TC_RD1[15:0]}}:
						(PrBE === `sb_4)  ? {{PrWD[7:0]},{TC_RD1[23:0]}}:
																				  PrWD;
  // -> CPU
  assign HWInt = {{2'b00}, {TC_IRQ0}, {TC_IRQ1}, {2'b00}};
  assign PrRD = (`TC0_AMatch) ? TC_RD0 :
					 (`TC1_AMatch) ? TC_RD1 :
									 `Debug_Data; 


endmodule
