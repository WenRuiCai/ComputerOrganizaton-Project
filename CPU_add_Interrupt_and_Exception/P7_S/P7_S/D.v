`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:17:32 12/06/2017 
// Design Name: 
// Module Name:    D_PipReg 
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
module D_PipReg(
    input clk,
    input reset,
	 input EXC_flush,
	 input D_flush,
    input en,
    
	 //
	 input [31:0] Instr_IF,
    input [31:0] PC4_IF,
    input [31:0] PC8_IF,
    
	 //
	 output [31:0] Instr_D,
    output [31:0] PC4_D,
    output [31:0] PC8_D
    );
  
  reg [31:0] Instr_D_reg;
  reg [31:0] PC4_D_reg;
  reg [31:0] PC8_D_reg;

  assign Instr_D = Instr_D_reg;
  assign PC4_D   = PC4_D_reg;
  assign PC8_D   = PC8_D_reg;
  
  initial begin
    Instr_D_reg <= 32'h00000000;
	 PC4_D_reg   <= 32'h00000000;
	 PC8_D_reg   <= 32'h00000000;
  end
  
  always@(posedge clk)begin
    if(reset | EXC_flush | D_flush)
	   begin
		  Instr_D_reg <= 32'h00000000;
		  PC4_D_reg   <= 32'h00000000;
		  PC8_D_reg   <= 32'h00000000;
		end
    else
	   if(en)
		  begin
		    Instr_D_reg <= Instr_IF;
		    PC4_D_reg   <= PC4_IF;
		    PC8_D_reg   <= PC8_IF;
		  end
  end
endmodule
