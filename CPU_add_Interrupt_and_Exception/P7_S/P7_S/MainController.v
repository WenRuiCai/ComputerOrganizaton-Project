`timescale 1ns / 1ps
`include "Instr_Decode.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:11:50 12/07/2017 
// Design Name: 
// Module Name:    MainController 
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
module MainController(
    
	 input [31:0] Instr,
	 input [31:0] Instr_E,
    input        CMP_result,
    
	 
	 output [1:0] PCSrc_IF,
    output [1:0] RegDst_ID,
    output [1:0] ALUSrc_EX,
    output [1:0] Memtoreg_WB,
    
	 
	 output       RegWrite,
    output       MemWrite,
	 output       CP0Write,
	 
	 
	 output [2:0] CMPOp,
    output       NPCOp,
    output [1:0] EXTOp,
    output [3:0] ALUControl,
	 output       ALUout_sel,
	 output [2:0] Lw_sel,
	 output [1:0] Sw_sel,
	 output       MEMout_sel,
	 output       If_flush,
	 
	 output [1:0] EXout_sel,
	 output [2:0] MDControl,
	 output       Start,
	 output       MD_Stall,
	 
	 output       ERET_In,
	 output 		  ERET_MTC0_Stall
	 
	 /*output addu,
	 output subu,
	 output ori,
	 output lui,
	 output beq,
	 output j,
	 output jal,
	 output jr,
	 output sw,
	 output lw*/
    );
  
  assign PCSrc_IF = (`jal | `j |
                    (`beq & CMP_result) | (`bne & CMP_result) | 
						  (`blez & CMP_result) | (`bgtz & CMP_result)|
						  (`bltz & CMP_result) | (`bgez & CMP_result) //| 
						                       /*(`bgezal & CMP_result)*/)   ? 2'b01:                        // NPC
                                                    (`jr |`jalr)   ? 2'b10:								// RFout
						                                                   2'b00;								// PC+4
																		
  assign RegDst_ID = (`mfhi | `mflo |
                      `addu | `subu | `add | `sub | `and_ | `or_ | `xor_ | `nor_ | `slt | `sltu |
                      `sllv | `srlv | `srav | `sll | `srl | `sra | 
							                                                 `jalr /*|`movz*/) ? 2'b01:			//  rd
                                                                   (`jal /*| `bgezal*/) ? 2'b10:			// $31
							                                                                 2'b00;			//  rt
													
  assign ALUSrc_EX = (`addiu | `addi | `addi | `ori | `lui | `andi | `xori | `slti | `sltiu |
                      `lw | `lh | `lhu | `lb | `lbu | 
							 `sw | `sh | `sb)                     ? 2'b01:											// ext
							 //(`movz)                              ? 2'b10:											// 0
                                                             2'b00;											// rt
																 
  assign Memtoreg_WB = (`lw | `lh   |  `lhu  | `lb  | `lbu | `mfc0) ? 2'b01:										// DM
                       (`jal | `jalr /*| `bgezal*/)?               2'b10:										// PC+8
							                                          2'b00;										// ALU
										 
  assign RegWrite = (`mfhi | `mflo |																					// 乘除相关
                     `addu | `subu |`add | `sub |  `and_ | `or_ | `xor_ | `nor_ | `slt | `sltu |	
                     `sllv | `srlv |  `srav | `sll | `srl | `sra |                        			// R-R
                      `addiu | `addi |`ori | `lui  |  `andi | `xori | `slti | `sltiu |  				// R-I
							 `lw  | `lh   |  `lhu  | `lb  | `lbu | 													// load
							 `jal | `jalr | `mfc0/*| `bgezal | `movz*/)                              ? 1'b1:	
                                                                                     1'b0;
  
  assign MemWrite = (`sw | `sh | `sb) ? 1'b1:
													 1'b0; 
  
  assign CMPOp = (`beq) ? 3'b000:				// D1 === D2
                 (`bne) ? 3'b001:				// D1 !== D2
					  (`blez)? 3'b010:				// D1_sign <= 0
					  (`bgtz)? 3'b011:				// D1_sign > 0
					  (`bltz)? 3'b100:				// D1_sign < 0
		 (`bgez /*| `bgezal*/)? 3'b101:				// D1_sign >= 0
		           //(`movz)? 3'b110:				// D2 === 0
					           3'b000;

  assign NPCOp = (`j | `jal) ? 1'b1:			// PC31..28||index||00
                               1'b0;			// PC+4+sign_ext(offset||00)

  assign EXTOp = (`addiu | `addi | `slti | `sltiu 
						 | `lw | `lh |`lhu | `lb | `lbu | 
                     `sw | `sh | `sb)        		? 2'b01:					// sign_ext
                 (`lui)                        	   ? 2'b10:					// 末位拼接
                                                     2'b00;					// zero_ext

  assign ALUControl = (`addu | `add | `addiu | `addi /*| `movz*/)         ? 4'b0000:				// add
                      (`subu | `sub)                  					 ? 4'b0001:				// sub
							 (`or_   | `ori | `lui)   								 ? 4'b0010:				// or
							 (`and_  | `andi)         							    ? 4'b0011:				// and
							 (`xor_  | `xori)         								 ? 4'b0100:				// xor
							 (`nor_)                  								 ? 4'b0101:				// nor(或非)
							 (`slti  | `slt)          								 ? 4'b0110:				// 有符号比较
							 (`sltiu | `sltu)         								 ? 4'b0111:				// 无符号比较
							 (`sllv | `sll)           								 ? 4'b1000:				// 逻辑左移
							 (`srlv | `srl)           								 ? 4'b1001:				// 逻辑右移
							 (`srav | `sra)           								 ? 4'b1010:				// 算术右移
																							   4'b0000;
																 
  assign ALUout_sel = (`sll | `srl | `sra ) ? 1'b1:						// 移位--立即数 
                                              1'b0;						// ALU结果
  
  assign Lw_sel = (`lw)  ? 3'b000 :
                  (`lh)  ? 3'b001 :
						(`lhu) ? 3'b010 :
						(`lb)  ? 3'b011 :
						(`lbu) ? 3'b100 :
						         3'b000 ;
									
  assign Sw_sel = (`sw)  ? 2'b00 :
                  (`sh)  ? 2'b01 :
						(`sb)  ? 2'b10 :
						         2'b00 ;
  
  assign If_flush = /*((`bgezal | `movz) & (!CMP_result)) ? 1'b1 :*/			// 条件写执行类指令 但 执行条件为假时清空E级流水线reg 
                                                          1'b0 ;
  
  
  assign EXout_sel = (`mfhi) ? 2'b01 :												// hi
                     (`mflo) ? 2'b10 :												// lo
							          2'b00 ;

  assign MDControl = (`mfhi | `mflo) ? 3'b000 :
                             (`mult) ? 3'b001 :
									 (`multu) ? 3'b010 :
									   (`div) ? 3'b011 :
									  (`divu) ? 3'b100 :
									  (`mthi) ? 3'b101 :
									  (`mtlo) ? 3'b110 :
									            3'b000 ;
  
  assign Start = (`mult | `multu | `div | `divu) ? 1'b1 :
                                                   1'b0 ;
  
  
  assign MD_Stall = (`mult | `multu | `div | `divu | `mthi | `mtlo | `mflo | `mfhi) ? 1'b1 : 
																												  1'b0;
  
  assign ERET_In = (`eret) ? 1'b1 : 1'b0;
  
  assign CP0Write = (`mtc0) ? 1'b1: 1'b0;
  
  assign MEMout_sel = (`mfc0) ? 1'b1:1'b0;
  
  assign ERET_MTC0_Stall = (`eret) & (((Instr_E[31:26] === 6'b010000) & (Instr_E[25:21] === 5'b00100) & (Instr_E[10:0] === 11'b00000000000))| // eret - mtc0
												  ((Instr_E[31:26] === 6'b101011))); //eret - sw
  /*wire addu;
  wire subu;
  wire ori;
  wire lui;
  wire beq;
  wire j;
  wire jal;
  wire jr;
  wire sw;
  wire lw;
  
  assign addu = (`addu) ? 1'b1:1'b0;
  assign subu = (`subu) ? 1'b1:1'b0;
  assign ori = (`ori) ? 1'b1:1'b0;
  assign lui = (`lui) ? 1'b1:1'b0;
  assign beq = (`beq) ? 1'b1:1'b0;
  assign j = (`j) ? 1'b1:1'b0;
  assign jal = (`jal) ? 1'b1:1'b0;
  assign jr = (`jr) ? 1'b1:1'b0;
  assign sw = (`sw) ? 1'b1:1'b0;
  assign lw = (`lw) ? 1'b1:1'b0;*/
  
  
  
endmodule
