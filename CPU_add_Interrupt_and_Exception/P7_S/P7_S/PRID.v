`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:25:39 12/26/2017 
// Design Name: 
// Module Name:    PRID 
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
module PRID(
    input clk,
    input reset,
    output [31:0] DOut
    );
  reg [31:0] PRId;
  
  initial begin
    PRId = 32'h16081099;
  end
  
  assign DOut = PRId;

endmodule
