`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:14:26 12/07/2017 
// Design Name: 
// Module Name:    Res_E_Reg 
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
module Res_E_Reg(
    input clk,
    input reset,
	 input EXC_flush,
	 input clr,
	 input If_flush,
    
	 input [1:0] Res_ID,
    input [4:0] A1_ID,
    input [4:0] A2_ID,
    input [4:0] A3_ID,
    
	 output [1:0] Res_E,
    output [4:0] A1_E,
    output [4:0] A2_E,
    output [4:0] A3_E
    );
  
  reg [1:0] reg_res;
  reg [4:0] reg_A1;
  reg [4:0] reg_A2;
  reg [4:0] reg_A3;
  
  assign Res_E = reg_res;
  assign A1_E  = reg_A1;
  assign A2_E  = reg_A2;
  assign A3_E  = reg_A3;
  
  initial begin
   reg_res <= 2'b00;
	reg_A1  <= 5'b00000;
	reg_A2  <= 5'b00000;
	reg_A3  <= 5'b00000;
  end
  
  always@(posedge clk) begin
    if(reset | clr | If_flush | EXC_flush)
	   begin
		  reg_res <= 2'b00;
		  reg_A1  <= 5'b00000;
		  reg_A2  <= 5'b00000;
		  reg_A3  <= 5'b00000;
	   end
    else
	   begin
		  reg_res <= Res_ID;
		  reg_A1  <= A1_ID;
		  reg_A2  <= A2_ID;
		  reg_A3  <= A3_ID;
		end
  end

endmodule
