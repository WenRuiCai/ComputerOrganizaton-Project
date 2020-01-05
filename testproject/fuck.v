`include "test.v"
module test_you;

    reg s,a0,a1;
    wire y;
    mux2x1_behaviroal_if_else t1(a0,a1,s,y);

    //test cases
    initial begin
            s = 0; a1 = 0; a0 = 0;
        #1  s = 0; a1 = 0; a0 = 1;
        #1  s = 0; a1 = 1; a0 = 0;
        #1  s = 0; a1 = 1; a0 = 1;
        #1  s = 1; a1 = 0; a0 = 0;
        #1  s = 1; a1 = 0; a0 = 1;
        #1  s = 1; a1 = 1; a0 = 0;
        #1  s = 1; a1 = 1; a0 = 1;
        #1  s = 0; a1 = 0; a0 = 0;
        #1 $finish;
    end
    initial begin
        $monitor ($time, ":\ts = %b\ta1 = %b\ta0 = %b\ty = %b",
                    s, a1, a0, y);
        $dumpfile("test_test.vcd");
        $dumpvars;
    end
endmodule