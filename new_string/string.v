`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:17 10/26/2018 
// Design Name: 
// Module Name:    string 
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
module string(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
    reg [3:0] state;
    reg a;
    assign out = a;
    initial begin
        state<=4'b0000;
        a<=0;
    end
    always @(posedge clr)begin
        state<=4'b0000;
        a<=0;
    end
    always @(posedge clk)begin
        if(clr==1)begin
            state<=4'b0000;
        end
        else begin
            if(state==4'b0000)
            begin
                if(in>="0"&&in<="9")begin
                    state<=4'b0001;
						  a<=1;
                end
					 else if(in==0)begin
						state<=4'b0000;
						a<=0;
					 end
                else begin
                    state<=4'b1000;
						  a<=0;
                end
            end
            else if(state==4'b0001)begin
                if (in=="+"||in=="*") begin
                    state<=4'b0010;
						  a<=0;
                end
                else begin
                    state<=4'b1000;
						  a<=0;
                end
            end
            else if (state==4'b0010) begin
                if(in>="0"&&in<="9")begin
                    state<=4'b0100;
                    a<=1;  
                end
                else begin
                    state<=4'b1000;
						  a<=0;
                end
            end
            else if(state==4'b0100)begin
                if (in=="+"||in=="*") begin
                    state<=4'b0010;
                    a<=0;
                end
                else begin
                    state<=4'b1000;
                    a<=0;
                end
            end
            else begin
                state<=4'b1000;
                a<=0;
            end
        end
    end
endmodule

