module pcAddFour(i_pc, o_pc);
  input wire [31:0] i_pc; //2^5条指令地址 32条指令读取
  output wire [31:0] o_pc;
  assign o_pc[31:0] = i_pc[31:0] + 4;
endmodule