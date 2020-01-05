`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:22:55 12/27/2017 
// Design Name: 
// Module Name:    EXC_W_Reg 
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
module EXC_Reg_W(
    input clk,
    input reset,
	 input EXC_flush,
	 
	 input         EXLClr_in,
    input [31:0]  PC_in,
    output [31:0] PC_out,
	 output        EXLClr_out
    );
 
  reg [31:0] PC;
  reg        EXLClr;
  
  assign PC_out = PC;
  assign EXLClr_out = EXLClr;
  
  initial begin
    PC = 0;
	 EXLClr = 0;
  end
  
  always @(posedge clk) begin
    if(reset | EXC_flush)
	   begin
		  PC <= 0;
		  EXLClr <= 0;
		end
	 else
	   begin
		  PC <= PC_in;
		  EXLClr <= EXLClr_in;
		end
  end

endmodule
