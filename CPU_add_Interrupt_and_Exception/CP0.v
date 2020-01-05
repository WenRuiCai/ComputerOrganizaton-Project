`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    17:40:30 12/22/2018
// Design Name:
// Module Name:    CP0
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
module CP0(
    input [4:0] Read_CP0reg,
    input [4:0] Write_CP0reg,
    input [31:0] writecp0data,
    input [31:0] PC,
    input [31:0] Instruction_W,
    input [6:2] ExcCode,
    input [7:2] HWInt,
    input WE,
    input EXLSet,
    input EXLClr,
    input clk,
    input reset,
    output IntReq,
    output [31:0] EPC,
    output [31:0] Dataout
    );

    reg [15:10] im=0;       //中断屏蔽位
    reg exl=0;              //1-进入异常，不允许再中断；0-允许中断
    reg ie=0;               //全局中断使能
    reg [31:0] SR=0;

    reg [31:0] CAUSE =0;
    reg BD=0;

    reg [31:0] store_EPC=0;
    assign EPC = store_EPC;

    reg [31:0] PRID=0;
    //中断产生逻辑
    assign IntReq = (|(HWInt[7:2] & im[15:10])) & ie & (!exl);
/************************************读逻辑****************************/

    assign Dataout= (Read_CP0reg==12)?SR:(
                    (Read_CP0reg==13)?CAUSE:(
                    (Read_CP0reg==14)?store_EPC:(
                    (Read_CP0reg==15)?PRID:32'b0)));
/*************************************写逻辑***************************/

    always @(posedge clk) begin
        if(reset) begin
            im=0; exl=0; ie=0; store_EPC=0;
            SR=0; CAUSE=0; PRID=0;
        end
        else begin
            if(WE) begin
                case (Write_CP0reg)
                    12:
                        begin
                            im={writecp0data[15:10]};
                            exl=writecp0data[1];
                            ie=writecp0data[0];
                            SR=writecp0data;
                        end
                    14:
                        begin
                            store_EPC=writecp0data;
                        end
                endcase
            end
            if(EXLSet==1) begin
                exl=1;
                SR={SR[31:2],exl,SR[0]};
            end
            if(EXLClr==1) begin
                exl=0;
                SR={SR[31:2],exl,SR[0]};
            end
            if(ExcCode!=0||IntReq) begin
                if({Instruction_W[31:26]}==6'b000100||{Instruction_W[31:26]}==6'b000101||{Instruction_W[31:26]}==6'b000001||{Instruction_W[31:26]}==6'b000111||{Instruction_W[31:26]}==6'b000110||{Instruction_W[31:26]}==6'b000011||{Instruction_W[31:26]}==6'b000010||({Instruction_W[31:26]}==6'b000000&&{Instruction_W[5:0]}==6'b001000)||({Instruction_W[31:26]}==6'b000000&&{Instruction_W[5:0]}==6'b001001))
                begin
                    BD=1;
                    store_EPC=PC-4;
                    CAUSE={BD,15'b0,HWInt,3'b0,(IntReq==1)?5'b0:ExcCode,2'b0};
                end
                else begin
                    BD=0;
                    store_EPC=PC;
                    CAUSE={BD,15'b0,HWInt,3'b0,(IntReq==1)?5'b0:ExcCode,2'b0};
                end
            end
            CAUSE={CAUSE[31],15'b0,HWInt,3'b0,CAUSE[6:2],2'b0};
        end
    end
endmodule
