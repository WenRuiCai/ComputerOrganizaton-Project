`timescale 1ns / 1ps

`define lw_sel 3'b000
`define lh_sel 3'b001
`define lhu_sel 3'b010
`define lb_sel 3'b011
`define lbu_sel 3'b100

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:29:31 12/16/2017 
// Design Name: 
// Module Name:    DataExtend 
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
module DataExtend(
    input [1:0] A,
    input [31:0] Din,
    input [2:0] Lw_sel,
    output [31:0] Dout
    );
  /*load type wire/component*/
  wire [15:0] lh_mux_ext_wire;
  wire [31:0] lh_ext_outmux_wire;
  wire [31:0] lhu_ext_outmux_wire;
  wire [7:0]  lb_mux_ext_wire;
  wire [31:0] lb_ext_outmux_wire;
  wire [31:0] lbu_ext_outmux_wire;
  
  assign lh_ext_outmux_wire = {{16{lh_mux_ext_wire[15]}}, lh_mux_ext_wire};
  assign lhu_ext_outmux_wire = {{16{1'b0}}, lh_mux_ext_wire};
  assign lb_ext_outmux_wire = {{24{lb_mux_ext_wire[7]}}, lb_mux_ext_wire};
  assign lbu_ext_outmux_wire = {{24{1'b0}}, lb_mux_ext_wire};
  
  MUX2to1 #(16) Mux_lh_in_DM(
                
					 Din[15:0], 
					 Din[31:16], 
					 
					 A[1], 
					 
					 lh_mux_ext_wire
					 );
  
  
  
  MUX4to1 #(8) Mux_lb_in_DM(
                
					 Din[7:0], 
					 Din[15:8], 
					 Din[23:16], 
					 Din[31:24], 
					 
					 A[1:0], 
					 
					 lb_mux_ext_wire
					 );
  
  
  
  MUX5to1 #(32) Mux_loadout_in_DM(
                Din, 
					 lh_ext_outmux_wire, 
					 lhu_ext_outmux_wire, 
					 lb_ext_outmux_wire, 
					 lbu_ext_outmux_wire, 
					 
					 Lw_sel, 
					 
					 Dout
					 
					 );
  /********************************/

endmodule
