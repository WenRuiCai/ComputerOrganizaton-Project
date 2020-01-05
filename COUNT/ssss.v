`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:05:08 10/26/2018
// Design Name:   id_fsm
// Module Name:   E:/CPU Project/COUNT/ssss.v
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

module ssss;

	// Inputs
	reg [7:0] in;
	reg clk;
	reg clr;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	id_fsm uut (
		.in(in), 
		.clk(clk), 
		.clr(clr), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;
		clr = 0;

		// Wait 100 ns for global reset to finish
		#100;
      in="2";
		#10;
		in="6";
		#10;
		in="*";
		#10;
		in="7";
		// Add stimulus here

	end
   always #5 clk=~clk;
endmodule

