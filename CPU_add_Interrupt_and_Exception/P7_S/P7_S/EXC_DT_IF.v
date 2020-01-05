`timescale 1ns / 1ps

`define ERROR ((PC_IF > 32'h00004fff) | (PC_IF < 32'h00003000)) | (PC_IF[1:0] !== 2'b00)
`define AdEL 5'b00100
`define NEXC 5'b11111

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:04:16 12/27/2017 
// Design Name: 
// Module Name:    EXC_DT_IF 
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
module EXC_DT_IF(
    input [31:0] PC_IF,				// 取指输入的地址
	 
    output [4:0] PC_AdEL			// 取指地址是否异常
    );

  assign PC_AdEL = (`ERROR) ? `AdEL : `NEXC;

endmodule
