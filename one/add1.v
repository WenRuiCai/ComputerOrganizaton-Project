`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:29:54 09/25/2018 
// Design Name: 
// Module Name:    add1 
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
module add1()
	 wire i ;
	 initial begin
		for(i=0;i<=31;i++)
		begin
			_reg[i]<=0;
		end
	 end
endmodule
