`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:50:16 12/06/2017 
// Design Name: 
// Module Name:    W_PipReg 
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
module W_PipReg(
    input clk,
    input reset,
	 input EXC_flush,
    
	 //
	 input [1:0] A_DR_MEM,
	 input [4:0] A3_MEM,
    input [31:0] ALU_O_MEM,
    input [31:0] DR_MEM,
    input [31:0] PC4_MEM,
    input [31:0] PC8_MEM,
    
	 //
	 output [1:0] A_DR_W,
	 output [4:0] A3_W,
    output [31:0] ALU_O_W,
    output [31:0] DR_W,
    output [31:0] PC4_W,
    output [31:0] PC8_W
    );
   reg [1:0] A_DR_reg;
	reg [4:0] A3_MEM_reg;
	reg [31:0] ALU_O_MEM_reg;
	reg [31:0] DR_MEM_reg;
	reg [31:0] PC4_MEM_reg;
	reg [31:0] PC8_MEM_reg;
	
	assign A_DR_W = A_DR_reg;
	assign A3_W = A3_MEM_reg;
	assign ALU_O_W = ALU_O_MEM_reg;
	assign DR_W = DR_MEM_reg;
	assign PC4_W = PC4_MEM_reg;
	assign PC8_W = PC8_MEM_reg;
	
	initial begin
	   A_DR_reg   <= 2'b0;
		A3_MEM_reg <= 5'b0;
		ALU_O_MEM_reg <= 32'b0;
		DR_MEM_reg <= 32'b0;
		PC4_MEM_reg <= 32'b0;
		PC8_MEM_reg <= 32'b0;
	end
	
	always @(posedge clk) begin
	  if(reset | EXC_flush)
	    begin
		   A_DR_reg   <= 2'b0;
		   A3_MEM_reg <= 5'b0;
			ALU_O_MEM_reg <= 32'b0;
			DR_MEM_reg <= 32'b0;
			PC4_MEM_reg <= 32'b0;
			PC8_MEM_reg <= 32'b0;
		 end
	  else
	    begin
		   A_DR_reg   <= A_DR_MEM;
		   A3_MEM_reg <= A3_MEM;
			ALU_O_MEM_reg <= ALU_O_MEM;
			DR_MEM_reg <= DR_MEM;
			PC4_MEM_reg <= PC4_MEM;
			PC8_MEM_reg <= PC8_MEM;
	    end
	end

endmodule
