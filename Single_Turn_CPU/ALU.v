`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:36:54 11/17/2018 
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
    output [31:0] ALUResult,
	 output Equal
    );
	reg [31:0] store=0;
	reg judge=0;
	assign Equal=judge;
	assign ALUResult=store;
	always @(*)begin
			//$display("%h %h",SrcA,SrcB);
			case(ALUOp)
			0:
			begin
				store=SrcA&SrcB;
				judge=1;
			end
			1:
			begin
				store=SrcA|SrcB;
				judge=1;
			end
			2:
			begin
				store=SrcA+SrcB;
				judge=1;
			end
			6:
			begin
				store=SrcA-SrcB;
				judge=1;
			end
			7:
				if(SrcA==SrcB)
					judge=1;
				else
					judge=0;
			3:
			begin
				store=(SrcA<SrcB)?1:0;
				judge=1;
			end
			5:
				begin
					store=SrcA;
					judge=(SrcB!=0)?1:0;
				end
			endcase
			//$display("%h %d",store,judge);
	end

endmodule
