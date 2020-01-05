`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:52:47 11/17/2018 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [31:0] Instr_Addr,
    output [31:0] Instruction
    );
	reg [31:0] rom[1023:0];
	integer i;
	
	assign Instruction=rom[Instr_Addr];
	
	initial begin
		for(i=0;i<1024;i=i+1)
		begin
			rom[i]=0;
		end
		$readmemh("code.txt",rom,0,1023);
	end
	
	
endmodule
