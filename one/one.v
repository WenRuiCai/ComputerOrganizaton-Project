module one;
    reg clk;
    initial begin
        clk = 0;
    end
    initial #1 clk=~clk;
endmodule