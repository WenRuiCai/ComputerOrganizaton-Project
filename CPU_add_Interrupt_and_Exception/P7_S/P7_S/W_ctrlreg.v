`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:09:01 12/07/2017 
// Design Name: 
// Module Name:    W_ctrlreg 
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
module W_ctrlreg(
    input clk,
    input reset,
	 input EXC_flush,
    
	 input [2:0] Lw_sel_MEM,
	 input [1:0] Memtoreg_MEM,
    input       RegWrite_MEM,
    
	 output [1:0] Memtoreg_W,
    output [2:0] Lw_sel_W,
	 output       RegWrite_W
    );

  reg [5:0] W_reg;
  
  assign {Lw_sel_W, Memtoreg_W, RegWrite_W} = W_reg;
  
  initial begin
    W_reg <= 6'b000000;
  end
  
  always @(posedge clk) begin
    if(reset | EXC_flush)
	   begin
		  W_reg <= 6'b000000;
		end
    else
	   begin
		  W_reg <= {Lw_sel_MEM, Memtoreg_MEM, RegWrite_MEM};
		end
  end

endmodule
