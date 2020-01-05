`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:47:20 11/26/2018
// Design Name:
// Module Name:    GRF
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
module GRF(
    input clk,
    input Enabled,
    input reset,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD3,
	 input [31:0] PC_plus_4,
    output [31:0] RD1,
    output [31:0] RD2
    );
	 reg [31:0] register[31:0];
    integer a;

	 assign RD1=register[A1];
	 assign RD2=register[A2];

	 initial begin
		for(a=0;a<32;a=a+1)begin
				register[a]=0;
		end
	 end

	 always @(posedge clk)begin
			if(reset)begin
					for(a=0;a<32;a=a+1)begin
						register[a]=0;
					end
			end
			else begin
					if(Enabled)begin
							register[A3]=WD3;
                            if(A3!=0)
                                $display("%d@%h: $%d <= %h", $time,PC_plus_4-4, A3,WD3);
										  //$display("$%d <= %h",A3,WD3);
					end
					register[0]=0;
			end
	 end

endmodule

