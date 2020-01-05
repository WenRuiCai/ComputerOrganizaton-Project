`timescale 1ns / 1ps
`include "DataMemory.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:50:27 11/26/2018
// Design Name:
// Module Name:    Level_Memory
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
module Level_Memory(
    input IRQ_E_and_M,
    input [6:2] ExcCode_M,
    input clk,
    input reset,
    input [31:0] Instr_in,
    input [31:0] pc_add_4_in,
    input [31:0] pc_add_8_in,
    input [31:0] MemAddr,
    input [31:0] WriteData_from_timer,      //接下来要用地址来区分开timer和DM
    input [31:0] WriteData_from_E,
    input [31:0] WriteData_from_W,
    input [4:0] select_Writedata,
    output [31:0] data_out,
    output [31:0] ALUResult,
    output [31:0] WriteData,
    output [6:2] ExcCode_M_new
    );

    wire MemWrite;
    wire [4:0] MemOp_s;
    wire [4:0] MemOp_l;
    wire [31:0] WriteData;

    reg store_MemWrite=0;
    reg [4:0] store_MemOp_s=0;
    reg [4:0] store_MemOp_l=0;

    wire [31:0] DM_data_out;
    assign data_out = (judge_timer==1)?WriteData_from_timer:DM_data_out;
/**************************************judge Exception***********************************/
    integer i=0;
    assign ExcCode_M_new = (i==1)?4:((i==2)?5:ExcCode_M);

    always @(*) begin
        if(!((MemAddr>=0&&MemAddr<=32'h00002ffc)||(MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b))) begin        //存取数时地址溢出
            if ({Instr_in[31:26]}==6'b101011||{Instr_in[31:26]}==6'b101001||{Instr_in[31:26]}==6'b101000)
            begin
                i=2;
            end
            else if ({Instr_in[31:26]}==6'b100011||{Instr_in[31:26]}==6'b100001||{Instr_in[31:26]}==6'b100101||{Instr_in[31:26]}==6'b100000||{Instr_in[31:26]}==6'b100100)
            begin
                i=1;
            end
            else begin
                i=0;
            end
        end
        else begin
            case (Instr_in[31:26])
                6'b100011:      //lw
                    begin
                        if({MemAddr[1:0]}!=0)
                            i=1;
                        else
                            i=0;
                    end
                6'b100001:      //lh
                    begin
                        if(({MemAddr[1:0]}!=0&&{MemAddr[1:0]}!=2)||((MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b)))
                            i=1;
                        else
                            i=0;
                    end
                6'b100101:      //lhu
                    begin
                        if(({MemAddr[1:0]}!=0&&{MemAddr[1:0]}!=2)||((MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b)))
                            i=1;
                        else
                            i=0;
                    end
                6'b100000:      //lb
                    begin
                        if((MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b))
                            i=1;
                        else
                            i=0;
                    end
                6'b100100:      //lbu
                    begin
                        if((MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b))
                            i=1;
                        else
                            i=0;
                    end
                6'b101011:      //sw
                    begin
                        if(({MemAddr[1:0]}!=0)||(MemAddr==32'h00007f08||MemAddr==32'h00007f18))
                            i=2;
                        else
                            i=0;
                    end
                6'b101001:      //sh
                    begin
                        if(({MemAddr[1:0]}!=0&&{MemAddr[1:0]}!=2)||((MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b)))
                            i=2;
                        else
                            i=0;
                    end
                6'b101000:      //sb
                    begin
                        if((MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b))
                            i=2;
                        else
                            i=0;
                    end
                default:
                    i=0;
            endcase
        end
    end
/**************************************judge Exception***********************************/

/****************************************************************************************/
    reg judge_timer=0;

    always @(*) begin
        if((MemAddr>=32'h00007f00&&MemAddr<=32'h00007f0b)||(MemAddr>=32'h00007f10&&MemAddr<=32'h00007f1b))
            judge_timer=1;
        else
            judge_timer=0;
    end
/****************************************************************************************/
    assign MemWrite = store_MemWrite;
    assign MemOp_s = store_MemOp_s;
    assign MemOp_l = store_MemOp_l;

    assign WriteData=({Instr_in[20:16]}==0)?0:((select_Writedata==0)?WriteData_from_E:WriteData_from_W);
    assign ALUResult=MemAddr;

	DataMemory DM(clk,reset,MemWrite&(!IRQ_E_and_M),MemAddr,WriteData,pc_add_4_in,MemOp_s,MemOp_l,DM_data_out);

    always @(*) begin
        case (Instr_in[31:26])      //special
            6'b001101:      //ori
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b001110:      //xori
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b001100:      //andi
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b001010:      //slti
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b001011:      //sltiu
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b001000:      //addi
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b001001:      //addiu
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b001111:      //lui
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b000100:      // beq
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b000101:      // bne
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b000001:      //bgez & bltz
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b000111:      //bgtz
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b000110:      //blez
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b100011:      //lw
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b100000:      //lb
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=3;
                end
            6'b100100:      //lbu
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=1;
                end
            6'b100001:      //lh
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=4;
                end
            6'b100101:      //lhu
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=2;
                end
            6'b101011:      //sw
                begin
                    store_MemWrite=((judge_timer==1)?0:1);
                    store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b101000:      //sb
                begin
                    store_MemWrite=((judge_timer==1)?0:1);
                    store_MemOp_s=1;store_MemOp_l=0;
                end
            6'b101001:      //sh
                begin
                    store_MemWrite=((judge_timer==1)?0:1);
                    store_MemOp_s=2;store_MemOp_l=0;
                end
            6'b000011:      //jal
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
				6'b000010:      //j
                begin
                    store_MemWrite=0;
                    store_MemOp_s=0;store_MemOp_l=0;
                end
                6'b010000:
                begin
                    store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                end
            6'b000000:
                begin
                    case (Instr_in[5:0])
                        6'b010000:       //mfhi
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b010010:       //mflo
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b010001:       //mthi
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b010011:       //mtlo
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100001:      //addu
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100000:      //add
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b000011:   //sra算术
                           begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                           end
                        6'b000010:   //srl逻辑
                           begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                           end
                        6'b000100:      //sllv
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b000110:      //srlv
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b000111:      //srav
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b101010:     //slt
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b101011:     //sltu
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100011:      //subu
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100010:      //sub
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100101:      //or
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100100:      //and
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100110:      //xor
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b100111:      //nor
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b001000:      //jr
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b001001:     //jalr
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b000000:      //nop & sll
                            begin
                                if(Instr_in==32'b0)  //nop
                                begin
                                    store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                                end
                                else begin          //sll
                                    store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                                end
                            end
                        6'b011000:       //mult
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b011001:       //multu
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b011010:       //div
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        6'b011011:       //divu
                            begin
                               store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                        default:
                            begin
                                store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                            end
                    endcase
                end
                default:
                begin
                    store_MemWrite=0;store_MemOp_s=0;store_MemOp_l=0;
                end
        endcase
    end

endmodule
