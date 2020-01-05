`timescale 1ns / 1ps
`include "GRF.v"
`include "EXT.v"
`include "CMP.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:47:39 11/26/2018
// Design Name:
// Module Name:    Level_Decode
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
module Level_Decode(
	 input clk,
	 input reset,
	 input GRF_en,
    input [31:0] Instr_in,
    input [31:0] PC_plus_4_in,
    input [31:0] PC_plus_8_in,
	 input [31:0] PC_plus_4_W,
    input [4:0] Reg_write,
	 input [31:0] WriteData,
	 input [31:0] ALUResult,
	 input [31:0] jal_pc_from_E,
	 input [31:0] jal_pc_from_M,
	 input [4:0] select_out1,
	 input [4:0] select_out2,
	 output [4:0] rs,
	 output [4:0] rt,
	 output [4:0] rd,
	 output [31:0] extImme,
	 output [31:0] nPC_b,		//ÀÕÕ˘IFº∂
	 output [31:0] nPC_j,		//ÀÕÕ˘IFº∂
	 output [31:0] nPC_jr,		//ÀÕÕ˘IFº∂
	 output [31:0] ReadData1,
	 output [31:0] ReadData2,
	 output [3:0] choose_way,
	 output judge_equal
    );

	 reg [3:0] store_choose_way=0;
	 reg [2:0] Reg_ext_control=0;

	 wire [31:0] GRFOUT1,GRFOUT2;

	 wire [2:0] ext_control;

	 assign ext_control = Reg_ext_control;
	 assign choose_way = store_choose_way;

	 assign rs = Instr_in[25:21];
	 assign rt = Instr_in[20:16];
	 assign rd = Instr_in[15:11];

	 assign ReadData1=(rs==0)?0:((select_out1==0)?GRFOUT1:(
							(select_out1==1)?jal_pc_from_E:(
							(select_out1==2)?ALUResult:(
							(select_out1==3)?jal_pc_from_M:WriteData))));

	 assign nPC_jr=ReadData1;

	 assign ReadData2=(rt==0)?0:((select_out2==0)?GRFOUT2:(
							(select_out2==1)?jal_pc_from_E:(
							(select_out2==2)?ALUResult:(
							(select_out2==3)?jal_pc_from_M:WriteData))));

	 GRF GRF(clk,GRF_en,reset,Instr_in[25:21],Instr_in[20:16],Reg_write,WriteData,PC_plus_4_W,GRFOUT1,GRFOUT2);

	 EXT EXT(PC_plus_4_in,ext_control,Instr_in[15:0],Instr_in[25:0],extImme,nPC_b,nPC_j);

	 CMP CMP(ReadData1,ReadData2,Instr_in,judge_equal);

	 ///////////////////////////////////////////////////////////////////////“Î¬Î≤ø∑÷
	 always @(*) begin
			//$display("%d Level:D %h : %h %h",$time,Instr_in,ReadData1,ReadData2);
			case (Instr_in[31:26])		//special¬Î
				6'b001101:		//ori
					begin
						Reg_ext_control=3;
						store_choose_way=0;
					end
				6'b001111:		//lui
					begin
						Reg_ext_control=2;
						store_choose_way=0;
					end
				6'b000100:		// beq
					begin
						store_choose_way=1;
					end
				6'b011000:		// blezals
					begin
						store_choose_way=1;
					end
				6'b100011:		//lw
					begin
						Reg_ext_control=1;
						store_choose_way=0;
					end
				6'b101011:		//sw
					begin
						Reg_ext_control=1;
						store_choose_way=0;
					end
				6'b000011:		//jal
					begin
						store_choose_way=2;
					end
				6'b000010:		//j
					begin
						store_choose_way=2;
					end
				6'b000000:
					begin
						case (Instr_in[5:0])
							6'b100001:		//addu
								begin
									store_choose_way=0;
								end
							6'b100011:		//subu
								begin
									store_choose_way=0;
								end
							6'b001000:		//jr
								begin
									store_choose_way=3;
								end
							6'b000000:		//nop
								begin
									store_choose_way=0;
								end
						endcase
					end
			endcase
	 end

endmodule
