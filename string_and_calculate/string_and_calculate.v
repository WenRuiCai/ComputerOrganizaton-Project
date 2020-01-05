`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:25:19 11/05/2018 
// Design Name: 
// Module Name:    string_and_calculate 
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
module string_and_calculate(
    input [7:0] in,
    input clk,
    input clr,
    output out_judge,
    output [31:0] out_result
    );

    reg [31:0] num1;
    reg [31:0] num2;
    reg [7:0] state;
    reg [31:0] result;
    reg a;

    assign out_result =a?result:0;
    assign out_judge =a ;

    initial begin
        num2=0;
        num1=0;
        state=0;
        result=0;
        a=0;
    end

    always @(posedge clr)begin
        num2=0;
        num1=0;
        state=0;
        result=0;
        a=0;
    end

    always @(posedge clk)begin
        if (clr) begin
            num2=0;
            num1=0;
            state=0;
            result=0;
            a=0;
        end
        else begin
            case (state)
            0:begin
                if(in>="1"&&in<="9")begin
                    result=in-"0";
                    num1=in-"0";
                    state=1;
                    a=1;
                end
                else if(in=="0") begin
                    result=in-"0";
                    num1=in-"0";
                    state=2;
                    a=1;
                end
                else if (in==0) begin
                    state=0;
                end
                else begin
                    state=7;
                end
            end
            1:begin
                if (in>="0"&&in<="9") begin
                    result=result-num1;
                    num1=num1*10+in-"0";
                    result=result+num1;
                    state=2;
                    a=1;
                end
                else if (in=="+") begin
                    state=3;
                    a=0;
                end
                else if (in=="*") begin
                    num2=num1;
                    state=4;
                    a=0;
                end
                else begin
                    state=7;
                    a=0;
                end
            end
            2:begin
                if (in=="+") begin
                    state=3;
                    a=0;
                end
                else if (in=="*") begin
                    num2=num1;
                    state=4;
                    a=0;
                end
                else begin
                    state=7;
                    a=0;
                end
            end
            3:begin
                if (in=="0") begin
                    num1=in-"0";
                    result=result+num1;
                    state=6;
                    a=1;
                end
                else if(in>="1"&&in<="9") begin
                    num1=in-"0";
                    result=result+num1;
                    state=5;
                    a=1;
                end
                else begin
                    state=7;
                end
            end
            4:begin
					$display("Now into 4");
                if (in=="0") begin
                    num1=num2;
                    result=result-num2;
                    num2=num2*(in-"0");
                    result=result+num2;
                    state=9;
                    a=1;
                end
                else if(in>="1"&&in<="9") begin
                    num1=num2;
						  result=result-num2;
                    num2=num2*(in-"0");
                    result=result+num2;
                    state=8;
                    a=1;
                end
                else begin
                    state=7;
                end
            end
            5:begin
                if(in>="0"&&in<="9")begin
                    result=result-num1;
                    num1=num1*10+in-"0";
                    result=result+num1;
                    state=6;
                end
                else if(in=="+") begin
                    state=3;
                    a=0;
                end
                else if(in=="*") begin
                    num2=num1;
                    state=4;
                    a=0;
                end
                else begin
                    state=7;
                    a=0;
                end
            end
            6:begin
                if(in=="+") begin
                    state=3;
                    a=0;
                end
                else if(in=="*") begin
                    num2=num1;
                    state=4;
                    a=0;
                end
                else begin
                    state=7;
                    a=0;
                end
            end
            8:begin
                if(in>="0"&&in<="9")begin
                    result=result-num2;
                    num2=num1*((num2/num1)*10+in-"0");
                    result=result+num2;
                    state=9;
                end
                else if(in=="+") begin
                    state=3;
                    a=0;
                end
                else if(in=="*") begin
                    state=4;
                    a=0;
                end
                else begin
                    state=7;
                    a=0;
                end
            end
            9:begin
                if(in=="+") begin
                    state=3;
                    a=0;
                end
                else if(in=="*") begin
                    state=4;
                    a=0;
                end
                else begin
                    state=7;
                    a=0;
                end
            end
            7:begin
                result=0;
                a=0;
            end
            endcase
        end
    end

endmodule
