`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:51:38 10/11/2018 
// Design Name: 
// Module Name:    adder 
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
module adder(
    input [0:3] A,
    input [0:3] B,
    input Clk,
    input En,
    output [0:3] Sum,
    output Overflow
    );
	reg [0:3] store_a;
	reg [0:3] store_b;
	reg [7:0] fuck;
	assign{Overflow,Sum} = store_a+store_b;
	initial begin
		store_a=0;
		store_b=0;
		fuck=0;
	end
	always @(posedge Clk) begin
		if(En) begin
			store_a=A;
			store_b=B;
         fuck=fuck+1;
			$display("%d : %d",fuck,store_a);
		end
	end

endmodule
