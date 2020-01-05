`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:15:51 12/09/2017
// Design Name:   Control_Layer
// Module Name:   F:/ISE project/Verilog_Pipeline_CPU/CL_tb.v
// Project Name:  Verilog_Pipeline_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Control_Layer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CL_tb;

	// Inputs
	reg clk;
	reg reset;
	reg [31:0] Instr;
	reg CMP_result;

	// Outputs
	wire RegWrite;
	wire MemWrite;
	wire [1:0] EXTOp;
	wire NPCOp;
	wire CMPOp;
	wire [1:0] PCSrc_IF;
	wire [1:0] RegDst_ID;
	wire [1:0] ALUControl_EX;
	wire ALUSrc_EX;
	wire [1:0] Memtoreg_WB;
	wire [2:0] FRSID;
	wire [2:0] FRTID;
	wire [1:0] FV1EX;
	wire [1:0] FV2EX;
	wire [1:0] FV2MEM;
	wire PC_En;
	wire D_En;
	wire E_Clr;

	// Instantiate the Unit Under Test (UUT)
	Control_Layer uut (
		.clk(clk), 
		.reset(reset), 
		.Instr(Instr), 
		.CMP_result(CMP_result), 
		.RegWrite(RegWrite), 
		.MemWrite(MemWrite), 
		.EXTOp(EXTOp), 
		.NPCOp(NPCOp), 
		.CMPOp(CMPOp), 
		.PCSrc_IF(PCSrc_IF), 
		.RegDst_ID(RegDst_ID), 
		.ALUControl_EX(ALUControl_EX), 
		.ALUSrc_EX(ALUSrc_EX), 
		.Memtoreg_WB(Memtoreg_WB), 
		.FRSID(FRSID), 
		.FRTID(FRTID), 
		.FV1EX(FV1EX), 
		.FV2EX(FV2EX), 
		.FV2MEM(FV2MEM), 
		.PC_En(PC_En), 
		.D_En(D_En), 
		.E_Clr(E_Clr)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		Instr = 0;
		CMP_result = 0;
      #5
		Instr = 32'h341c0000;
		#10
		Instr = 32'h341d0000;
		#10
		Instr = 32'h34011010;
		#10
		Instr = 32'h3c028723;
		#10
		Instr = 32'h34037856;
		#10
		Instr = 32'h3c0485ff;
		#10
		Instr = 32'h34050001;
		#10
		Instr = 32'h3c06ffff;
		#10
		Instr = 32'h34e7ffff;
		#10
		Instr = 32'h00220821;
		#10
		Instr = 32'h00234821;
		#10
		Instr = 32'h00224023;
		#10
		Instr = 32'h00e00023;













		// Wait 100 ns for global reset to finish
		#100;







  
		// Add stimulus here

	end
   
	always #5 clk = ~clk;
endmodule

