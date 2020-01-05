`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:15:41 12/26/2017 
// Design Name: 
// Module Name:    CAUSE 
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
module CAUSE(
    
	 input clk,
    input reset,
    
	 input Cause_WE,				// 原因寄存器写使能
    
	 input BDSet,					// BD置位 使能信号
	 input BDClr,					// BD复位 清除信号
	 
    input 		 ECode_WE,	   // ExcCode置位 使能信号
	 input [4:0] ExcCode,		// ExcCode写入
	 
	 input         IP_WE,		// IP 写使能信号
	 input [5:0] IP,			// 设备中断情况
	 
	 input [31:0]  DIn,
    
	 output [31:0] DOut
    );
  
  reg [6:2]   ExcCode_Cause;		// 中断/异常 原因编码
  reg [15:10] IP_Cause;				// 6位中断状态
  reg         BD;						// 分支延迟 是否为延迟槽内指令异常
  
  //初始化
  initial begin
    ExcCode_Cause = 5'b11111;
	 IP_Cause      = 0;
	 BD            = 0;
  end
  
  
  // 读Cause寄存器
  assign DOut = {BD, {15'b0}, IP_Cause, {3'b0}, ExcCode_Cause, {2'b0}};
  
  // 写Cause寄存器
  always @(posedge clk) begin
    if(reset)
	   begin
		  ExcCode_Cause <= 5'b11111;
		  IP_Cause      <= 0;
		  BD            <= 0;
		end
	 else
	   if(Cause_WE)
		  begin
		  {BD, IP_Cause, ExcCode_Cause} <= {{DIn[31]}, {DIn[15:10]}, {DIn[6:2]}};
		  end
  end

  // Cause ExcCode 写入控制
  always @(posedge clk) begin
    if(ECode_WE)
	   begin
		  ExcCode_Cause <= ExcCode;
		end
  end
  
  // Cause BD（分支延迟位）置位控制
  always @(posedge clk) begin
    if(BDSet)
	   begin
		  BD <= 1'b1;
		end
	 else if(BDClr)
	   begin
		  BD <= 1'b0;
		end
  end

  // Cause IP 写入控制
  always @(posedge clk) begin
    if(IP_WE)
	   begin
		  IP_Cause <= IP;
		end
  end
endmodule
