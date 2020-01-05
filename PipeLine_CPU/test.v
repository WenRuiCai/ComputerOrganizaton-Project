`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:33:11 12/02/2018
// Design Name:   mips
// Module Name:   E:/CPU Project/PipeLine_CPU/test.v
// Project Name:  PipeLine_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
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
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
        
		// Add stimulus here
		/*#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;
		#5;
		clk=~clk;*/
	end
      always #1 clk=~clk;
endmodule

