`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:51:23 09/29/2018
// Design Name:   buffer
// Module Name:   E:/CPU Project/one/buffer_tb.v
// Project Name:  one
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: buffer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module buffer_tb;

	// Inputs
	reg clk;
	reg in;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	buffer uut (
		.clk(clk), 
		.in(in), 
		.out(out)
	);

	initial begin
		clk=1;
		in=0;
		#10;
		in=1;
		#10;
		in=0;
		#10;
		in=1;
	end
   always #5 clk=~clk;
endmodule

