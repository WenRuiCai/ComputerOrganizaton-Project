`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:10:30 10/26/2018
// Design Name:   string
// Module Name:   E:/CPU Project/new_string/test.v
// Project Name:  new_string
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

module test;

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
		#100;
        
		// Add stimulus here
		in="6";
		#10;
		in="+";
		#10;
		in="9";
		#10;
		in="+";
		#10;
		in="4";
		#2;
		clr=1;
		#2;
		clr=0;
		#6;
		in="6";
		#10;
		in="*";
		#10;
		in="6";
	end
   always #5 clk=~clk;   
endmodule

