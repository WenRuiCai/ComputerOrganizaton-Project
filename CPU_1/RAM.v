`timescale 1ns /1ns
module RAM (i_data, addr, rw, o_data, clk);
    input [31:0] i_data;
    input [31:0] addr;
    input rw, clk;
    output reg [31:0] o_data;
    reg [7:0] memory [0:63]; // 最多16个数据，因为好像模拟器上限好像是64个寄存器
     initial begin
        o_data = 0;
     end
    always @(negedge clk) begin // 解决冒险与竞争问题，只使用一个
      if (rw) begin // 1 为 写
          memory[addr+3] = i_data[31:24]; //使用对小端的模式，这里已经更改错误乘4的错误，谢谢指出
          memory[addr+2] = i_data[23:16];
          memory[addr+1] = i_data[15:8];
          memory[addr] = i_data[7:0];
      end else begin // 0 为 读
          o_data[31:24] = memory[addr+3];
          o_data[23:16] = memory[addr+2];
          o_data[15:8] = memory[addr+1];
          o_data[7:0] = memory[addr];
      end
    end
endmodule