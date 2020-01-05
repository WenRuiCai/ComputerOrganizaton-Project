`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:47:52 11/26/2018
// Design Name:
// Module Name:    Reg_D_to_E
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
module Reg_D_to_E(
    input [31:0] Instr_in,
     input [31:0] PC_plus_4_in,
     input [31:0] PC_plus_8_in,
     input clk,
     input reset,
     input en,
     input [4:0] rs,
     input [4:0] rt,
     input [4:0] rd,
     input [31:0] ReadData1,
     input [31:0] ReadData2,
     input [31:0] ext,
     output [31:0] Instruction,
     output [31:0] PC_plus_4,
     output [31:0] PC_plus_8,
     output [4:0] A1,
     output [4:0] A2,
     output [4:0] A3,
     output [31:0] ReadData1_out,
     output [31:0] ReadData2_out,
     output [31:0] ext_out,
     output [4:0] T_new
    );

    reg [31:0] store_ins, store_pc_add_4, store_pc_add_8, store_read1, store_read2, store_ext;
    reg [4:0] store_a1, store_a2, store_a3, store_t_new;

    assign Instruction = store_ins;
    assign PC_plus_4 = store_pc_add_4;
    assign PC_plus_8 = store_pc_add_8;
    assign A1 = store_a1;
    assign A2 = store_a2;
    assign A3 = store_a3;
    assign ReadData1_out = store_read1;
    assign ReadData2_out = store_read2;
    assign ext_out = store_ext;
    assign T_new = store_t_new;

    initial begin
        store_ins=0; store_pc_add_4=0; store_pc_add_8=0; store_read1=0; store_read2=0; store_ext=0;
        store_a1=0; store_a2=0; store_a3=0; store_t_new=0;
    end

    always @(posedge clk) begin
        if(reset) begin
            store_ins=0; store_pc_add_4=0; store_pc_add_8=0; store_read1=0; store_read2=0; store_ext=0;
            store_a1=0; store_a2=0; store_a3=0; store_t_new=0;
        end
        else begin
            if(en) begin
                store_ins=Instr_in;
                store_pc_add_4=PC_plus_4_in;
                store_pc_add_8=PC_plus_8_in;
                store_read1=ReadData1;
                store_read2=ReadData2;
                store_ext=ext;
                store_a1=rs;    store_a2=rt;    store_a3=rd;
                case (Instr_in[31:26])      //≤˙…˙T_new
                6'b001101:      //ori
                    begin
                        store_t_new=1;
                    end
                6'b001110:      //xori
                    begin
                        store_t_new=1;
                    end
                6'b001100:      //andi
                    begin
                        store_t_new=1;
                    end
                6'b001010:      //slti
                    begin
                        store_t_new=1;
                    end
                6'b001011:      //sltiu
                    begin
                        store_t_new=1;
                    end
                6'b001000:      //addi
                    begin
                        store_t_new=1;
                    end
                6'b001001:      //addiu
                    begin
                        store_t_new=1;
                    end
                6'b001111:      //lui
                    begin
                        store_t_new=1;
                    end
                6'b000100:      // beq
                    begin
                        store_t_new= -1;
                    end
                6'b000101:      // bne
                    begin
                        store_t_new= -1;
                    end
                6'b000001:      //bgez & bltz
                    begin
                        store_t_new= -1;
                    end
                6'b000111:      //bgtz
                    begin
                        store_t_new= -1;
                    end
                6'b000110:      //blez
                    begin
                        store_t_new= -1;
                    end
                6'b100011:      //lw
                    begin
                        store_t_new=2;
                    end
                6'b100000:   //lb
                    begin
                        store_t_new=2;
                    end
                6'b100100:   //lbu
                    begin
                        store_t_new=2;
                    end
                6'b100001:   //lh
                    begin
                        store_t_new=2;
                    end
                6'b100101:   //lhu
                    begin
                        store_t_new=2;
                    end
                6'b101011:      //sw
                    begin
                        store_t_new= -1;
                    end
                6'b101000:    //sb
                    begin
                        store_t_new= -1;
                    end
                6'b101001:    //sh
                    begin
                        store_t_new= -1;
                    end
                6'b000011:      //jal
                    begin
                        store_t_new=0;
                    end
					 6'b000010:      //j
                    begin
                        store_t_new=-1;
                    end
                6'b000000:
                    begin
                        case (Instr_in[5:0])
                            6'b010000:       //mfhi
                                begin
                                   store_t_new=1;
                                end
                            6'b010010:       //mflo
                                begin
                                   store_t_new=1;
                                end
                            6'b010001:       //mthi
                                begin
                                   store_t_new=-1;
                                end
                            6'b010011:       //mtlo
                                begin
                                   store_t_new=-1;
                                end
                            6'b100001:      //addu
                                begin
                                    store_t_new=1;
                                end
                            6'b100000:      //add
                                begin
                                    store_t_new=1;
                                end
                            6'b000011:   //sraÀ„ ı
                                begin
                                    store_t_new=1;
                                end
                            6'b000010:   //srl¬ﬂº≠
                                begin
                                    store_t_new=1;
                                end
                            6'b000100:      //sllv
                                begin
                                    store_t_new=1;
                                end
                            6'b000110:      //srlv
                                begin
                                    store_t_new=1;
                                end
                            6'b000111:      //srav
                                begin
                                    store_t_new=1;
                                end
                            6'b101010:     //slt
                                begin
                                    store_t_new=1;
                                end
                            6'b101011:     //sltu
                                begin
                                    store_t_new=1;
                                end
                            6'b100011:      //subu
                                begin
                                    store_t_new=1;
                                end
                            6'b100010:      //sub
                                begin
                                    store_t_new=1;
                                end
                            6'b100101:      //or
                                begin
                                    store_t_new=1;
                                end
                            6'b100100:      //and
                                begin
                                    store_t_new=1;
                                end
                            6'b100110:      //xor
                                begin
                                    store_t_new=1;
                                end
                            6'b100111:      //nor
                                begin
                                    store_t_new=1;
                                end
                            6'b001000:      //jr
                                begin
                                    store_t_new= -1;
                                end
                            6'b001001:     //jalr
                                begin
                                    store_t_new=0;
                                end
                            6'b000000:      //nop & sll
                                begin
                                    if(Instr_in==32'b0)  //nop
                                    begin
                                      store_t_new= -1;
                                    end
                                    else begin          //sll
                                      store_t_new=1;
                                    end
                                end
                            6'b011000:       //mult
                                begin
                                   store_t_new=-1;
                                end
                            6'b011001:       //multu
                                begin
                                   store_t_new=-1;
                                end
                            6'b011010:       //div
                                begin
                                   store_t_new=-1;
                                end
                            6'b011011:       //divu
                                begin
                                   store_t_new=-1;
                                end
                        endcase
                    end
                endcase
            end
        end
    end

endmodule

