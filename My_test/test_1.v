`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:10:15 10/18/2018
// Design Name:   code_1
// Module Name:   E:/CPU Project/My_test/test_1.v
// Project Name:  My_test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: code_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_1;

	// Inputs
	reg [3:0] d0;
	reg [3:0] d1;
	reg s;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	code_1 uut (
		.d0(d0), 
		.d1(d1), 
		.s(s), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		d0 = 0;
		d1 = 0;
		s = 0;

		// Wait 100 ns for global reset to finish
		#10;
		d0=3;
		d1=2;
		s=1;
		#10;
		d0=5;
		d1=0;
		s=0;
        
		// Add stimulus here

	end
      
endmodule

