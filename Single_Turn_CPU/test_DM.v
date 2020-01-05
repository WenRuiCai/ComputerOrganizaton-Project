`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:19:44 11/17/2018
// Design Name:   DataMemory
// Module Name:   E:/CPU Project/Single_Turn_CPU/test_dm.v
// Project Name:  Single_Turn_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DataMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_dm;

	// Inputs
	reg clk;
	reg reset;
	reg MemWrite;
	reg [11:2] addr;
	reg [31:0] data_in;

	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	DataMemory uut (
		.clk(clk), 
		.reset(reset), 
		.MemWrite(MemWrite), 
		.addr(addr), 
		.data_in(data_in), 
		.data_out(data_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		MemWrite = 0;
		addr = 0;
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#10;
      MemWrite=1;
		addr=12;
		data_in=154851;
		#10;
		MemWrite=0;
		data_in=1351515;
		#10;
		addr=10;
		MemWrite=1;
		#10;
		MemWrite=0;
		#10;
		reset=1;
		// Add stimulus here

	end
   always #5 clk=~clk;
      
endmodule

