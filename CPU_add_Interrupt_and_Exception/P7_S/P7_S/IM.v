`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:57:33 12/06/2017 
// Design Name: 
// Module Name:    IM 
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
module IM(
  input [31:0] PC,
  output [31:0] Instr
    );
  
  reg [31:0] IFMemory [4095:0];
  
  integer i;
  initial begin
	 for(i = 0;i < 4096; i = i + 1)
		    IFMemory[i] = 0;
    $readmemh("code.txt",IFMemory);
	 $readmemh("code_handler.txt", IFMemory, 1120, 2047);
  end
  
  
  assign Instr = IFMemory[PC[13:2]];

endmodule
