`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:17:11 10/11/2018
// Design Name:   adder
// Module Name:   E:/CPU Project/ADD4/test.v
// Project Name:  ADD4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder
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
	reg [0:3] A;
	reg [0:3] B;
	reg Clk;
	reg En;

	// Outputs
	wire [0:3] Sum;
	wire Overflow;

	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.A(A), 
		.B(B), 
		.Clk(Clk), 
		.En(En), 
		.Sum(Sum), 
		.Overflow(Overflow)
	);

	initial begin
		// Initialize Inputs
		A = 4'b1111;
		B = 4'b0011;
		Clk=0;
		En=0;
	end
    always #10 Clk=~Clk;
endmodule
