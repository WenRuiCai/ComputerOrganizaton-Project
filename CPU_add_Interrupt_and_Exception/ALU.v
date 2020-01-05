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
    input [4:0] s,
    input [4:0] ALUOp,
    output [31:0] ALUResult
    );
	reg [31:0] store=0;
	assign ALUResult=store;
	always @(*)begin
			//$display("%d : In ALU A is %h B is %h Op is %d",$time,SrcA,SrcB,ALUOp);
			case(ALUOp)
			0:       //and
				store=SrcA&SrcB;
			1:       //or
				store=SrcA|SrcB;
			2:       //unsigned add
				store=SrcA+SrcB;
            3:      //xor
                store=SrcA^SrcB;
            4:      //sltu
                store=(SrcA<SrcB)?32'b1:32'b0;
            5:      //logical change right
                store=SrcB>>({SrcA[4:0]});
			6:       //unsigned sub
				store=SrcA-SrcB;
				//$display("%d : %h-%h",$time,SrcA,SrcB);
            7:      //logical change left
                store=SrcB<<({SrcA[4:0]});
            8:      //nor
                store=~(SrcA|SrcB);
            9:  //signed add
                store=$signed(SrcA)+$signed(SrcB);
            10: //signed sub
                store=$signed(SrcA)-$signed(SrcB);
            11:     //slt
                store=($signed(SrcA)<$signed(SrcB))?32'b1:32'b0;
            12:     //algorithm change right
                store=$signed(SrcB)>>>({SrcA[4:0]});
            13:     //logical left
                store=SrcB<<s;
            14:     //logical right
                store=SrcB>>s;
            15:     //algorithm right
                store=$signed(SrcB)>>>s;
			endcase
			//$display("%h %d",store,judge);
	end

endmodule

