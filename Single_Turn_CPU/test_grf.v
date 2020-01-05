`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:23:16 11/16/2018
// Design Name:   GRF
// Module Name:   E:/CPU Project/Single_Turn_CPU/test_grf.v
// Project Name:  Single_Turn_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GRF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_grf;

	// Inputs
	reg clk;
	reg Enabled;
	reg reset;
	reg [4:0] A1;
	reg [4:0] A2;
	reg [4:0] A3;
	reg [31:0] WD3;

	// Outputs
	wire [31:0] RD1;
	wire [31:0] RD2;

	// Instantiate the Unit Under Test (UUT)
	GRF uut (
		.clk(clk), 
		.Enabled(Enabled), 
		.reset(reset), 
		.A1(A1), 
		.A2(A2), 
		.A3(A3), 
		.WD3(WD3), 
		.RD1(RD1), 
		.RD2(RD2)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		Enabled = 0;
		reset = 0;
		A1 = 0;
		A2 = 0;
		A3 = 0;
		WD3 = 0;

		// Wait 100 ns for global reset to finish
		#10;
      Enabled=1;
		A3=2;
		WD3=16499;
		A1=2;
		#10;
		A3=5;
		WD3=165464;
		A2=5;
		#10;
		Enabled=0;
		WD3=2;
		#10;
		reset=1;

	end
   always #5 clk=~clk;
endmodule

