`timescale 1ns / 1ps
`include "ALU.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:48:29 11/26/2018
// Design Name:
// Module Name:    Level_Execute
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
module Level_Execute(
    input [31:0] Instr_in,
    input [31:0] PC_plus_4,
    input [31:0] PC_plus_8,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] ReadData1,
    input [31:0] ReadData2,
    input [31:0] ext,
    input [31:0] Data_out_W,
    input [31:0] ALUResult_M,
    input [4:0] select_rs_or_SrcA,
    input [4:0] select_rt_or_SrcB,
    output [4:0] WriteRegNum,
    output [31:0] rt_value,
    output [31:0] ALUResult
    );

    wire [31:0] SrcA,SrcB;
    wire [4:0] ALUOp;
    wire [2:0] ALUSrc;

    reg [4:0] Reg_ALUOP=0;
    reg [2:0] Reg_ALUSrc=0;

    reg [4:0] RegDst=0;

    assign ALUOp = Reg_ALUOP;
	 assign ALUSrc = Reg_ALUSrc;

    assign SrcA=(A1==0)?0:((select_rs_or_SrcA==0)?ReadData1:(
                (select_rs_or_SrcA==1)?ALUResult_M:Data_out_W));

    assign rt_value=(A2==0)?0:((select_rt_or_SrcB==0)?ReadData2:(
                (select_rt_or_SrcB==1)?ALUResult_M:Data_out_W));

    assign SrcB=(ALUSrc==0)?rt_value:ext;

    assign WriteRegNum=(RegDst==0)?A2:(
                       (RegDst==1)?A3:31);

    ALU ALU (SrcA,SrcB,Instr_in[10:6],ALUOp,ALUResult);

    /////////////////////////////////////////////////ALUOP ??ALUSrc???
    always @(*) begin
        case (Instr_in[31:26])    //Special
        6'b001101:      //ori
            begin
                Reg_ALUOP=1;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b001110:      //xori
            begin
                Reg_ALUOP=3;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b001100:      //andi
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b001010:      //slti
            begin
                Reg_ALUOP=11;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b001011:      //sltiu
            begin
                Reg_ALUOP=4;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b001000:      //addi
            begin
                Reg_ALUOP=9;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b001001:      //addiu
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b001111:      //lui
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b000100:      // beq
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b000101:      // bne
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b000001:      //bgez & bltz
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b000111:      //bgtz
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b000110:      //blez
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b100011:      //lw
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b100000:   //lb
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b100100:   //lbu
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b100001:   //lh
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b100101:   //lhu
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b101011:      //sw
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b101000:    //sb
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b101001:    //sh
            begin
                Reg_ALUOP=2;
                Reg_ALUSrc=1;
                RegDst=0;
            end
        6'b000011:      //jal
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=2;
            end
		  6'b000010:      //j
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=0;       //change
            end
        6'b000000:
            begin
                case (Instr_in[5:0])
                    6'b100001:      //addu
                        begin
                            Reg_ALUOP=2;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b100000:      //add
                        begin
                            Reg_ALUOP=9;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b000011:   //sra算术
                        begin
                            Reg_ALUOP=15;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b000010:   //srl逻辑
                        begin
                            Reg_ALUOP=14;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b000100:      //sllv
                        begin
                            Reg_ALUOP=7;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b000110:      //srlv
                        begin
                            Reg_ALUOP=5;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b000111:      //srav
                        begin
                            Reg_ALUOP=12;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b101010:     //slt
                        begin
                            Reg_ALUOP=11;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b101011:     //sltu
                        begin
                            Reg_ALUOP=4;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b100011:      //subu
                        begin
                            Reg_ALUOP=6;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b100010:      //sub
                        begin
                            Reg_ALUOP=10;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b100101:      //or
                        begin
                            Reg_ALUOP=1;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b100100:      //and
                        begin
                            Reg_ALUOP=0;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b100110:      //xor
                        begin
                            Reg_ALUOP=3;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b100111:      //nor
                        begin
                            Reg_ALUOP=8;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b001000:      //jr
                        begin
                            Reg_ALUOP=0;
                            Reg_ALUSrc=1;
                            RegDst=0;
                        end
                    6'b001001:     //jalr
                        begin
                            Reg_ALUOP=0;
                            Reg_ALUSrc=1;
                            RegDst=1;
                        end
                    6'b000000:      //nop & sll
                        begin
                            if(Instr_in==32'b0)  //nop
                            begin
                                Reg_ALUOP=0;
                                Reg_ALUSrc=1;
                                RegDst=0;
                            end
                            else begin          //sll
                                Reg_ALUOP=13;
                                Reg_ALUSrc=0;
                                RegDst=1;
                            end
                        end
                endcase
            end
        endcase
    end

endmodule
