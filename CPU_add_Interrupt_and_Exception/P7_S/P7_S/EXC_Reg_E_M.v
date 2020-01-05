`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:40:46 12/27/2017 
// Design Name: 
// Module Name:    EXC_Reg_E_M 
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
module EXC_Reg_E_M(
    input clk,
    input reset,
    input EXC_flush,
    
	 input        Delay_Set_in,
    input [31:0] PC_in,
    input [4:0]  ExcCode_in,
	 input [31:0] Instr_in,
	 input		  EXLClr_in,
    
	 output        Delay_Set_out,
    output [31:0] PC_out,
    output [4:0]  ExcCode_out,
    output [31:0] Instr_out,
	 output			EXLClr_out
	 );

  reg        Delay_Set;
  reg [31:0] PC;
  reg [4:0]  ExcCode;
  reg [31:0] Instr;
  reg        EXLClr;
  
  assign Delay_Set_out = Delay_Set;
  assign PC_out        = PC;
  assign ExcCode_out   = ExcCode;
  assign Instr_out     = Instr;
  assign EXLClr_out    = EXLClr;
  
  initial begin
    Delay_Set <= 0;
	 PC        <= 0;
	 ExcCode   <= 5'b11111;
	 Instr     <= 0;
	 EXLClr <= 0;
  end
  
  
  always @(posedge clk) begin
    if(reset | EXC_flush)
	   begin
		  Delay_Set <= 0;
		  PC        <= 0;
		  ExcCode   <= 5'b11111;
		  Instr     <= 0;
		  EXLClr    <= 0;
		end
	 else
	   begin
		  Delay_Set <= Delay_Set_in;
		  PC        <= PC_in;
		  ExcCode   <= ExcCode_in;
		  Instr     <= Instr_in;
		  EXLClr    <= EXLClr_in;
		end
  end

endmodule
