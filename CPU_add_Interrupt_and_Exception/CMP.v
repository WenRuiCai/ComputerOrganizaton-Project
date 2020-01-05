`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:39:52 11/26/2018
// Design Name:
// Module Name:    CMP
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
module CMP(
    input [31:0] Compare_Data1,
    input [31:0] Compare_Data2,
    input [31:0] Instr_in,
    output Judge_Equal
    );
	assign Judge_Equal = ({Instr_in[31:26]}==6'b000100)?((Compare_Data1==Compare_Data2)?1:0):(
    ({Instr_in[31:26]}==6'b000101)?((Compare_Data1!=Compare_Data2)?1:0):(
    ({Instr_in[31:26]}==6'b000001&&{Instr_in[20:16]}==6'b000001)?(($signed(Compare_Data1)>=0)?1:0):(
    ({Instr_in[31:26]}==6'b000111)?(($signed(Compare_Data1)>0)?1:0):(
    ({Instr_in[31:26]}==6'b000110)?(($signed(Compare_Data1)<=0)?1:0):(
    ({Instr_in[31:26]}==6'b000001&&{Instr_in[20:16]}==6'b000000)?(($signed(Compare_Data1)<0)?1:0):0)))));

endmodule
