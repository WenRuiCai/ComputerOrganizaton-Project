`timescale 1ns / 1ps
`include "ALU.v"
`include "Controller.v"
`include "DataMemory.v"
`include "EXT.v"
`include "GRF.v"
`include "IFU.v"
module mips(
    input reset,
    input clk
    );
    wire [1:0]RegDst;
    wire WE;
    wire WE3;
    wire [2:0] ALUControl;
    wire [1:0]MemtoReg;
    wire [2:0] ALUSrc;
	 wire [1:0] MemRead;

    wire [31:0] j_addr;
    wire [31:0] b_addr;
    wire [3:0] choose_way;
    wire  [31:0] nPC;
    wire [31:0]PC;
    wire  [5:0] Function;
    wire  [4:0] instr_zero;
    wire  [4:0] rd;
    wire  [4:0] rt;
    wire  [4:0] rs_or_base;
    wire  [5:0] special;
    wire  [15:0] Immediate1;
    wire  [25:0] Immediate2;

    wire [31:0] SrcB;
    wire  [31:0] ALUResult;
    wire  Equal;

    wire [4:0] A3;
    wire [31:0] WD3;
    wire  [31:0] RD1;
    wire  [31:0] RD2;

    wire [31:0] data_out;

    assign A3 =(RegDst==0)?(rt):((RegDst==1)?(rd):(31)) ;
	 
    assign WD3 = (MemtoReg==0)?(ALUResult):((MemtoReg==1)?data_out:(nPC));
	 
	 IFU IFU(j_addr,b_addr,RD1,choose_way,clk,reset,Equal,nPC,PC,Function,instr_zero,rd,rt,rs_or_base,special,Immediate1,Immediate2);

    Controller Controller(Function,special,RegDst,WE,WE3,ALUControl,MemtoReg,ALUSrc,choose_way,MemRead);

	 ALU ALU(RD1,SrcB,ALUControl,ALUResult,Equal);

    GRF GRF(clk,WE3&Equal,reset,rs_or_base,rt,A3,WD3,PC,RD1,RD2);

    DataMemory DataMemory(clk,reset,WE,ALUResult[11:0],RD2,PC,MemRead,data_out);

    EXT EXT(nPC,ALUSrc,RD2,Immediate1,Immediate2,SrcB,b_addr,j_addr);

endmodule


