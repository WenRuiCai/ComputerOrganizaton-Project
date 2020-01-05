`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:05:40 12/26/2017 
// Design Name: 
// Module Name:    SR 
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
module SR(
    input clk,
    input reset,
    input SR_WE,
	 
	 input EXLSet,
	 input EXLClr,
	 
	 
    input  [31:0] DIn,
    output [31:0] DOut,
	 
	 output [5:0] IM_SR,
	 output         IE_SR,
	 output         EXL_SR
    );
  
  reg [15:10] IM;							// 中断屏蔽位：  1 -- 允许中断 0 -- 禁止中断
  reg         IE;							// 全局使能中断：1 -- 允许中断 0 -- 禁止中断
  reg         EXL;						// 异常级：     1 -- 进入中断,不允许再中断 0 -- 允许中断
  
  // 初始化
  initial begin
    IM  = 6'b111111;
	 IE  = 1'b1;
	 EXL = 1'b0;
  end
  
  
  
  assign IM_SR = IM;
  assign IE_SR = IE;
  assign EXL_SR = EXL;
  
  
  // 读SR
  assign DOut = {{16'b0}, IM, {8'b0}, EXL, IE};
  
  // 写SR
  always @(posedge clk)begin
    if(reset)
	   begin
		  IM  <= 6'b111111;				// reset 允许中断
		  IE  <= 1'b1;						// IE    允许中断
		  EXL <= 1'b0;
		end
	 if(SR_WE)
	   begin
		{IM, EXL, IE} <= {{DIn[15:10]}, {DIn[1]}, {DIn[0]}};
		end
  end
  
  // 异常级控制
  always @(posedge clk)begin
    if(EXLSet)
	   EXL <= 1'b1;
	 else if(EXLClr)
	   EXL <= 1'b0;
  end

endmodule
