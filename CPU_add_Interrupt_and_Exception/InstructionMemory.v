`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:43:59 11/26/2018
// Design Name:
// Module Name:    InstructionMemory
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module InstructionMemory(
    input [31:0] PC,
    output [31:0] Instruction
    );
	reg [31:0] rom [4095:0];
	integer i;

	assign Instruction=rom[(PC-32'h00003000)>>2];

	initial begin
		for(i=0;i<4096;i=i+1)
		begin
			rom[i]=0;
		end
		$readmemh("code.txt",rom);
		$readmemh("code_handler.txt",rom,1120,2047);
	end


endmodule
