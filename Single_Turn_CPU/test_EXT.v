`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:26:53 11/17/2018
// Design Name:   EXT
// Module Name:   E:/CPU Project/Single_Turn_CPU/test_ext.v
// Project Name:  Single_Turn_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EXT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_ext;

	// Inputs
	reg [31:0] nPC;
	reg [2:0] ALUSrc;
	reg [31:0] RD2;
	reg [15:0] Immediate1;
	reg [25:0] Immediate2;

	// Outputs
	wire [31:0] SrcB;
	wire [31:0] b_instr;
	wire [31:0] j_instr;

	// Instantiate the Unit Under Test (UUT)
	EXT uut (
		.nPC(nPC), 
		.ALUSrc(ALUSrc), 
		.RD2(RD2), 
		.Immediate1(Immediate1), 
		.Immediate2(Immediate2), 
		.SrcB(SrcB), 
		.b_instr(b_instr), 
		.j_instr(j_instr)
	);

	initial begin
		// Initialize Inputs
		nPC = 32'h0x0000300c;
		ALUSrc = 0;
		RD2 = 1654;
		Immediate1 = 79215;
		Immediate2 = 26'b110000001001;

		// Wait 100 ns for global reset to finish
		#10;
      ALUSrc=1;
		#10;
		ALUSrc=2;
		#10;
		ALUSrc=3;
		#10;
		ALUSrc=4;
	end
      
endmodule

