`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:51:29 11/26/2018
// Design Name:
// Module Name:    Level_WriteBack
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
module Level_WriteBack(
    input [31:0] Instr_in,
    input [31:0] pc_add_4_in,
    input [31:0] pc_add_8_in,
    input [31:0] ALUResult,
    input [31:0] DM_data_in,
    input [4:0] WriteRegNum,
    output [4:0] GRF_A3,
    output WE3,
    output [31:0] Write_GRF_Data
    );

    reg [4:0] Mem_to_Reg=0;
    reg store_WE3=0;

    assign GRF_A3 = WriteRegNum;
    assign WE3 = store_WE3;

    assign Write_GRF_Data=(WriteRegNum==0)?0:((Mem_to_Reg==0)?ALUResult:(
                          (Mem_to_Reg==1)?DM_data_in:pc_add_8_in));

    always @(*) begin
        case (Instr_in[31:26])      //special
            6'b001101:      //ori
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b001110:      //xori
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b001100:      //andi
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b001010:      //slti
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b001011:      //sltiu
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b001000:      //addi
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b001001:      //addiu
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b001111:      //lui
                begin
                    Mem_to_Reg=0;
                    store_WE3=1;
                end
            6'b000100:      // beq
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b000101:      // bne
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b000001:      //bgez & bltz
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b000111:      //bgtz
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b000110:      //blez
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b100011:      //lw
                begin
                    Mem_to_Reg=1;
                    store_WE3=1;
                end
            6'b100000:   //lb
                begin
                    Mem_to_Reg=1;
                    store_WE3=1;
                end
            6'b100100:   //lbu
                begin
                    Mem_to_Reg=1;
                    store_WE3=1;
                end
            6'b100001:   //lh
                begin
                    Mem_to_Reg=1;
                    store_WE3=1;
                end
            6'b100101:   //lhu
                begin
                    Mem_to_Reg=1;
                    store_WE3=1;
                end
            6'b101011:      //sw
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b101000:    //sb
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b101001:    //sh
                begin
                    Mem_to_Reg=0;
                    store_WE3=0;
                end
            6'b000011:      //jal
                begin
                    Mem_to_Reg=2;
                    store_WE3=1;
                end
				6'b000010:      //j
                begin
                    Mem_to_Reg=2;
                    store_WE3=0;
                end
            6'b000000:
                begin
                    case (Instr_in[5:0])
                        6'b100001:      //addu
                            begin
                               Mem_to_Reg=0;
                               store_WE3=1;
                            end
                        6'b100000:      //add
                            begin
                               Mem_to_Reg=0;
                               store_WE3=1;
                            end
                        6'b000011:   //sra算术
                           begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                           end
                        6'b000010:   //srl逻辑
                           begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                           end
                        6'b000100:      //sllv
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b000110:      //srlv
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b000111:      //srav
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b101010:     //slt
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b101011:     //sltu
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b100011:      //subu
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b100010:      //sub
                            begin
                               Mem_to_Reg=0;
                               store_WE3=1;
                            end
                        6'b100101:      //or
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b100100:      //and
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b100110:      //xor
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b100111:      //nor
                            begin
                                Mem_to_Reg=0;
                                store_WE3=1;
                            end
                        6'b001000:      //jr
                            begin
                                Mem_to_Reg=0;
                                store_WE3=0;
                            end
                        6'b001001:     //jalr
                            begin
                                Mem_to_Reg=2;
                                store_WE3=1;
                            end
                        6'b000000:      //nop & sll
                            begin
                                if(Instr_in==32'b0)  //nop
                                begin
                                    Mem_to_Reg=0;
                                    store_WE3=0;
                                end
                                else begin          //sll
                                    Mem_to_Reg=0;
                                    store_WE3=1;
                                end
                            end
                    endcase
                end
        endcase
    end

endmodule
