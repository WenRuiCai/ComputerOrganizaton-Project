`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:44:46 12/27/2017 
// Design Name: 
// Module Name:    EXC_Reg_D 
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
module EXC_Reg_D(
    input clk,
    input reset,
	 input D_en,
    input EXC_flush,
	 input D_flush,
    
	 
    input [31:0] PC_in,
    input [4:0]  ExcCode_in,
	 
    output [31:0] PC_out,
    output [4:0]  ExcCode_out
    );
  
  reg [31:0] PC;
  reg [4:0]  ExcCode;
  
  assign PC_out        = PC;
  assign ExcCode_out   = ExcCode;
  
  initial begin
    PC = 0;
	 ExcCode = 5'b11111;
  end
  
  
  always @(posedge clk) begin
    if(reset | EXC_flush | D_flush)
	   begin
		  PC        <= 0;
		  ExcCode   <= 5'b11111;
		end
	 else
	   if(D_en)
	     begin
		    PC        <= PC_in;
		    ExcCode   <= ExcCode_in;
		  end
  end


endmodule
