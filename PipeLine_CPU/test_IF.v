`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:41:27 12/02/2018
// Design Name:   IFU
// Module Name:   E:/CPU Project/PipeLine_CPU/test_IF.v
// Project Name:  PipeLine_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IFU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_IF;

	// Inputs
	reg [31:0] j_addr;
	reg [31:0] b_addr;
	reg [31:0] jr_addr;
	reg judge_equal;
	reg [3:0] choose_way;
	reg reset;
	reg clk;
	reg en;

	// Outputs
	wire [31:0] Instruction;
	wire [31:0] PC_plus_4;
	wire [31:0] PC_plus_8;

	// Instantiate the Unit Under Test (UUT)
	IFU uut (
		.j_addr(j_addr), 
		.b_addr(b_addr), 
		.jr_addr(jr_addr), 
		.judge_equal(judge_equal), 
		.choose_way(choose_way), 
		.reset(reset), 
		.clk(clk), 
		.en(en), 
		.Instruction(Instruction), 
		.PC_plus_4(PC_plus_4), 
		.PC_plus_8(PC_plus_8)
	);

	
	initial begin
		// Initialize Inputs
		j_addr = 0;
		b_addr = 0;
		jr_addr = 0;
		judge_equal = 0;
		choose_way = 0;
		reset = 0;
		clk = 0;
		en = 1;
	end
    always #10 clk=~clk; 
      
endmodule

