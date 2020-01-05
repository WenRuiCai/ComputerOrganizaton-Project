`timescale 1ns / 1ps
`include "Instr_Decode.v"

`define Addr_S_EXCESS  (`S_type)&(((DM_Addr > 32'h00002fff) & (DM_Addr < 32'h00007f00)) | ((DM_Addr > 32'h00007f07) & (DM_Addr < 32'h00007f10)) | (DM_Addr > 32'h00007f17))
`define Addr_L_EXCESS  (`L_type)&(((DM_Addr > 32'h00002fff) & (DM_Addr < 32'h00007f00)) | ((DM_Addr > 32'h00007f0b) & (DM_Addr < 32'h00007f10)) | (DM_Addr > 32'h00007f1b))
`define W_Unalign (DM_Addr[1:0] != 2'b00)
`define H_Unalign (DM_Addr[0]   != 1'b0)
`define SW_EXC     (`sw & `W_Unalign)
`define SH_EXC     (`sh & `H_Unalign) | ((`sh|`sb) & (((DM_Addr >32'h00007f00)&(DM_Addr < 32'h00007f0b))|((DM_Addr >32'h00007f10)&(DM_Addr < 32'h00007f1b))))
`define LW_EXC		 (`lw & `W_Unalign)
`define LH_EXC		 ((`lh|`lhu) & `H_Unalign) | ((`lh|`lb|`lhu|`lbu) & (((DM_Addr >32'h00007f00)&(DM_Addr < 32'h00007f0b))|((DM_Addr >32'h00007f10)&(DM_Addr < 32'h00007f1b))))


`define Int_Valid  ((DM_Addr >= 32'h00007f00) & (DM_Addr <= 32'h00007f0B)) | ((DM_Addr >= 32'h00007f10) & (DM_Addr <= 32'h00007f1b))
`define AdEL_Valid ((`Addr_L_EXCESS & `L_type) | `LW_EXC | `LH_EXC)
`define AdES_Valid ((`Addr_S_EXCESS & `S_type) | `SW_EXC | `SH_EXC)

`define EXC_Int  5'b00000
`define EXC_AdEL 5'b00100
`define EXC_AdES 5'b00101
`define NEXC	  5'b11111
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:07 12/27/2017 
// Design Name: 
// Module Name:    EXC_DT_MEM 
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
module EXC_DT_MEM(
    
	 input [31:0] Instr,
    input [31:0] DM_Addr,
    
	 output [4:0] DM_AdEL,
    output [4:0] DM_AdES,
    output [4:0] INT
	 );
  
  assign DM_AdEL = (`AdEL_Valid) ? `EXC_AdEL : `NEXC;
  assign DM_AdES = (`AdES_Valid) ? `EXC_AdES : `NEXC;
  assign INT     = (`Int_Valid)  ? `EXC_Int  : `NEXC;

endmodule
