`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:47:59 11/26/2018
// Design Name:
// Module Name:    ALU
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
module ALU(
    input [31:0] SrcA,
    input [31:0] SrcB,
    input [2:0] ALUOp,
    output [31:0] ALUResult
    );
	reg [31:0] store=0;
	assign ALUResult=store;
	always @(*)begin
			//$display("%d : In ALU A is %h B is %h Op is %d",$time,SrcA,SrcB,ALUOp);
			case(ALUOp)
			0:
				store=SrcA&SrcB;
			1:
				store=SrcA|SrcB;
			2:
				store=SrcA+SrcB;
			6:
				begin
					store=SrcA-SrcB;
					//$display("%d : %h-%h",$time,SrcA,SrcB);
				end
			endcase
			//$display("%h %d",store,judge);
	end

endmodule

