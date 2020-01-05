`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:13:56 12/07/2017 
// Design Name: 
// Module Name:    Stall_Control 
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
module Stall_Control(
    input Stall_Data,
    output PC_En,
    output D_En,
    output E_Clr
    );

  
  assign PC_En = (Stall_Data === 1'b1) ? 1'b0 : 1'b1;
  assign D_En  = (Stall_Data === 1'b1) ? 1'b0 : 1'b1;
  assign E_Clr = (Stall_Data === 1'b1) ? 1'b1 : 1'b0;

endmodule
