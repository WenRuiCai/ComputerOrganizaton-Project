module Sample(
    A,B,temp,C
    );
    input A,B,temp;
    output C;
    reg[31:0] _reg[31:0];
    wire i;
    initial begin
        for(i=0;i<=31;i++)begin
            _reg[i] <= 0;
        end
    end
endmodule