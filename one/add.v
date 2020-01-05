`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:11:19 09/25/2018 
// Design Name: 
// Module Name:    add 
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
module add();
    reg A,B,cin;
    wire Sum,Overflow;
    initial begin
        A=0;B=0;cin=0;
        $monitor("%04dns monitor: A=%d,B=%d,cin=%d,Sum=%d,Overflow=%d",$time,A,B,cin,Sum,Overflow);
        #1000 $finish;
    end
always #50 cin = cin+1;
always #100 A =A+1;
always #200 B=B+1;
endmodule