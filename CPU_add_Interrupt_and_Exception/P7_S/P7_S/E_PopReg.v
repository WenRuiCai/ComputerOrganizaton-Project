`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:26:37 12/06/2017 
// Design Name: 
// Module Name:    E_PopReg 
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
module E_PipReg(
    input clk,
    input reset,
	 input EXC_flush,
	 input clr,
	 input If_flush,
    
	 //
	 input [31:0] V1_ID,
    input [31:0] V2_ID,
    input [4:0]  A3_ID,
    input [31:0] EXT_ID,
    input [31:0] PC4_ID,
    input [31:0] PC8_ID,
    
	 //
	 output [31:0] V1_E,
    output [31:0] V2_E,
    output [4:0]  A3_E,
    output [31:0] EXT_E,
    output [31:0] PC4_E,
    output [31:0] PC8_E
    );
  
  reg [31:0] V1_ID_reg;
  reg [31:0] V2_ID_reg;
  reg [4:0]  A3_ID_reg;
  reg [31:0] EXT_ID_reg;
  reg [31:0] PC4_ID_reg;
  reg [31:0] PC8_ID_reg;

  assign V1_E = V1_ID_reg;
  assign V2_E = V2_ID_reg;
  assign A3_E = A3_ID_reg;
  assign EXT_E = EXT_ID_reg;
  assign PC4_E = PC4_ID_reg;
  assign PC8_E = PC8_ID_reg;

  initial begin
    V1_ID_reg <= 32'b0;
	 V2_ID_reg <= 32'b0;
	 A3_ID_reg <= 5'b0;
	 EXT_ID_reg <= 32'b0;
	 PC4_ID_reg <= 32'b0;
	 PC8_ID_reg <= 32'b0;
  end

  always@(posedge clk)begin
    if(reset || clr || If_flush || EXC_flush)
	   begin
		 V1_ID_reg <= 32'b0;
		 V2_ID_reg <= 32'b0;
		 A3_ID_reg <= 5'b0;
		 EXT_ID_reg <= 32'b0;
		 PC4_ID_reg <= 32'b0;
		 PC8_ID_reg <= 32'b0;
		end
    else
		begin
		 V1_ID_reg <= V1_ID;
		 V2_ID_reg <= V2_ID;
		 A3_ID_reg <= A3_ID;
		 EXT_ID_reg <= EXT_ID;
		 PC4_ID_reg <= PC4_ID;
		 PC8_ID_reg <= PC8_ID;
		end
  end

endmodule
