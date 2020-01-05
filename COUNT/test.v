`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:41:03 10/12/2018
// Design Name:   id_fsm
// Module Name:   E:/CPU Project/COUNT/test.v
// Project Name:  COUNT
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [7:0] char;
	reg clk;
	reg out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		clk = 0;
		out = 0;
		#10;
      char =99;
		#10 char=68;
		#10 char=70;
		#10 char=111;
		#10 char=50;
		#10 char=9;
		
	end
   always #5 clk=~clk;   
endmodule

