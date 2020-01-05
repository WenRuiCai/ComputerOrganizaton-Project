`timescale 1ns / 1ps

`define sw    4'b1111
`define sh_lo 4'b0011
`define sh_hi 4'b1100
`define sb_1  4'b0001
`define sb_2  4'b0010
`define sb_3  4'b0100
`define sb_4  4'b1000
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:00:00 12/06/2017 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input clk,
    input reset,
    input WE,

    input [3:0] BE,	 
    input [13:0] A,
    input [31:0] WD,
	 
	 input [31:0] PC4_M,
	 
    output [31:0] RD
    );
  
  
  always @(posedge clk)begin
	 if(WE & (!reset))
		begin
		  case(BE)
		    `sw:     
			   $display("%d@%h: *%h <= %h", $time, PC4_M - 4, {{18'h0}, A[13:2], {2'b00}}, WD);
		      //$display("*%h <= %h", {{18'h0}, A}, WD); 
			 `sh_lo:
			     $display("%d@%h: *%h <= %h", $time, PC4_M - 4, {{18'h0}, A[13:2], {2'b00}},{DataMemory[A[13:2]][31:16], {WD[15:0]}});
		        //$display("*%h <= %h", {{18'h0}, A}, /*{DataMemory[A[13:2]][31:16], */WD[15:0]/*}*/);
			 `sh_hi:
			     $display("%d@%h: *%h <= %h", $time, PC4_M - 4, {{18'h0}, A[13:2], {2'b00}},{{WD[15:0]}, DataMemory[A[13:2]][15:0]});
		        //$display("*%h <= %h", {{18'h0}, A}, /*{*/WD[15:0]/*, DataMemory[A[13:2]][15:0]}*/);
			 `sb_1:
			     $display("%d@%h: *%h <= %h", $time, PC4_M - 4, {{18'h0}, A[13:2], {2'b00}},{DataMemory[A[13:2]][31:8], {WD[7:0]}});
		        //$display("*%h <= %h", {{18'h0}, A}, /*{DataMemory[A[13:2]][31:8],*/ WD[7:0]/*}*/);
			 `sb_2:
			     $display("%d@%h: *%h <= %h", $time, PC4_M - 4, {{18'h0}, A[13:2], {2'b00}},{DataMemory[A[13:2]][31:16], {WD[7:0]}, DataMemory[A[13:2]][7:0]});
		        //$display("*%h <= %h", {{18'h0}, A}, /*{DataMemory[A[13:2]][31:16],*/ WD[7:0]/*, DataMemory[A[13:2]][7:0]}*/);
			 `sb_3:
			     $display("%d@%h: *%h <= %h", $time, PC4_M - 4, {{18'h0}, A[13:2], {2'b00}},{DataMemory[A[13:2]][31:24], {WD[7:0]}, DataMemory[A[13:2]][15:0]});
		        //$display("*%h <= %h", {{18'h0}, A}, /*{DataMemory[A[13:2]][31:24],*/ WD[7:0]/*, DataMemory[A[13:2]][15:0]}*/);
			 `sb_4:
			     $display("%d@%h: *%h <= %h", $time, PC4_M - 4, {{18'h0}, A[13:2], {2'b00}},{{WD[7:0]}, DataMemory[A[13:2]][23:0]});
		        //$display("*%h <= %h", {{18'h0}, A}, /*{*/WD[7:0]/*, DataMemory[A[13:2]][23:0]}*/);
		  endcase
		end
	end
  
  
  
  
  
  
  reg [31:0] DataMemory[4095:0];
  
  integer i;
  initial begin
	 for(i = 0;i < 4096; i = i + 1)
		    DataMemory[i] <= 0;
  end
  
  
  
  assign RD = DataMemory[A[13:2]];
  
  
  always @(posedge clk) begin
    if(reset)
	   begin
		  for(i = 0; i < 4096; i = i + 1)
		    DataMemory[i] <= 0;
		end
	 else
	   if(WE === 1'b1)
		  begin
		    case(BE)																/*Store type*/
			   `sw:     DataMemory[A[13:2]]        <= WD;
				`sh_lo: 	DataMemory[A[13:2]][15:0]  <= WD[15:0];
				`sh_hi:  DataMemory[A[13:2]][31:16] <= WD[15:0];
				`sb_1:   DataMemory[A[13:2]][7:0]   <= WD[7:0];
				`sb_2:	DataMemory[A[13:2]][15:8]  <= WD[7:0];
				`sb_3:	DataMemory[A[13:2]][23:16] <= WD[7:0];
				`sb_4:	DataMemory[A[13:2]][31:24] <= WD[7:0];
			 endcase
		  end
  end


endmodule
