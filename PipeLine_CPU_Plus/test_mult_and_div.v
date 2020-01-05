`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:14:40 12/08/2018
// Design Name:   mult_and_div
// Module Name:   E:/CPU Project/PipeLine_CPU_Plus/test_mult_and_div.v
// Project Name:  PipeLine_CPU_Plus
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mult_and_div
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_mult_and_div;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] Instr_in;
	reg [31:0] a;
	reg [31:0] b;

	// Outputs
	wire [31:0] high;
	wire [31:0] low;
	wire busy;
	wire start_look;

	// Instantiate the Unit Under Test (UUT)
	mult_and_div uut (
		.clk(clk), 
		.reset(reset), 
		.Instr_in(Instr_in), 
		.a(a), 
		.b(b), 
		.high(high), 
		.low(low), 
		.busy(busy),
		.start_look(start_look)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		Instr_in = 0;
		a = 0;
		b = 0;
		#10;
		Instr_in = 0;
	end
    always #5 clk=~clk;  
endmodule

