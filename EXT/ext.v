`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:08:07 10/25/2018 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output [31:0] ext
    );
    reg [31:0]store;
    reg [15:0]change;
    assign ext = store;
    always @(*)begin
        if(EOp==2'b00)
        begin
             if(imm[15]==1'b1)
             begin
                 change=16'hFFFF;
                 store={change[15:0],imm[15:0]};
             end
             else begin
                 change=16'h0000;
                 store={change[15:0],imm[15:0]};
             end
        end
        else if (EOp==2'b01) begin
            change=16'h0000;
            store={change[15:0],imm[15:0]};
        end
        else if (EOp==2'b10) begin
            change=16'h0000;
            store={imm[15:0],change[15:0]};
        end
        else if (EOp==2'b11) begin
            if(imm[15]==1'b1)
            begin
                change=16'hFFFF;
                store={change[15:0],imm[15:0]};
            end
            else begin
                change=16'h0000;
                store={change[15:0],imm[15:0]};
            end
            store=store<<2;
        end
    end
endmodule

