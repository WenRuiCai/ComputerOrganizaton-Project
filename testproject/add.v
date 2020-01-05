module ff(
    input clk,
    input a,
    input b,
    output c
    );
    reg[31:0] _reg[31:0];
    reg i=0;
    initial begin
        for(i=0;i<=31;i++)begin
            _reg[i] <= 0;
        end
    end

endmodule
