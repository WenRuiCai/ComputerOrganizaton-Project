`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:53 12/28/2017 
// Design Name: 
// Module Name:    MIPS 
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
module mips(
    input clk,
    input reset
    );
  
  
  
  // CPU -- Bridge
  wire [31:2] PrAddr_wire;
  wire [3:0]  PrBE_wire;
  wire [31:0] PrWD_wire;
  wire [31:0] PrRD_wire;
  wire        PrWE_wire;
  wire [7:2]  HWInt_wire;
  
  // Bridge -- Device
  wire [31:0] TC_RD0_wire;
  wire [31:0] TC_RD1_wire;
  
  wire [31:0] TC_WD0_wire;
  wire [31:0] TC_WD1_wire;
  wire [3:2]  TC_Addr0_wire;
  wire [3:2]  TC_Addr1_wire;
  
  wire        TC_IRQ0_wire;
  wire        TC_IRQ1_wire;
  wire 		  TC_WE0_wire;
  wire		  TC_WE1_wire;
  
  // instance
  
  mips_CPU   mips_CPU(
           
			  clk,
			  reset,
			  
			  PrRD_wire,
			  HWInt_wire,
			  
			  PrAddr_wire,
			  PrBE_wire,
			  PrWD_wire,
			  PrWE_wire
			  
			  );
  
  Bridge BRIDGE(
           
			  PrAddr_wire,
			  PrBE_wire,
			  PrWD_wire,
			  PrWE_wire,
			  
			  TC_RD0_wire,
			  TC_RD1_wire,
			  TC_IRQ0_wire,
			  TC_IRQ1_wire,
			  
			  TC_WE0_wire,
			  TC_WE1_wire,
			  TC_WD0_wire,
			  TC_WD1_wire,
			  
			  TC_Addr0_wire,
			  TC_Addr1_wire,
			  
			  PrRD_wire,
			  HWInt_wire
			  );
  
  
  Timer Timer0(
           
			  clk,
			  reset,
			  
			  TC_Addr0_wire,
			  TC_WE0_wire,
			  TC_WD0_wire,
			  
			  TC_RD0_wire,
			  TC_IRQ0_wire
			  
			  );
			  
  Timer Timer1(
           
			  clk,
			  reset,
			  
			  TC_Addr1_wire,
			  TC_WE1_wire,
			  TC_WD1_wire,
			  
			  TC_RD1_wire,
			  TC_IRQ1_wire
			  
			  );
			  
  
  
  

endmodule
