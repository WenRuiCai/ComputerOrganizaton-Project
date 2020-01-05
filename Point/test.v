`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:02:07 10/12/2018
// Design Name:   pipeline
// Module Name:   E:/CPU Project/Point/test.v
// Project Name:  Point
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipeline
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
	reg [31:0] A1;
	reg [31:0] A2;
	reg [31:0] B1;
	reg [31:0] B2;
	reg clk;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	pipeline uut (
		.A1(A1), 
		.A2(A2), 
		.B1(B1), 
		.B2(B2), 
		.clk(clk), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A1 = 0;
		A2 = 0;
		B1 = 0;
		B2 = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		A1=0;
		B1=1;
		A2=2;
		B2=3;
		#10;
		A1=3;
		B1=2;
		A2=1;
		B2=0;
		#10;
        
		// Add stimulus here

	end
	always #5 clk=~clk;
      
endmodule

