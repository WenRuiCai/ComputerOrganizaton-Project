`timescale 1ns/10ps
module ROM (instruction, addr, read_en_);
    input read_en_;
    input [31:0] addr; //2^5条指令地址 32条指令读取
    output reg [31:0] instruction;
    reg [7:0] mem [0:127]; //最大读取32条指令
    initial begin
        $readmemb("my_rom_data.coe", mem);
          instruction = 0;
     end
    always @( addr or read_en_)
        if (read_en_) begin
          instruction[31:24] = mem[addr];
          instruction[23:16] = mem[addr+1];
          instruction[15:8] = mem[addr+2];
          instruction[7:0] = mem[addr+3];
        end
endmodule