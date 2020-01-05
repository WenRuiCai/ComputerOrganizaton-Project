module regfile (rs, rt, i_data, rd, we, clk, o_data_1, o_data_2);
  input [4:0] rs, rt, rd;
  input [31:0] i_data;
  input we, clk;
  output [31:0] o_data_1, o_data_2;
  reg [31:0] register [0:31];
  initial begin
    register[0] = 0; // 只需要确定零号寄存器的值就好
  end
  assign o_data_1 = register[rs];
  assign o_data_2 = register[rt];
  always @(posedge clk) begin
    if ((rd != 0) && (we == 1)) begin
      register[rd] = i_data;
    end
  end
endmodule