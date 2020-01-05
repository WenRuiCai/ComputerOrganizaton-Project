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
	input [31:0] jal_pc_from_M,
    input [4:0] select_rs_or_SrcA,
    input [4:0] select_rt_or_SrcB,
    output [4:0] WriteRegNum,
    output [31:0] rt_value,
    output [31:0] ALUResult
    );

    wire [31:0] SrcA,SrcB;
    wire [2:0] ALUOp,ALUSrc;

    reg [2:0] Reg_ALUOP=0,Reg_ALUSrc=0;

    reg [4:0] RegDst=0;

    assign ALUOp = Reg_ALUOP;
	 assign ALUSrc = Reg_ALUSrc;

    assign SrcA=(A1==0)?0:((select_rs_or_SrcA==0)?ReadData1:(
                (select_rs_or_SrcA==1)?ALUResult_M:(
                (select_rs_or_SrcA==2)?Data_out_W:jal_pc_from_M)));

    assign rt_value=(A2==0)?0:((select_rt_or_SrcB==0)?ReadData2:(
                (select_rt_or_SrcB==1)?ALUResult_M:(
                (select_rt_or_SrcB==2)?Data_out_W:jal_pc_from_M)));

    assign SrcB=(ALUSrc==0)?rt_value:ext;

    assign WriteRegNum=(RegDst==0)?A2:(
                       (RegDst==1)?A3:31);

    ALU ALU (SrcA,SrcB,ALUOp,ALUResult);

    /////////////////////////////////////////////////ALUOP ??ALUSrc???
    always @(*) begin
		//$display("%d rt:%h",$time,rt_value);
        case (Instr_in[31:26])    //Special
        6'b001101:      //ori
            begin
                Reg_ALUOP=1;
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
		  6'b011000:      // blezals
            begin
                Reg_ALUOP=0;
                Reg_ALUSrc=1;
                RegDst=2;
            end
        6'b100011:      //lw
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
                    6'b100011:      //subu
                        begin
                            Reg_ALUOP=6;
                            Reg_ALUSrc=0;
                            RegDst=1;
                        end
                    6'b001000:      //jr
                        begin
                            Reg_ALUOP=0;
                            Reg_ALUSrc=1;
                            RegDst=0;
                        end
                    6'b000000:      //nop
                        begin
                            Reg_ALUOP=0;
                            Reg_ALUSrc=1;
                            RegDst=0;
                        end
                endcase
            end
        endcase
    end

endmodule
