`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:43:41 10/08/2018 
// Design Name: 
// Module Name:    id_fsm 
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
    input [7:0] in,
    input clk,
    input clr,
    output out
    );
    reg a;//´æout
    reg state;
    reg state_1;//´æ×´Ì¬
    
    
    assign out = a;
    
    initial begin
        a <= 0;
        state <= 0;
        state_1<=0;
    end
    always @(*)begin
		if(clr)begin
			a<=0;
			state<=0;
			state_1<=0;
		end
	 end
    always @(posedge clk)begin
        if (state==0) begin
            if(in>="0"&&in<="9")begin
                state<=1;
            end
        end
        if(state==1&&state_1==0)begin
            if(in=="+"||in=="*")begin
                state_1<=1;
            end
            else if(in>="0"&&in<="9") begin
                state_1<=0;
            end
            else begin
                state<=0;
            end
        end
        if(state_1==1&&a==0)begin
            if(in>="0"&&in<="9")begin
                a=1;
            end
            else begin
                state_1<=0;
                state<=0;
            end
        end
        if (a==1) begin
            if(in=="+"||in=="*")begin
                a=0;
            end
            else if(in>="0"&&in<="9") begin
                a=1;
            end
            else begin
                a=0;
                state_1<=0;
                state<=0;
            end
        end
    end
endmodule