`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:13:02 10/29/2018
// Design Name:   FBnacii
// Module Name:   E:/CPU Project/FB/tr.v
// Project Name:  FB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FBnacii
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tr;

	// Inputs
	reg [31:0] number;
	reg clk;

	// Outputs
	wire [31:0] result;

	// Instantiate the Unit Under Test (UUT)
	FBnacii uut (
		.number(number), 
		.clk(clk), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		number = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#10;
        
		// Add stimulus here

	end
   always #5 clk=~clk;
endmodule

