`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:44 12/07/2017 
// Design Name: 
// Module Name:    Res_M_Reg 
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
module Res_M_Reg(
    input clk,
    input reset,
	 input EXC_flush,
    
	 input [1:0] Res_E,
    input [4:0] A1_E,
    input [4:0] A2_E,
    input [4:0] A3_E,
    
	 output [1:0] Res_M,
    output [4:0] A1_M,
    output [4:0] A2_M,
    output [4:0] A3_M
    );
  
  reg [1:0] reg_res;
  reg [4:0] reg_A1;
  reg [4:0] reg_A2;
  reg [4:0] reg_A3;
  
  assign Res_M = reg_res;
  assign A1_M  = reg_A1;
  assign A2_M  = reg_A2;
  assign A3_M  = reg_A3;
  
  initial begin
   reg_res <= 2'b00;
	reg_A1  <= 5'b00000;
	reg_A2  <= 5'b00000;
	reg_A3  <= 5'b00000;
  end
  
  
  always@(posedge clk) begin
    if(reset | EXC_flush)
	   begin
		  reg_res <= 2'b00;
		  reg_A1  <= 5'b00000;
		  reg_A2  <= 5'b00000;
		  reg_A3  <= 5'b00000;
	   end
    else
	   begin
		  reg_res <= Res_E;
		  reg_A1  <= A1_E;
		  reg_A2  <= A2_E;
		  reg_A3  <= A3_E;
		end
  end

endmodule

