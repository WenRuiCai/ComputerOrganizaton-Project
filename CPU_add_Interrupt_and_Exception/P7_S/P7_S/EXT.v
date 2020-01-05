`timescale 1ns / 1ps
`define zero_ext_code  2'b00
`define sign_ext_code  2'b01
`define end_ext_code   2'b10
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:45:41 12/06/2017 
// Design Name: 
// Module Name:    EXT 
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
module EXT (
    input [15:0] Imm,
    input [1:0] EXTOp,
    output [31:0] Ext_Imm
    );


  reg [31:0] ext_result;
  assign Ext_Imm = ext_result;
  
  always @(*) begin
    case(EXTOp)
	   `zero_ext_code : ext_result <= {{16{1'b0}}, {Imm}};
      `sign_ext_code : ext_result <= {{16{Imm[15]}}, {Imm}};
	   `end_ext_code  : ext_result <= {{Imm}, {16{1'b0}}};
    endcase
  end
endmodule
