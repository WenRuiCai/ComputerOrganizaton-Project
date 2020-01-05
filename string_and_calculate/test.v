`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:59:16 11/05/2018
// Design Name:   string_and_calculate
// Module Name:   E:/CPU Project/string_and_calculate/test.v
// Project Name:  string_and_calculate
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: string_and_calculate
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
	reg [7:0] in;
	reg clk;
	reg clr;

	// Outputs
	wire out_judge;
	wire [31:0] out_result;

	// Instantiate the Unit Under Test (UUT)
	string_and_calculate uut (
		.in(in), 
		.clk(clk), 
		.clr(clr), 
		.out_judge(out_judge), 
		.out_result(out_result)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;
		clr = 0;
		#10;
		in="6";
		#10;
		in="*";
		#10;
		in="9";
		#10;
		in="0";
		#10;
		in="+";
		#10;
		in="8";
		#6;
		clr=1;
		#1;
		clr=0;
		#3;
		in="6";
		#10;
		in="5";
		#10;
		in="*";
		#10;
		in="4";
		#10;
		in="+";
		#10;
		in="7";
		
		
	end
     always #5 clk=~clk;
endmodule

