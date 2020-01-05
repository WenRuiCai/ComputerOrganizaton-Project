`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:15 12/07/2017 
// Design Name: 
// Module Name:    M_ctrlreg 
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
module M_ctrlreg(
    input clk,
    input reset,
	 input EXC_flush,
    
	 input [1:0] Memtoreg_EX,
    input       RegWrite_EX,
    input       MemWrite_EX,
	 input       CP0Write_EX,
	 input [2:0] Lw_sel_EX,
	 input [1:0] Sw_sel_EX,
	 input       MEMout_sel_EX,
    
	 output [1:0] Memtoreg_M,
    output       RegWrite_M,
    output       MemWrite_M,
	 output       CP0Write_M,
	 
	 output [2:0] Lw_sel_M,
	 output [1:0] Sw_sel_M,
	 output       MEMout_sel_M
    );
  
  reg [10:0] M_reg;
  
  assign {Memtoreg_M, RegWrite_M, MemWrite_M, Lw_sel_M, Sw_sel_M, CP0Write_M, MEMout_sel_M} = M_reg;
  
  initial begin
    M_reg <= 11'b0000000000;
  end
  
  always @(posedge clk) begin
    if(reset | EXC_flush)
	   begin
		  M_reg <= 11'b0000000000;
		end
    else
	   begin
		  M_reg <= {Memtoreg_EX, RegWrite_EX, MemWrite_EX, Lw_sel_EX, Sw_sel_EX, CP0Write_EX, MEMout_sel_EX};
		end
  end

endmodule
