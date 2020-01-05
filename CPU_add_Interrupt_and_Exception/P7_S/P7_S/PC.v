`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:55:29 12/06/2017 
// Design Name: 
// Module Name:    PC 
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
module PC(
    input clk,
    input reset,
    input en,
    input [31:0] NPC,
    output [31:0] PC
    );
  
  reg [31:0] result_PC;
  assign PC = result_PC;
  
  initial begin
    result_PC <= 32'h00003000;
  end
  
  always@(posedge clk)begin
    if(reset)
	   begin
		  result_PC <= 32'h00003000;
		end
    else
	   if(!en)
	     begin
		    result_PC <= result_PC;
		  end
		else
		  begin
		    result_PC <= NPC;
		  end
	end

endmodule
