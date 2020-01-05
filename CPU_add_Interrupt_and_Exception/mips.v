`timescale 1ns / 1ps
`include "cpu.v"
`include "timer1.v"
`include "timer2.v"
`include "bridge.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    21:58:13 12/21/2018
// Design Name:
// Module Name:    mips
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
module mips(
    input clk,
    input reset
    );

    wire [31:0] WriteData_from_timer,MemAddr_from_CPU,WriteData_from_CPU,data_timer1,data_timer2,timer_writedata,Instruction_M;

    wire WE_timer1,WE_timer2,Interrupt1,Interrupt2;

    wire [7:2] HWInt;

    wire [3:2] timer_reg_addr;

    assign HWInt ={4'b0,Interrupt2,Interrupt1} ;

    cpu cpu(clk, reset, WriteData_from_timer, HWInt, MemAddr_from_CPU, WriteData_from_CPU, Instruction_M, IRQ);

    bridge bridge(Instruction_M, MemAddr_from_CPU, WriteData_from_CPU, data_timer1, data_timer2, IRQ, WriteData_from_timer, timer_reg_addr, timer_writedata, WE_timer1, WE_timer2);

    timer1 timer1(clk, reset, timer_writedata, WE_timer1, timer_reg_addr, data_timer1, Interrupt1);

    timer2 timer2(clk, reset, timer_writedata, WE_timer2, timer_reg_addr, data_timer2, Interrupt2);

endmodule
