`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:20:30 12/07/2017 
// Design Name: 
// Module Name:    Res_W_Reg 
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
module Res_W_Reg(
    input clk,
    input reset,
	 input EXC_flush,
    
	 input [1:0] Res_M,
    input [4:0] A1_M,
    input [4:0] A2_M,
    input [4:0] A3_M,
    
	 output [1:0] Res_W,
    output [4:0] A3_W
    );
  
  reg [1:0] reg_res;
  reg [4:0] reg_A3;
  
  assign Res_W = reg_res;
  assign A3_W  = reg_A3;
  
  initial begin
    reg_res <= 2'b00;
	 reg_A3  <= 5'b00000;
  end
  
  always@(posedge clk) begin
    if(reset | EXC_flush)
	   begin
		  reg_res <= 2'b00;
		  reg_A3  <= 5'b00000;
	   end
    else
	   begin
		  reg_res <= Res_M;
		  reg_A3  <= A3_M;
		end
  end

endmodule