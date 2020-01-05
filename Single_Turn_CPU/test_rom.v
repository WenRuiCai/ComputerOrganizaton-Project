`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:25:52 11/17/2018
// Design Name:   IM
// Module Name:   E:/CPU Project/Single_Turn_CPU/test_rom.v
// Project Name:  Single_Turn_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_rom;

	// Inputs
	reg [31:0] Instr_Addr;

	// Outputs
	wire [31:0] Instruction;

	// Instantiate the Unit Under Test (UUT)
	IM uut (
		.Instr_Addr(Instr_Addr), 
		.Instruction(Instruction)
	);

	initial begin
		// Initialize Inputs
		Instr_Addr = 0;

		// Wait 100 ns for global reset to finish
		#10;
      Instr_Addr=1;
		#10;
      Instr_Addr=2;
		#10;
      Instr_Addr=3;
		// Add stimulus here

	end
      
endmodule

