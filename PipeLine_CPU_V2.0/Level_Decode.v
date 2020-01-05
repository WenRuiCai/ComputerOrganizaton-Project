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
	 output [31:0] nPC_b,		//ËÍÍùIF¼¶
	 output [31:0] nPC_j,		//ËÍÍùIF¼¶
	 output [31:0] nPC_jr,		//ËÍÍùIF¼¶
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

	 ///////////////////////////////////////////////////////////////////////ÒëÂë²¿·Ö
	 always @(*) begin
			//$display("%d Level:D %h : %h %h",$time,Instr_in,ReadData1,ReadData2);
			case (Instr_in[31:26])		//specialÂë
				6'b001101:		//ori
					begin
						Reg_ext_control=3;
						store_choose_way=0;
					end
				6'b001110:		//xori
					begin
						Reg_ext_control=3;
						store_choose_way=0;
					end
				6'b001100:		//andi
					begin
						Reg_ext_control=3;
						store_choose_way=0;
					end
				6'b001010:		//slti
					begin
						Reg_ext_control=1;
						store_choose_way=0;
					end
				6'b001011:		//sltiu
					begin
						Reg_ext_control=1;
						store_choose_way=0;
					end
				6'b001000:		//addi
					begin
						Reg_ext_control=1;
						store_choose_way=0;
					end
				6'b001001:      //addiu
					begin
						Reg_ext_control=1;
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
				6'b000101:		// bne
					begin
						store_choose_way=1;
					end
				6'b000001:      //bgez & bltz
					begin
						store_choose_way=1;
					end
				6'b000111:      //bgtz
					begin
						store_choose_way=1;
					end
				6'b000110:      //blez
					begin
						store_choose_way=1;
					end
				6'b100011:      //lw
					begin
						Reg_ext_control=1;
						store_choose_way=0;
					end
				6'b100000:   //lb
                    begin
                        Reg_ext_control=1;
                        store_choose_way=0;
                    end
                6'b100100:   //lbu
                    begin
                        Reg_ext_control=1;
                        store_choose_way=0;
                    end
                6'b100001:   //lh
                    begin
                        Reg_ext_control=1;
                        store_choose_way=0;
                    end
                6'b100101:   //lhu
                    begin
                        Reg_ext_control=1;
                        store_choose_way=0;
                    end
				6'b101011:      //sw
					begin
						Reg_ext_control=1;
						store_choose_way=0;
					end
				6'b101000:    //sb
                    begin
                        Reg_ext_control=1;
                        store_choose_way=0;
                    end
                6'b101001:    //sh
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
							6'b100000:		//add
								begin
									store_choose_way=0;
								end
							6'b000011:   //sra����
                           		begin
                           	    	store_choose_way=0;
                           		end
                           	6'b000010:   //srl�߼�
                           		begin
                           	  		store_choose_way=0;
                           		end
							6'b000100:		//sllv
								begin
									store_choose_way=0;
								end
							6'b000110:		//srlv
								begin
									store_choose_way=0;
								end
							6'b000111:		//srav
								begin
									store_choose_way=0;
								end
							6'b101010:     //slt
								begin
									store_choose_way=0;
								end
							6'b101011:     //sltu
								begin
									store_choose_way=0;
								end
							6'b100011:		//subu
								begin
									store_choose_way=0;
								end
							6'b100010:		//sub
								begin
									store_choose_way=0;
								end
							6'b100101:		//or
								begin
									store_choose_way=0;
								end
							6'b100100:		//and
								begin
									store_choose_way=0;
								end
							6'b100110:		//xor
								begin
									store_choose_way=0;
								end
							6'b100111:		//nor
								begin
									store_choose_way=0;
								end
							6'b001000:		//jr
								begin
									store_choose_way=3;
								end
							6'b001001:     //jalr
								begin
									store_choose_way=3;
								end
							6'b000000:		//nop & sll
								begin
									if(Instr_in==32'b0)  //nop
                              		begin
                              		  store_choose_way=0;
                              		end
                              		else begin          //sll
                              		  store_choose_way=0;
                              		end
								end
						endcase
					end
			endcase
	 end

endmodule
