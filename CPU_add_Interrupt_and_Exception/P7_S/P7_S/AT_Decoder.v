`timescale 1ns / 1ps
`include "Instr_Decode.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:10:11 12/07/2017 
// Design Name: 
// Module Name:    AT_Decoder 
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
module AT_Decoder(
    input [31:0] Instr,
    output [2:0] Tuse_rt,
    output [1:0] Tuse_rs,
    output [1:0] Res,
    output [4:0] A1_cur,
    output [4:0] A2_cur,
    output [4:0] A3_cur
    );
  
  /*Tuse_rt域***************************************************************************/
  assign Tuse_rt[0] = `beq | `bne | `blez | `bgtz | `bltz | `bgez //| 				// B类
                                                             /*`movz*/;				// Special
  
  assign Tuse_rt[1] = `mult | `multu | `div | `divu|
                      `addu| `subu |`add | `sub  | `or_ | `and_ | `xor_ | `nor_ | 
                      `slt | `sltu | 
							 `sllv| `srlv | `srav | `sll | `srl | `sra;		// R-R type
							 
  assign Tuse_rt[2] = `sw | `sh | `sb | `mtc0;
  /*************************************************************************************/
  
  /*Tuse_rs域***************************************************************************/
  assign Tuse_rs[0] = `beq | `bne | `blez | `bgtz | `bltz | `bgez /*| `bgezal */| `jr | `jalr;
  
  assign Tuse_rs[1] = `mult | `multu | `div | `divu| `mthi| `mtlo|
                      `addu| `subu | `add | `sub | `or_ | `and_ | `xor_ | `nor_ | 
                      `slt | `sltu | 
							 `sllv| `srlv | `srav |                     		// R-R type
                    `addiu | `addi | `ori | `xori | `andi | `slti | `sltiu | // R-I type
						     `lw | `lh   | `lhu  | `lb   | `lbu   | 			// Load type
							  `sw | `sh   | `sb //|                           // Store type
							                /*`movz*/;									// Special 条件清除								
  /*************************************************************************************/
  
  /*Tnew域(Res寄存器流水)***************************************************************************/
  assign Res = (`mfhi | `mflo |
                `addu | `subu |`add | `sub | `or_ | `and_ | `xor_ | `nor_ | 
                `slt | `sltu | 
					 `sllv | `srlv | `srav|  `sll | `srl | `sra |
               `addiu | `addi | `ori  | `xori | `andi | `slti | `sltiu | `lui /*|
					                                         `movz*/)           ? 2'b01:									// ALU
				   (`lw | `lh | `lhu | `lb | `lbu | `mfc0)                           ? 2'b10:									// DM
												   (`jal | `jalr /*| `bgezal*/)          ? 2'b11:									// PC
															                              2'b00;									// NW
 /*************************************************************************************/
  
  
  
  /*A1/A2/A3 地址译码 ***************************************************************************/
  assign A1_cur = Instr[25:21];
  assign A2_cur = Instr[20:16];
  
  assign A3_cur = ( `mfhi | `mflo |
                    `addu | `subu |`add | `sub | `or_ | `and_ | `xor_ | `nor_ | 
                    `slt | `sltu | 
						  `sllv | `srlv | `srav | `sll | `srl | `sra | `jalr /*|
						                                       `movz*/)             ? Instr[15:11]:						// rd
						(`addiu | `addi | `ori  | `xori | `andi| `slti | `sltiu| `lui  | 
						 `lw   | `lh   | `lhu | `lb   | `lbu | `mfc0)                     ? Instr[20:16]:						// rt
						(`jal /*| `bgezal*/)                                          ? 5'b11111: 							// $31
						                                                            5'b00000;							// 却省 0
  /*************************************************************************************************/
endmodule
