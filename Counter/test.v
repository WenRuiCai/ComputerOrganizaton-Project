`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:32:36 10/11/2018
// Design Name:   code
// Module Name:   E:/CPU Project/Counter/test.v
// Project Name:  Counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code
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
	reg clk;
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	code uut (
		.clk(clk), 
		.in(in),
		.out(out)
	);

	initial begin
		clk=1;
		in=0;
		#10;
		in<=1;
		#10;
		in<=0;
		#10;
		in<=1;

	end
   always #5 clk=~clk;
endmodule

