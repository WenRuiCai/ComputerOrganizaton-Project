/*R-R type*//********************************************************/
`define addu (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100001)
`define subu (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100011)
`define or_  (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100101)
`define and_ (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100100)
`define xor_ (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100110)
`define nor_ (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100111)
`define slt  (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b101010)
`define sltu (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b101011)
           
`define sllv (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b000100)		/*移位类 -- 寄存器*/
`define srlv (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b000110)
`define srav (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b000111)

`define sll  (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b000000)    /*移位类 -- 立即数*/
`define srl  (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b000010)
`define sra  (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b000011)

`define add  (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100000)
`define sub  (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b100010)
/*********************************************************************/

/*R-I type*//********************************************************/
`define addi  (Instr[31:26] === 6'b001000)

`define addiu (Instr[31:26] === 6'b001001)
`define ori   (Instr[31:26] === 6'b001101)
`define lui   (Instr[31:26] === 6'b001111)
`define andi  (Instr[31:26] === 6'b001100)
`define xori  (Instr[31:26] === 6'b001110)
`define slti  (Instr[31:26] === 6'b001010)
`define sltiu (Instr[31:26] === 6'b001011)
/*********************************************************************/

/*Load type*//********************************************************/
`define lw   (Instr[31:26] === 6'b100011)
`define lh   (Instr[31:26] === 6'b100001)
`define lhu  (Instr[31:26] === 6'b100101)
`define lb   (Instr[31:26] === 6'b100000)
`define lbu  (Instr[31:26] === 6'b100100)  
/*********************************************************************/

/*Store type*//********************************************************/
`define sw   (Instr[31:26] === 6'b101011)
`define sh   (Instr[31:26] === 6'b101001)
`define sb   (Instr[31:26] === 6'b101000)
/*********************************************************************/

/*Branch type*//********************************************************/
`define beq  (Instr[31:26] === 6'b000100)
`define bne  (Instr[31:26] === 6'b000101)
`define blez (Instr[31:26] === 6'b000110)
`define bgtz (Instr[31:26] === 6'b000111)
`define bltz (Instr[31:26] === 6'b000001) & (Instr[20:16] === 5'b00000)
`define bgez (Instr[31:26] === 6'b000001) & (Instr[20:16] === 5'b00001)
/*********************************************************************/

/*Jump type*//********************************************************/
`define j    (Instr[31:26] === 6'b000010)
`define jal  (Instr[31:26] === 6'b000011)
`define jalr (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b001001)
`define jr   (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b001000)
/*********************************************************************/

/*Special type -- If-flush *//****************************************/
/*`define bgezal (Instr[31:26] === 6'b000001) & (Instr[20:16] === 5'b10001)

`define movz   (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b001010)*/
/*********************************************************************/

/*Special type -- If-flush *//****************************************/
`define mult    (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b011000)
`define multu   (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b011001)
`define div     (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b011010)
`define divu    (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b011011)
`define mfhi    (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b010000)
`define mflo    (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b010010)
`define mthi    (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b010001)
`define mtlo    (Instr[31:26] === 6'b000000) & (Instr[5:0] === 6'b010011)
/*********************************************************************/

/* CP0相关 ************************************************************/
`define mtc0    (Instr[31:26] === 6'b010000) & (Instr[25:21] === 5'b00100) & (Instr[10:0] === 11'b00000000000)
`define mfc0	 (Instr[31:26] === 6'b010000) & (Instr[25:21] === 5'b00000) & (Instr[10:0] === 11'b00000000000)
`define eret	 (Instr === 32'h42000018)
/********************************************************************/
`define B_type       (`beq | `bne | `bgez | `bgtz | `blez | `bltz)
`define S_L_type (`lw | `lh | `lhu | `lb | `lbu | `sw | `sh | `sb)
`define S_type (`sw | `sh | `sb)
`define L_type (`lw | `lh | `lb | `lhu | `lbu)
`define LEGAL_INSTR  (`addu | `subu | `or_ | `and_ | `xor_ | `nor_ | `slt | `sltu  | `sll  | `srl  | `sra | `sllv | `srlv | `srav | `add | `sub   |`addi | `addiu| `ori | `lui  | `andi | `xori | `slti| `sltiu |`lw   | `lh   | `lhu | `lb   | `lbu  | `sw   | `sh   | `sb  |`beq  | `bne  | `bgtz| `blez | `bgez | `bltz |`j | `jal  | `jalr| `jr   |`mult | `multu| `div | `divu | `mfhi | `mflo | `mthi| `mtlo| `mtc0| `mfc0|`eret)