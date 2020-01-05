`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:51:04 10/25/2018
// Design Name:   alu
// Module Name:   E:/CPU Project/ALU/test.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#10;
		
      ALUOp=3'b000;
		// Add stimulus here
		A=32'b111;
		B=32'b100;
		#10;
		ALUOp=3'b001;
		#10;
		ALUOp=3'b100;
		#10;
		ALUOp=3'b101;
	end
      
endmodule

