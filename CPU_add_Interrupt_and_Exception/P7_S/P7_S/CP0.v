`timescale 1ns / 1ps

/************ExcCode Match**************/
`define Exc_INT	(ExcCode === 5'b00000)				// 中断
`define Exc_AdEL  (ExcCode === 5'b00100)				// 取数或取指时地址错误
`define Exc_AdES  (ExcCode === 5'b00101)				// 存数时地址错误
`define Exc_RI    (ExcCode === 5'b01010)				// 非法指令
`define Exc_Ov    (ExcCode === 5'b01100)				// 自陷--溢出
/**************************************/

/*********** Addr Match *****************/
`define SR_RD    (Addr_RD === 32'h0000000c) 
`define CAUSE_RD (Addr_RD === 32'h0000000d) 
`define EPC_RD   (Addr_RD === 32'h0000000e) 
`define PRID_RD  (Addr_RD === 32'h0000000f) 

`define SR_WD    (Addr_WD === 32'h0000000c) 
`define CAUSE_WD (Addr_WD === 32'h0000000d) 
`define EPC_WD   (Addr_WD === 32'h0000000e) 
/****************************************/
 
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:48:52 12/26/2017 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
	 
	 input clk,
    input reset,
	 
	 
    input [4:0]  Addr_RD,				// 读CP0寄存器地址
    input [4:0]  Addr_WD,				// 写CP0寄存器地址
    input [31:0] DIn,					// CP0写入数据
    
	 input [31:0] PC,						// 中断/异常时的PC
	 input        BDSet,					// Cause寄存器BD域置位 -- 是否延迟槽内指令异常
	 output		  BDClr,					// Cause寄存器BD域复位 
	 
    input [4:0]  ExcCode,				// 中断/异常类型
    input [5:0]  HWInt,					// 外部设备中断请求
    
	 input        WE,						// CP0寄存器写使能
    input        EXLSet,				// 异常级置位	   IntReq
    input        EXLClr,				// 异常级复位    Eret
    
	 output        INT_EXC_Req,		// 中断/异常请求
    output [31:0] EPC,					// EPC寄存器输出至NPC
    output [31:0] DOut					// CP0寄存器输出数据
    );
	
/******** ExcCode 选择**********************************/
	 wire [4:0] ExcCode_CP0;
	 assign ExcCode_CP0 = (INT_Req) ? `Exc_INT : ExcCode;

/******** 中断/异常信号 检测/输出 **************************/
    wire EXC_Req;							// 异常请求
	 wire INT_Req;							// 中断请求 

    wire       IE_SR;						// 全局中断使能
	 wire [5:0] IM_SR;						// 外设中断屏蔽位
	 wire       EXL_SR;						// 异常级
	 
	 assign EXC_Req = (`Exc_AdEL | `Exc_AdES | `Exc_RI | `Exc_Ov);
    assign INT_Req = |(HWInt & IM_SR) & IE_SR & !EXL_SR ;
	 
	 assign INT_EXC_Req = INT_Req | EXC_Req;
/*******************************************************/    
	
/********** 指令写使能信号 **************************/
    
	 wire SR_WE;
	 wire Cause_WE;
	 wire EPC_WE;
	 
	 
	 assign SR_WE    = WE & `SR_WD;
	 assign Cause_WE = 0;//WE & `CAUSE_WD;
	 assign EPC_WE   = WE & `EPC_WD;
	 
/**************************************************/

/********** 中断/异常响应--相关写使能 *************************/
    
	 wire EPC_PCWE;
	 wire ECode_WE;
	 wire IP_WE;
	 
	 assign EPC_PCWE  = (INT_EXC_Req)            ? 1'b1 : 1'b0;
	 assign ECode_WE  = (INT_EXC_Req)            ? 1'b1 : 1'b0;
	 assign IP_WE     = 1'b1;													// 在clock上升沿 不断的保存外部6个中断
	 
/***********************************************/

/********** CP0输出数据 ****************************/
    
	 assign EPC = (`EPC_RD & EPC_WE)     ? {DIn[31:2],{2'b00}}:
														{EPC_DOut[31:2],{2'b00}};
	 assign DOut = (`SR_RD & SR_WE)       ? DIn:		// 内部转发
						(`EPC_RD & EPC_WE)     ? {DIn[31:2],{2'b00}}:
						
						(`SR_RD)     ? SR_DOut:
						(`CAUSE_RD)  ? Cause_DOut:
						(`EPC_RD)    ? {EPC_DOut[31:2],{2'b00}}:
						(`PRID_RD)   ? PRID_DOut:
											32'h00000000;

/********** 相关模块实例化 *********************************/
	 
	 wire [31:0] SR_DOut;
	 wire [31:0] Cause_DOut;
	 wire [31:0] EPC_DOut;
	 wire [31:0] PRID_DOut;

	 SR      SR_CP0(

					  clk,
					  reset,
					  SR_WE,
					  
					  EXLSet,
					  EXLClr,
					  
					  DIn,
					  SR_DOut,
					  
					  IM_SR,
					  IE_SR,
					  EXL_SR
						  
						  );

	 CAUSE   Cause_CP0(
					  
					  clk,
					  reset,
					  
					  Cause_WE,
					  BDSet,
					  BDClr,
					  
					  ECode_WE,
					  ExcCode_CP0,
					  
					  IP_WE,
					  HWInt,
					  
					  DIn,
					  
					  Cause_DOut
		);

	 EPC     EPC_CP0(
					  
					  clk,
					  reset,
					  
					  EPC_PCWE,
					  PC,
					  
					  EPC_WE,
					  DIn,
					  
					  EPC_DOut
		);
    
	 PRID   PRID_CP0(
					  
					  clk,
					  reset,
					  
					  PRID_DOut
		);

/********************************************************/

  
endmodule
