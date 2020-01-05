`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:02:24 12/26/2017 
// Design Name: 
// Module Name:    EPC 
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
module EPC(
    
	 input clk,
    input reset,
	 
	 input EPC_PCWE,
	 input [31:0] PC_In,

	 input EPC_WE,
    input [31:0] DIn,
    
	 output [31:0] DOut
    );
  
  reg [31:0] EPC;
  
  initial begin
    EPC = 0;
  end
  
  assign DOut = EPC;
  
  always @(posedge clk) begin
    if(reset)
	   begin
		  EPC <= 0;
		end
	 else if(EPC_PCWE)
	   begin
		  EPC <= PC_In;
		end
	 else if(EPC_WE)
	   begin
		  EPC <= DIn;
		end
  end

endmodule
