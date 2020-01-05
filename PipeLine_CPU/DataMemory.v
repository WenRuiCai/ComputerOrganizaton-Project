`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:50:12 11/26/2018
// Design Name:
// Module Name:    DataMemory
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
module DataMemory(
    input clk,
    input reset,
    input MemWrite,
    input [31:0] addr,
    input [31:0] data_in,
	 input [31:0] pc_add_4,
    output [31:0] data_out
    );

	reg [31:0] ram [4095:0];
	reg [31:0] zero=0;
	integer i;

	initial begin
		for(i=0;i<4096;i=i+1)
		begin
			ram[i]=0;
		end
	end

	assign data_out=(MemWrite==0)?(ram[addr>>2]):zero;

	always @(posedge clk)begin
		//$display("reset:%d MemWrite:%d data_in:%h addr:%h",reset,MemWrite,data_in,addr);
		if(reset)begin
			for(i=0;i<4096;i=i+1)
			begin
				ram[i]=0;
			end
		end
		else begin
			if(MemWrite)begin
				ram[addr>>2]=data_in;
				$display("%d@%h: *%h <= %h", $time, pc_add_4-4, addr, data_in);
			end
		end
	end

endmodule