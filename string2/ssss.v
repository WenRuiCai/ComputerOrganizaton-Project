`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:55:06 11/01/2018
// Design Name:   string2
// Module Name:   E:/CPU Project/string2/test.v
// Project Name:  string2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string2
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
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string2 uut (
		.clk(clk), 
		.clr(clr), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here
		in="5";
		#10;
		in="7";
		#10;
		in="*";
		#10;
		in="2";
		#10;
		in="0";
		#10;
		in="+";
		#10;
		in="(";
		#10;
		in="6";
		#10;
		in="7";
		#10;
		in="*";
		#10;
		in="5";
		#10;
		in=")";
		#10;
		in="*";
		#10;
		in="0";
		#10;
		in="5";
		#2;
		clr=1;
		#8;
		clr=0;
		in=2;
		
	end
   always #5 clk=~clk;  
endmodule
