`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:53:12 11/01/2018 
// Design Name: 
// Module Name:    string2 
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
module string2(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
    reg [4:0] state;
    reg result;
    
    assign out=result;
    
    initial begin
			$display("initial......");
        state=0;
        result=0;
    end
    
    always @(posedge clr)begin
        state=0;
        result=0;
    end
    
    always @(posedge clk)begin
        if(clr==1)begin
            state=0;
            result=0;
        end
        else begin
				$display("clr is not enabled");
            case (state)
            0:
                begin
						$display("0");
                    if(in=="(")begin
                        state=1;
                    end
                    else if(in>="1"&&in<="9")begin
                        result=1;
                        state=9;
                    end
                    else if (in=="0") begin
                        result=1;
                        state=11;
                    end
                    else if(in==0)begin
                        state=0;
                    end
                    else begin
                        state=8;
                    end
                end
            1:
                begin
                    if(in>="1"&&in<="9")begin
                        state=2;
                    end
                    else begin
                        state=8;
                    end
                    $display("1");
                end
            2:
                begin
                    if(in>="0"&&in<="9")begin
                        state=3;    
                    end
                    else if (in=="+"||in=="*") begin
                        state=4;
                    end
                    else if(in==")") begin
                        state=7;
                        result=1;
                    end
                    else begin
                        state=8;
                    end
                    $display("2");
                end
            3:
                begin
                    if(in>="0"&&in<="9")begin
                        state=8;    
                    end
                    else if (in=="+"||in=="*") begin
                        state=4;
                    end
                    else if(in==")") begin
                        state=7;
                        result=1;
                    end
                    else begin
                        state=8;
                    end
                    $display("3");
                end
            4:
                begin
                    if (in>="1"&&in<="9") begin
                        state=5;
                    end
                    else if(in=="0") begin
                        state=6;
                    end
                    else begin
                        state=8;
                    end
                    $display("4");
                end
            5:
                begin
                    if (in>="0"&&in<="9") begin
                        state=6;
                    end
                    else if(in=="+"||in=="*") begin
                        state=4;
                    end
                    else if(in==")") begin
                        state=7;
                        result=1;
                    end
                    else begin
                        state=8;
                    end
                    $display("5");
                end
            6:
                begin
                    if(in>="0"&&in<="9")begin
                        state=8;
                    end
                    else if(in=="+"||in=="*") begin
                        state=4;
                    end
                    else if(in==")") begin
                        state=7;
                        result=1;
                    end
                    else begin
                        state=8;
                    end
                    $display("6");
                end
            7:
                begin
                    if(in=="+"||in=="*")begin
                        state=12;
                        result=0;
                    end
                    else begin
                        state=8;
                        result=0;
                    end
                    $display("7");
                end
            8:
                begin
                    result=0;
                    $display("8");
                end
            9:
                begin
                    if(in=="+"||in=="*")begin
                        state=12;
                        result=0;
                    end
                    else if(in>="1"&&in<="9") begin
                        state=10;
                    end
                    else begin
                        state=8;
                        result=0;
                    end
                    $display("9");
                end
            10:
                begin
                    if(in=="+"||in=="*")begin
                        state=12;
                        result=0;
                    end
                    else begin
                        state=8;
                        result=0;
                    end
                    $display("10");
                end
            11:
                begin
                    if(in=="+"||in=="*")begin
                        state=12;
                        result=0;
                    end
                    else begin
                        state=8;
                        result=0;
                    end
                    $display("11");
                end
            12:
                begin
                    if(in>="1"&&in<="9")begin
                        state=13;
                        result=1;
                    end
                    else if(in=="0") begin
                        state=7;
                        result=1;
                    end
                    else if(in=="(") begin
                        state=1;
                    end
                    else begin
                        state=8;
                    end
                    $display("12");
                end
            13:
                begin
                    if(in>="0"&&in<="9")begin
                        state=7;
                    end
                    else if(in=="+"||in=="*") begin
                        state=12;
                        result=0;
                    end
                    else  begin
                        state=8;
                        result=0;
                    end
                    $display("13");
                end
            endcase
        end 
    end


endmodule
