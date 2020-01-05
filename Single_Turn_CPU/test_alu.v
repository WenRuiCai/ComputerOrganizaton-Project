`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:45:26 11/17/2018
// Design Name:   ALU
// Module Name:   E:/CPU Project/Single_Turn_CPU/test_alu.v
// Project Name:  Single_Turn_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_alu;

	// Inputs
	reg [31:0] SrcA;
	reg [31:0] SrcB;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] ALUResult;
	wire Equal;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.SrcA(SrcA), 
		.SrcB(SrcB), 
		.ALUOp(ALUOp), 
		.ALUResult(ALUResult), 
		.Equal(Equal)
	);

	initial begin
		// Initialize Inputs
		SrcA = 0;
		SrcB = 0;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#10;
      SrcA=135435;
		SrcB=16464151;
		#10;
		ALUOp=1;
		#10;ALUOp=2;
		#10;ALUOp=6;
		#10;ALUOp=7;
		// Add stimulus here

	end
      
endmodule

