`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    11:39:07 12/18/2018
// Design Name:
// Module Name:    timer2
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
module timer2(
    input clk,
    input reset,
    input [31:0] data_in,
    input enabled,
    input [3:2] addr,   //CPU地址空间中的地址，此处代表着要被写入的寄存器地址
    output [31:0] data_out,
    output Interrupt
    );
    reg [31:0] ctrl=0;
    reg [31:0] preset=0;
    reg [31:0] counter=0;

    reg [31:0] state_zero=0;                 //模式0状态寄存器
    reg [31:0] state_one=0;                  //模式1状态寄存器
    reg IRQ=0;                               //状态机中断寄存�
    reg [31:0] store_data_out=0;

    assign Interrupt = ({ctrl[3]}==1)?IRQ:0;
    assign data_out = store_data_out;

    always @(*) begin
        case (addr)
        0:
            store_data_out=ctrl;
        1:
            store_data_out=preset;
        2:
            store_data_out=counter;
        endcase
    end

    always @(posedge clk) begin
        if(reset) begin
            ctrl=0;
            preset=0;
            counter=0;
            ////////////////////////////////////
            state_zero=0;
            state_one=0;
        end
        else begin
            if(enabled) begin           //优先写入，此处是被外部改变条�
                case (addr)
                0:
                    ctrl=data_in;
                1:
                    preset=data_in;
                endcase
            end
            else begin                  //此处便是内部的转移逻辑
                case ({ctrl[2:1]})
                0:          //模式0
                    begin
                        case (state_zero)
                        0:          //IDLE
                            begin
                                if(ctrl[0]==1) begin
										      IRQ=0;
                                    state_zero=1;
                                end
                                else
                                    state_zero=0;
                            end
                        1:          //load
                            begin
                                counter=preset;
                                state_zero=2;
                            end
                        2:          //countering....
                            begin
                                if(ctrl[0]==1) begin
                                    if(counter<=1) begin
                                        state_zero=3;
                                        IRQ=1;
                                    end
                                    else begin
                                        counter=counter-1;
                                    end
                                end
                                else begin
                                    state_zero=0;
                                end
                            end
                        3:
                            begin
                                if({ctrl[2:1]}!=0)
                                    IRQ=0;
                                state_zero=0;
                            end
                        endcase
                    end
                1:          //模式1
                    begin
                        case (state_one)
                        0:          //IDLE
                            begin
                                if(ctrl[0]==1) begin
                                    state_one=1;
                                end
                                else
                                    state_one=0;
                            end
                        1:          //load
                            begin
                                IRQ=0;
                                counter=preset;
                                state_one=2;
                            end
                        2:          //countering....
                            begin
                                if({ctrl[2:1]}!=1)
                                    IRQ=0;
                                else begin
                                    if(ctrl[0]==1) begin
                                        if(counter<=1) begin
                                            state_one=1;
                                            IRQ=1;
                                        end
                                        else begin
                                            counter=counter-1;
                                        end
                                    end
                                    else begin
                                        state_one=0;
                                    end
                                end
                            end
                        endcase
                    end
                endcase
            end
        end
    end

endmodule