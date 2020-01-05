`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:07:54 10/25/2018
// Design Name:   string
// Module Name:   E:/CPU Project/string/d.v
// Project Name:  string
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module d;

	// Inputs
	reg clk;
	reg clr;
	reg [7:0] in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	string uut (
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
      in="6";
		#10;
		in="+";
		#10;
		in="9";
		#10;
		in="6";
		#10;
		in="*";
		#10;
		in="4";
		#10;
		in="8";
		#10;
		in="p";
		#10;
		in="6";
		#10;
		in="*";
		#10;
		in="9";
		#10;
		in="+";
		// Add stimulus here

	end
      always #5 clk=~clk;
endmodule

