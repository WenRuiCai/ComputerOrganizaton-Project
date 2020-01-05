`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:25 10/29/2018 
// Design Name: 
// Module Name:    FBnacii 
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
module FBnacii(
    input [31:0] number,
    input clk,
    output [31:0] result
    );
    reg [31:0] A,B,C;
    assign result=B;
    initial begin
        A<=0;
        B<=1;
        C<=0;
    end
    always @(posedge clk)begin
        C=A+B;
        A=B;
        B=C;
    end
endmodule
