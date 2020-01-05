`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:46:41 10/25/2018 
// Design Name: 
// Module Name:    alu 
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
module alu(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUOp,
    output [31:0] C
    );
    reg[31:0] store;
    assign  C= store;
    always @(*) begin
        if(ALUOp==3'b000)
        begin
            assign store = A+B;
        end
        if(ALUOp==3'b001)
        begin
            assign store =A-B ;
        end
        if(ALUOp==3'b010)
        begin
           assign store=A&B;
        end
        if(ALUOp==3'b011)
        begin
            assign store =A|B ;
        end
        if(ALUOp==3'b100)
        begin
            assign store=A>>B;
        end
        if(ALUOp==3'b101)
        begin
            assign store=$signed(A)>>>B;
        end
    end
endmodule

