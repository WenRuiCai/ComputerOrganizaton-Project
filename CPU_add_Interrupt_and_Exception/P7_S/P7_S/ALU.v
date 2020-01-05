`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:34:10 12/06/2017 
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
	 input [4:0]  shamt,
	 
    input [3:0] ALUControl,
	 input       ALUout_sel,
    
	 output [31:0] ALUResult,
	 output        Overflow
    );
  
  parameter add_code = 4'b0000,
            sub_code = 4'b0001,
				or_code  = 4'b0010,
				and_code = 4'b0011,
				xor_code = 4'b0100,
				nor_code = 4'b0101,
				slti_code = 4'b0110,
				sltiu_code = 4'b0111,
				sllv_code = 4'b1000,
				srlv_code = 4'b1001,
				srav_code = 4'b1010;
				
 
  reg [31:0] ALU_out;
  reg        Temp;
  reg [31:0] ALU_out_move;
  
  assign ALUResult = (ALUout_sel) ? ALU_out_move : ALU_out;
  
  assign Overflow = (Temp != ALU_out[31]) ? 1'b1 : 1'b0;
  
  
  always@(*)begin
    case(ALUControl)
		sllv_code: ALU_out_move <= SrcB << shamt;
		srlv_code: ALU_out_move <= SrcB >> shamt;
		srav_code: ALU_out_move <= $signed(SrcB) >>> shamt;
    endcase
  end
  
  always@(*)begin
    case(ALUControl)
	   add_code: {Temp, ALU_out} <= {{SrcA[31]}, SrcA} + {{SrcB[31]}, SrcB};
		sub_code: {Temp, ALU_out} <= {{SrcA[31]}, SrcA} - {{SrcB[31]}, SrcB};
		or_code : ALU_out <= SrcA | SrcB;
		and_code: ALU_out <= SrcA & SrcB;
		xor_code: ALU_out <= SrcA ^ SrcB;
		nor_code: ALU_out <= ~(SrcA | SrcB);
		slti_code: ALU_out <= ($signed(SrcA) < $signed(SrcB)) ? 32'h00000001 : 32'h00000000;
		sltiu_code: ALU_out <= ($unsigned(SrcA) < $unsigned(SrcB)) ? 32'h00000001 : 32'h00000000;
		sllv_code: ALU_out <= SrcB << SrcA[4:0];
		srlv_code: ALU_out <= SrcB >> SrcA[4:0];
		srav_code: ALU_out <= $signed(SrcB) >>> SrcA[4:0];
    endcase
  end
  
endmodule
