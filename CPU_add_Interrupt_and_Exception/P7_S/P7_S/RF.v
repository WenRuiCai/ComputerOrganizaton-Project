`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:34:52 12/06/2017 
// Design Name: 
// Module Name:    RF 
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
module RF(
    input clk,
    input reset,
    input WE,
    input [4:0] A1,
    input [4:0] A2,
    input [4:0] A3,
    input [31:0] WD,
    output [31:0] RD1,
    output [31:0] RD2
    );
  
  reg [31:0] Regfile [31:0];
  reg [31:0] RD1_RF;
  reg [31:0] RD2_RF;
  
  wire RD1_sel;
  wire RD2_sel;
  
  // three ported register file
  // read two ports combinationally
  // write third port on rising edge of clock
  // register 0 hardwired to 0
  
  integer i;
  initial begin
	 for(i = 0;i < 32; i = i + 1)
		    Regfile[i] <= 0;
  end
  
  assign RD1_sel = (A1 == A3) & (A3 !== 5'b00000) & WE;
  assign RD2_sel = (A2 == A3) & (A3 !== 5'b00000) & WE;
  
  MUX2to1 #(32) RD1_Mux(RD1_RF, WD, RD1_sel, RD1);
  MUX2to1 #(32) RD2_Mux(RD2_RF, WD, RD2_sel, RD2);
  
  always@(*) begin
   RD1_RF <= (A1 != 0) ? Regfile[A1] : 0;
   RD2_RF <= (A2 != 0) ? Regfile[A2] : 0;
  end
 
  always @(posedge clk) begin
    if(reset)
	   begin
		  for(i = 0;i < 32; i = i + 1)
		    Regfile[i] <= 0;
      end
    else begin		
	   if(WE)
	     begin
		    if(A3 !== 5'b00000)
			   begin
		        Regfile[A3] <= WD;
				end
		  end
	 end
  end		


endmodule
