`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    00:06:44 12/18/2018
// Design Name:
// Module Name:    bridge
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
module bridge(
    input [31:0] Instr_in,
    input [31:0] MemAddr_from_CPU,
    input [31:0] WriteData_from_CPU,
    input [31:0] data_from_timer1,
    input [31:0] data_from_timer2,
    input IRQ,
    output [31:0] WriteData_from_timer,
    output [3:2] timer_reg_addr,
    output [31:0] timer_writedata,
    output WE_timer1,
    output WE_timer2
    );

    reg judge_write=0;

    always @(*) begin       //判断指令是否是真的要写timer中的寄存器,store类指令
        if(({Instr_in[31:26]}==6'b101011)&&((MemAddr_from_CPU>=32'h00007f00&&MemAddr_from_CPU<=32'h00007f0b)||(MemAddr_from_CPU>=32'h00007f10&&MemAddr_from_CPU<=32'h00007f1b)))
            judge_write=1;
        else
            judge_write=0;
    end

    assign timer_reg_addr={MemAddr_from_CPU[3:2]};
    assign WE_timer1=(judge_write==1&&IRQ==0)?((MemAddr_from_CPU[4]==0)?1:0):0;
    assign WE_timer2=(judge_write==1&&IRQ==0)?((MemAddr_from_CPU[4]==1)?1:0):0;

    assign WriteData_from_timer=(MemAddr_from_CPU[4]==0)?data_from_timer1:data_from_timer2;

    assign timer_writedata = WriteData_from_CPU;


endmodule
