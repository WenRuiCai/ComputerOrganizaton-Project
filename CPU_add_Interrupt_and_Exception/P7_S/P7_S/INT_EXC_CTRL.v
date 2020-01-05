`timescale 1ns / 1ps

`define EXC_HD_PC 2'b01
`define EPC_PC    2'b10
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:42:20 12/27/2017 
// Design Name: 
// Module Name:    INT_EXC_CTRL 
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
module INT_EXC_CTRL(
    
	 input INT_EXC_Req,						// 中断/异常请求
    input ERET_In,							// 指令eret有效信号
    input Delay_Set,							// 是否是延迟槽指令
	 input MTMD_Set,							// 是否是mthi/mtlo指令
    
	 output EXLSet,							// 异常级置位
    output EXLClr,							// 异常级复位
    
	 output BDSet,								// Cause寄存器BD域置位
    output BDClr,								// Cause寄存器BD域复位
    
	 output PipReg_flush,					// 流水线寄存器清空信号
    output MD_EX_NE,							// 乘除单元禁止信号
	 output MTMD_RE,							// 乘除单元hi/lo复原信号
	 output DM_Pr_NE,							// DM数据存储器 / 外部设备 写使能禁止信号
	 output PC_En_EXC,						// PC使能信号
    
	 output D_reg_flush,						// eret后继指令清除信号
    
	 output [1:0] PC_EXC_HD_sel			// PC选择信号
    );
  
  /******* 中断/异常有效 ************/
  assign EXLSet       = INT_EXC_Req;
  assign PipReg_flush = INT_EXC_Req;
  assign MD_EX_NE     = INT_EXC_Req;
  assign DM_Pr_NE		 = INT_EXC_Req;
  assign PC_En_EXC    = INT_EXC_Req;
  assign MTMD_RE      = INT_EXC_Req & MTMD_Set;
  assign BDSet        = INT_EXC_Req & Delay_Set;
  /******** ERET返回有效 **************/
  assign EXLClr      = ERET_In;
  assign BDClr       = ERET_In;
  assign D_reg_flush = ERET_In;

  /********* PC选择信号 ****************/
  assign PC_EXC_HD_sel = (INT_EXC_Req === 1'b1) ? `EXC_HD_PC:
							    (ERET_In === 1'b1)     ? `EPC_PC:
													            2'b00;

endmodule
