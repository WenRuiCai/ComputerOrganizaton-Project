`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    01:03:26 12/07/2018
// Design Name:
// Module Name:    mult_and_div
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
module mult_and_div(
    input clk,
    input reset,
    input [31:0] Instr_in,
    input [31:0] a,
    input [31:0] b,
    output [31:0] high,
    output [31:0] low,
    output show_start,
    output busy
    );

    reg start=0;
    reg store_busy=0;
    reg [31:0] store_Instr=0;

    reg [31:0] HI=0;
    reg [31:0] LO=0;

    reg [31:0] i=0;
    reg [31:0] store_a=0;
    reg [31:0] store_b=0;

    assign show_start = start;
    assign busy = store_busy;
    assign high = HI;
    assign low = LO;

    always @(*) begin           //当新的乘除指令进入时，start置为1
        if({Instr_in[31:26]}==6'b000000&&(({Instr_in[5:0]}==6'b011000)||({Instr_in[5:0]}==6'b011001)||({Instr_in[5:0]}==6'b011010)||({Instr_in[5:0]}==6'b011011)))  //mult & multu & div & divu
        begin
            if(Instr_in!=store_Instr)begin
                start=1; store_Instr=Instr_in;
            end
        end
    end

	 always @(negedge clk) begin
		if(start==1)
		begin
			store_a=a; store_b=b;
		end
	 end

    always @(posedge clk) begin
        if(reset) begin             //reset有效时，全部�
            start=0;
            store_busy=0;
            HI=0;   LO=0;
            i=0;    store_Instr=0;
        end
        else begin
            if(start==1) begin
                store_busy=1;
                start=0;
                i=0;
            end
            else begin
                if(store_busy==1) begin
                    i=i+1;
                    if(i==5&&{store_Instr[5:0]}==6'b011000) begin
                        {HI,LO}=$signed(store_a)*$signed(store_b);
                        store_busy=0;
								store_Instr=0;
                        i=0;
								//$display("%d:HI <- %h, LO <- %h",$time,HI,LO);
                    end
                    else if(i==5&&{store_Instr[5:0]}==6'b011001) begin
                        {HI,LO}=store_a*store_b;
                        store_busy=0;
								store_Instr=0;
                        i=0;
								//$display("%d:HI <- %h, LO <- %h",$time,HI,LO);
                    end
                    else if(i==10&&{store_Instr[5:0]}==6'b011010) begin
                        if(store_b==0) begin
                            LO=0;
                            HI=0;
									 store_busy=0;
									 store_Instr=0;
                            i=0;
                        end
                        else begin
                            LO=$signed(store_a)/$signed(store_b);
                            HI=$signed(store_a)%$signed(store_b);
                            store_busy=0;
									 store_Instr=0;
                            i=0;
                        end
								//$display("%d:HI <- %h, LO <- %h",$time,HI,LO);
                    end
                    else if(i==10&&{store_Instr[5:0]}==6'b011011) begin
                        if(store_b==0) begin
                            LO=0;
                            HI=0;
									 store_busy=0;
									 store_Instr=0;
                            i=0;
                        end
                        else begin
                            LO=store_a/store_b;
                            HI=store_a%store_b;
                            store_busy=0;
									 store_Instr=0;
                            i=0;
                        end
								//$display("%d:HI <- %h, LO <- %h",$time,HI,LO);
                    end
                end
                else  begin
                    if({Instr_in[31:26]}==6'b000000&&(({Instr_in[5:0]}==6'b010001))) begin
                        HI=a;
                        //$display("%d:HI <- %h",$time,HI);
                    end
                    if({Instr_in[31:26]}==6'b000000&&(({Instr_in[5:0]}==6'b010011))) begin
                        LO=a;
                        //$display("%d:LO <- %h",$time,LO);
                    end
                end
            end
        end
    end

endmodule
