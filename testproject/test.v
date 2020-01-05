module mux2x1_behaviroal_if_else (a0, a1, s, y);
    input s, a0, a1;
    output y;
    reg y ;
    always @ (*) begin
        if (s)begin
            y = a1;
        end else begin
            y = a0;
        end
    end
endmodule