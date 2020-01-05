`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:35:39 11/17/2018
// Design Name:   IFU
// Module Name:   E:/CPU Project/Single_Turn_CPU/test_IFU.v
// Project Name:  Single_Turn_CPU
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

module test_IFU;

	// Inputs
	reg [31:0] j_addr;
	reg [31:0] b_addr;
	reg [3:0] choose_way;
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] nPC;
	wire [5:0] Function;
	wire [4:0] instr_zero;
	wire [4:0] rd;
	wire [4:0] rt;
	wire [4:0] rs_or_base;
	wire [5:0] special;
	wire [15:0] Immediate1;
	wire [25:0] Immediate2;

	// Instantiate the Unit Under Test (UUT)
	IFU uut (
		.j_addr(j_addr), 
		.b_addr(b_addr), 
		.choose_way(choose_way), 
		.clk(clk), 
		.reset(reset), 
		.nPC(nPC), 
		.Function(Function), 
		.instr_zero(instr_zero), 
		.rd(rd), 
		.rt(rt), 
		.rs_or_base(rs_or_base), 
		.special(special), 
		.Immediate1(Immediate1), 
		.Immediate2(Immediate2)
	);

	initial begin
		// Initialize Inputs
		j_addr = 0;
		b_addr = 0;
		choose_way = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#10;
      j_addr=8;
		b_addr=20;
		choose_way=0;
		#10;
		choose_way=1;
		#10;
		choose_way=2;
		
		// Add stimulus here

	end
    always #5 clk=~clk;  
endmodule

