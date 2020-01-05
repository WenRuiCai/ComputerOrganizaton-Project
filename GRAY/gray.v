`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:29:01 10/25/2018 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output [2:0] Output,
    output Overflow
    );
    reg [2:0] change;
    reg [2:0] gray;
    reg flag;
    assign Output=gray;
    assign Overflow = flag ;
    initial begin
        change<=3'b000;
        gray<=3'b000;
        flag<=0;
    end
    always @(posedge Clk) begin
        if(Reset)
        begin
            change=0;
            gray=0;
            flag=0;
        end
        else if(En)begin
            if (flag==0) begin
                if(change==3'b111)begin
                    flag=1;
                end
            end
            change=change+1;
            gray=(change>>1)^change;
        end
    end

endmodule

