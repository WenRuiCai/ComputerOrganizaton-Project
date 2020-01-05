`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:51:55 12/06/2017 
// Design Name: 
// Module Name:    LBit 
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
module LBit(
    input [31:0] Offset,
    output [31:0] Offset_LBit_out
    );
  
  assign Offset_LBit_out = {{Offset[29:0]}, {2{1'b0}}};

endmodule
