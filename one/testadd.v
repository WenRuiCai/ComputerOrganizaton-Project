`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:19:41 09/25/2018
// Design Name:   add
// Module Name:   E:/CPU Project/one/testadd.v
// Project Name:  one
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: add
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testadd;

	// Inputs
	reg clk;
	reg en;
	reg A;
	reg B;

	// Outputs
	wire sum;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	add uut (
		.clk(clk), 
		.en(en), 
		.A(A), 
		.B(B), 
		.sum(sum), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		en = 0;
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		add ad1(.clk(clk),.en(1),.A(1),.B(1));
	end
      
endmodule

