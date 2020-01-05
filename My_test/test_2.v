`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:55:02 10/25/2018
// Design Name:   splitter
// Module Name:   E:/CPU Project/My_test/test_2.v
// Project Name:  My_test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: splitter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_2;

	// Inputs
	reg [31:0] A;

	// Outputs
	wire [7:0] O1;
	wire [7:0] O2;
	wire [7:0] O3;
	wire [7:0] O4;

	// Instantiate the Unit Under Test (UUT)
	splitter uut (
		.A(A), 
		.O1(O1), 
		.O2(O2), 
		.O3(O3), 
		.O4(O4)
	);

	initial begin
		// Initialize Inputs
		A = 32'b101;


	end
      
endmodule

