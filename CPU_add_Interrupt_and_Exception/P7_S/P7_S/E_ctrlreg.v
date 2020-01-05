`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:26 12/07/2017 
// Design Name: 
// Module Name:    E_ctrlreg 
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
module E_ctrlreg(
    input clk,
    input reset,
	 input EXC_flush,
	 input clr,
	 input If_flush,
    
	 input [1:0] Memtoreg_ID,
    input       RegWrite_ID,
    input       MemWrite_ID,
	 input       CP0Write_ID,
	 
    input [3:0] ALUControl_ID,
    input [1:0] ALUSrc_ID,
	 input       ALUout_sel_ID,
	 input [2:0] Lw_sel_ID,
	 input [1:0] Sw_sel_ID,
	 input       MEMout_sel_ID,
    
	 input [1:0] EXout_sel_ID,
	 input [2:0] MDControl_ID,
	 input       Start_ID,
	 
	 input [31:0] Instr_ID,			// Special eret - mtc0
	 
	 output [31:0] Instr_E,			// Special eret - mtc0
	 
	 output [1:0] Memtoreg_E,
    output       RegWrite_E,
    output       MemWrite_E,
	 output       CP0Write_E,
	 
	 output [2:0] Lw_sel_E,
	 output [1:0] Sw_sel_E,
	 output       MEMout_sel_E,
	 
    output [3:0] ALUControl_E,
    output [1:0] ALUSrc_E,
	 output       ALUout_sel_E,
	 
	 output [1:0] EXout_sel_E,
	 output [2:0] MDControl_E,
	 output       Start_E
    );
  reg [23:0] E_reg;
  reg [31:0] Instr_reg;
  
  assign {{Instr_E},{Memtoreg_E, RegWrite_E, MemWrite_E, ALUControl_E, ALUSrc_E, ALUout_sel_E, Lw_sel_E, Sw_sel_E, EXout_sel_E, MDControl_E, Start_E, CP0Write_E, MEMout_sel_E}} = {{Instr_reg}, {E_reg}};
  
  initial begin
    E_reg <= 24'b00000000000000000000000;
	 Instr_reg <= 32'h00000000;
  end
  
  always @(posedge clk) begin
    if(reset || clr || If_flush || EXC_flush)
	   begin
		  E_reg <= 24'b00000000000000000000000;
		  Instr_reg <= 32'h00000000;
		end
    else
	   begin
		  E_reg <= {Memtoreg_ID, RegWrite_ID, MemWrite_ID, ALUControl_ID, ALUSrc_ID, ALUout_sel_ID, Lw_sel_ID, Sw_sel_ID, EXout_sel_ID, MDControl_ID, Start_ID, CP0Write_ID, MEMout_sel_ID};
		  Instr_reg <= Instr_ID;
		end
  end

endmodule
