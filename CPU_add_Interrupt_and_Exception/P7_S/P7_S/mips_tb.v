`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:43:32 12/17/2017
// Design Name:   mips
// Module Name:   F:/ISE project/P6/mips_tb.v
// Project Name:  P6
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

module mips_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] PrRD;
	reg [7:2]  HWInt;

	// Instantiate the Unit Under Test (UUT)
	mips_CPU uut (
		.clk(clk), 
		.reset(reset),
		.PrRD(PrRD),
		.HWInt(HWInt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		PrRD = 0;
		HWInt = 0;
      $stop;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
   
	always #5 clk = ~clk;
endmodule

