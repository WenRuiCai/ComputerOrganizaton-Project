`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:43:33 12/06/2017 
// Design Name: 
// Module Name:    M_PipReg 
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
module M_PipReg(
    input clk,
    input reset,
	 input EXC_flush,
    
	 //
	 input [31:0] V2_EX,
    input [4:0] A3_EX,
    input [31:0] ALU_O_EX,
    input [31:0] PC4_EX,
    input [31:0] PC8_EX,
    
	 //
	 output [31:0] V2_M,
    output [4:0] A3_M,
    output [31:0] ALU_O_M,
    output [31:0] PC4_M,
    output [31:0] PC8_M
    );
  
  reg [31:0] V2_EX_reg;
  reg [4:0]  A3_EX_reg;
  reg [31:0] ALU_O_EX_reg;
  reg [31:0] PC4_EX_reg;
  reg [31:0] PC8_EX_reg;

  assign V2_M = V2_EX_reg;
  assign A3_M = A3_EX_reg;
  assign ALU_O_M = ALU_O_EX_reg;
  assign PC4_M = PC4_EX_reg;
  assign PC8_M = PC8_EX_reg;
  
  initial begin
	V2_EX_reg <= 32'b0;
	A3_EX_reg <= 5'b0;
	ALU_O_EX_reg <= 32'b0;
	PC4_EX_reg <= 32'b0;
	PC8_EX_reg <= 32'b0;
  end
  
  always@(posedge clk)begin
    if(reset | EXC_flush)
	   begin
		 V2_EX_reg <= 32'b0;
		 A3_EX_reg <= 5'b0;
		 ALU_O_EX_reg <= 32'b0;
		 PC4_EX_reg <= 32'b0;
		 PC8_EX_reg <= 32'b0;
		end
    else
		begin
		 V2_EX_reg <= V2_EX;
		 A3_EX_reg <= A3_EX;
		 ALU_O_EX_reg <= ALU_O_EX;
		 PC4_EX_reg <= PC4_EX;
		 PC8_EX_reg <= PC8_EX;
		end
  end


endmodule
