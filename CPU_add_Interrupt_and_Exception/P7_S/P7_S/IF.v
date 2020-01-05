`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:53:20 12/06/2017 
// Design Name: 
// Module Name:    IF 
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
module IF(
	 input clk,
    input reset,
    input en,
	 
    
	 //from ID
	 input [31:0] NPC_ID,			// ID级多选器输出 pc+4+sign_ext(offset||00) 0/1 PC31..28||index||00 		
    input [31:0] PC_RFout_ID,		// ID级RF读出的下一PC：jr/jalr指令
    
	 input [31:0] EPC,					// EPC寄存器存的PC值
	 
	 input [1:0] PC_sel,				// PCSrc_IF 00:PC4 
											//			   01:NPC: 
											//			   10:RFout
    
	 input [1:0] PC_EXC_sel,		// 00: 流水线PC
											// 01：EXC-Handler:0x00004180
											// 10: EPC存放的PC
	 
	 output [31:0] PC4_IF,
    output [31:0] PC8_IF,
    output [31:0] Instr
    );

  wire [31:0] PC_wire_IF;
  wire [31:0] PC_Pipeline_wire_IF;
  wire [31:0] PCFinal_wire_IF;
  
  
  PC PC_counter(
      clk, 
		reset, 
		en,		
		
		PCFinal_wire_IF, 
		PC_wire_IF
		    
			 );
			 
  IM Instr_Mem(
     
	  PC_wire_IF - 32'h00003000,  
	  Instr
	  
	       );
  
  ADD4 PCPlus4(
     
	  PC_wire_IF, 
	  32'h00000004, 
	  
	  PC4_IF
	  
	       );
			 
  ADD4 PCPlus8(
     
	  PC4_IF, 
	  32'h00000004, 
	  
	  PC8_IF
	  
	       );
			 
  MUX3to1 #(32) Mux_PC_IF(
     
	  PC4_IF, 
	  NPC_ID, 
	  PC_RFout_ID, 
	  
	  PC_sel, 
	  
	  PC_Pipeline_wire_IF
	  
	  );
  MUX3to1 #(32) Mux_EXC_PC(
     PC_Pipeline_wire_IF,
	  32'h00004180,
	  EPC,
	  
	  PC_EXC_sel,
	  
	  PCFinal_wire_IF
	  );

endmodule
