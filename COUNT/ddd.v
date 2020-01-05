`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:46:54 10/26/2018
// Design Name:   id_fsm
// Module Name:   E:/CPU Project/COUNT/ddd.v
// Project Name:  COUNT
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: id_fsm
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ddd;

	// Inputs
	reg [7:0] char;
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.char(char), 
		.clk(clk), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		char = 0;
		clk = 0;
		#10;
      char="a";
		#10;
		char="z";
		#10;
		char="5";

	end
   always #5 clk=~clk;
endmodule

