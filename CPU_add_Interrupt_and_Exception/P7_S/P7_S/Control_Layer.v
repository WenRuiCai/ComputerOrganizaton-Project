`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:51 12/07/2017 
// Design Name: 
// Module Name:    Control_Layer 
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
module Control_Layer(
    
	 input clk,
	 input reset,
	 
	 input EXC_flush,

	 //
	 input [31:0] Instr,
    input CMP_result,		// 比较单元结果 -- 分支指令需求
	 input Busy,				// 乘除单元状态信号 -- 阻塞
    
	 //
	 output RegWrite,
    output MemWrite,
	 output CP0Write,
    
	 //
	 output [1:0] EXTOp,
    output       NPCOp,
    output [2:0] CMPOp,
    
	 //
	 output [1:0] PCSrc_IF,
    output [1:0] RegDst_ID,
	 output [3:0] ALUControl_EX,
    output [1:0] ALUSrc_EX,
	 output       ALUout_sel_EX,
	 
	 output [1:0] EXout_sel,
	 output [2:0] MDControl,
	 output       Start,
	 
	 output [1:0] Sw_sel_MEM,
	 output       MEMout_sel_MEM,
    output [1:0] Memtoreg_WB,
	 output [2:0] Lw_sel_WB,
    
	 //
	 output [2:0] FRSID,
    output [2:0] FRTID,
    output [1:0] FV1EX,
    output [1:0] FV2EX,
    output [1:0] FV2MEM,
    
	 //
	 output PC_En,
    output D_En,
    output E_Clr,
	 output If_flush,    	 // special
	 output MD_stall,			 // 乘除指令暂停条件译码结果
	 output ERET_In			 // ERET指令有效信号
    );
	
	/////////// 功能控制信号 ////////////
	
	// ALUSrc_EX / ALUout_sel_wire
	wire [1:0]  ALUSrc_ID_E_wire;
	wire        ALUout_sel_ID_E_wire;
	
	// Memtoreg_WB
	wire [1:0]  Memtoreg_ID_E_wire;
	wire [1:0]  Memtoreg_E_M_wire;
	wire [1:0]  Memtoreg_M_W_wire;
	
	// Lw_sel / Sw_sel
	wire [2:0] Lw_sel_ID_E_wire;
	wire [2:0] Lw_sel_E_M_wire;
	wire [2:0] Lw_sel_M_W_wire;
	
	wire [1:0] Sw_sel_ID_E_wire;
	wire [1:0] Sw_sel_E_M_wire;
	
	// MEMout_sel
	wire       MEMout_sel_ID_E_wire;
	wire       MEMout_sel_E_M_wire;
	
	// EXTOp / ALUControl
	wire [1:0]  ExtOp_ID_E_wire;
	wire [3:0]  ALUControl_ID_E_wire;
	
	// RegWrite
	wire        RegWrite_ID_E_wire;
	wire 	      RegWrite_E_M_wire;
	wire  	   RegWrite_M_W_wire;
	
	// MemWrite
	wire 	      MemWrite_ID_E_wire;
	wire 	      MemWrite_E_M_wire;
	wire 	      MemWrite_M_W_wire;
	
	// CP0Write
	wire        CP0Write_ID_E_wire;
	wire			CP0Write_E_M_wire;
	wire			CP0Write_M_W_wire;
	
	//Mult_Div
   wire [1:0]  EXout_sel_ID_E_wire;		// EX级ALU出口选择信号
   wire [2:0]  MDControl_ID_E_wire;		// 乘除单元控制信号
	wire        Start_ID_E_wire;			// 乘除功能启动信号
	wire        MDBusy_E_wire;				// 乘除单元--暂停信号
	
	//Instr
	wire [31:0] Instr_E_M_wire;
	/////////////////////////////////
	
	
	
	/////////// 转发/暂停机制相关 ///////
	
	/********** 译码--Tuse **********/
	wire [2:0]  Tuse_rt_AT_SHD_wire;
	wire [1:0]  Tuse_rs_AT_SHD_wire;
	
	/********** 译码--Tnew(Res)*****/
	wire [1:0]  Res_cur_E_wire;
	wire [1:0] 	Res_E_M_wire;
	wire [1:0] 	Res_M_W_wire;
	wire [1:0] 	Res_W_SHD_wire;
	
	/********** 译码--A1 **********/
	wire [4:0]	A1_cur_E_wire;
	wire [4:0]	A1_E_M_wire;
	wire [4:0]	A1_M_W_wire;
	
	/********** 译码--A2 **********/
	wire [4:0]	A2_cur_E_wire;
	wire [4:0]	A2_E_M_wire;
	wire [4:0]	A2_M_W_wire;
	
	/********** 译码--A3 **********/
	wire [4:0]  A3_cur_E_wire;
	wire [4:0]	A3_E_M_wire;
	wire [4:0]	A3_M_W_wire;
	wire [4:0]	A3_W_SHD_wire;
	
	/********** Stall_Detect ->  Stall_Ctrl **********/
	wire        SHD_SC_wire;
   wire        ERET_MTC0_Stall_wire;
	////////////////////////////////////////////////////
	
	assign MDBusy_wire = MD_stall & (Start | Busy);
	
  
	MainController MCtrl(
	    
		 //input
		 Instr,
		 Instr_E_M_wire,
		 CMP_result, 
		 
		 //output
		 PCSrc_IF, 
		 RegDst_ID, 
		 ALUSrc_ID_E_wire, 
		 Memtoreg_ID_E_wire, 
		 RegWrite_ID_E_wire, 
		 MemWrite_ID_E_wire, 
		 CP0Write_ID_E_wire,
		 
		 CMPOp, 
		 NPCOp, 
		 EXTOp, 
		 
		 ALUControl_ID_E_wire,
		 ALUout_sel_ID_E_wire,
		 
		 Lw_sel_ID_E_wire,
		 Sw_sel_ID_E_wire,
		 MEMout_sel_ID_E_wire,
		 If_flush,
		 
		 EXout_sel_ID_E_wire,
		 MDControl_ID_E_wire,
		 Start_ID_E_wire,
		 MD_stall,
		 ERET_In,
		 
		 ERET_MTC0_Stall_wire
		 );
	
	AT_Decoder     ATDec(
	    
		 //input
		 Instr,
		 
		 //output
		 Tuse_rt_AT_SHD_wire, 
		 Tuse_rs_AT_SHD_wire, 
		 
		 Res_cur_E_wire,
		 
		 A1_cur_E_wire, 
		 A2_cur_E_wire, 
		 A3_cur_E_wire
		 
		 );
		 
	Stall_Detect   SHD(
	    
		 //input
		 A1_cur_E_wire, 
		 A2_cur_E_wire,
		 
		 A3_E_M_wire, 
		 A3_M_W_wire, 
		 A3_W_SHD_wire, 
		 
		 Tuse_rt_AT_SHD_wire, 
		 Tuse_rs_AT_SHD_wire, 
		 
		 Res_E_M_wire, 
		 Res_M_W_wire, 
		 Res_W_SHD_wire, 
		 
		 //output
		 SHD_SC_wire
		 
		 );
		 
	Stall_Control  SCtrl(
	    
		 //input
		 SHD_SC_wire | ERET_MTC0_Stall_wire, 
		 
		 //output
		 PC_En, 
		 D_En, 
		 E_Clr
		 
		 );
		 
	Foward_Control FCtrl(
	    
		 //input
		 A1_cur_E_wire, 
		 A1_E_M_wire, 
		 A1_M_W_wire, 
		 
		 A2_cur_E_wire, 
		 A2_E_M_wire, 
		 A2_M_W_wire, 
		 
		 A3_E_M_wire, 
		 A3_M_W_wire, 
		 A3_W_SHD_wire, 
		 
		 Res_E_M_wire, 
		 Res_M_W_wire, 
		 Res_W_SHD_wire, 
		 
		 //output
		 FRSID, 
		 FRTID, 
		 FV1EX, 
		 FV2EX, 
		 FV2MEM
		 
		 );

	E_ctrlreg E_reg_control(
	    
		 //input
		 clk, 
		 reset, 
		 EXC_flush,
		 E_Clr | MDBusy_wire,
       If_flush,		 
		 
		 Memtoreg_ID_E_wire, 
		 RegWrite_ID_E_wire, 
		 MemWrite_ID_E_wire, 
		 CP0Write_ID_E_wire,
		 ALUControl_ID_E_wire, 
		 ALUSrc_ID_E_wire, 
		 ALUout_sel_ID_E_wire,
		 Lw_sel_ID_E_wire,
		 Sw_sel_ID_E_wire,
		 MEMout_sel_ID_E_wire,
		 
		 EXout_sel_ID_E_wire,
		 MDControl_ID_E_wire,
		 Start_ID_E_wire,
		 
		 Instr,
		 //output
		 Instr_E_M_wire,
		 // ->M
		 Memtoreg_E_M_wire, 
		 RegWrite_E_M_wire, 
		 MemWrite_E_M_wire,
		 CP0Write_E_M_wire,
       
		 Lw_sel_E_M_wire,
       Sw_sel_E_M_wire,		 
		 MEMout_sel_E_M_wire,
		 
		 // out currently
		 ALUControl_EX, 
		 ALUSrc_EX,
		 ALUout_sel_EX,
		 
		 EXout_sel,
	    MDControl,
	    Start
		 );
		 
	M_ctrlreg M_reg_control(
	    
		 //input
		 clk, 
		 reset, 
		 EXC_flush,
		 
		 Memtoreg_E_M_wire, 
		 RegWrite_E_M_wire, 
		 MemWrite_E_M_wire, 
		 CP0Write_E_M_wire,
		 
		 Lw_sel_E_M_wire,
		 Sw_sel_E_M_wire,
		 MEMout_sel_E_M_wire,
		 
		 //output
		 
		 // ->W
		 Memtoreg_M_W_wire, 
		 RegWrite_M_W_wire, 
		 
		 // out currently
		 MemWrite,
		 CP0Write,
		 
		 Lw_sel_M_W_wire,
		 Sw_sel_MEM,
		 MEMout_sel_MEM
		 
		 );
		 
	W_ctrlreg W_reg_control(
	    
		 //input
		 clk, 
		 reset, 
		 EXC_flush,
		 
		 Lw_sel_M_W_wire,
		 Memtoreg_M_W_wire, 
		 RegWrite_M_W_wire, 
		 
		 //output
		 
		 // out currently
		 Memtoreg_WB,
		 Lw_sel_WB,
		 RegWrite
		 
		 );


	Res_E_Reg Res_reg_E(
	    
		 //input
		 clk, 
		 reset, 
		 EXC_flush,
		 
		 E_Clr | MDBusy_wire,
       If_flush,		 
		 
		 Res_cur_E_wire, 
		 
		 A1_cur_E_wire,
		 A2_cur_E_wire,
		 A3_cur_E_wire, 
		 
		 //output
		 Res_E_M_wire,
		 
		 A1_E_M_wire, 
		 A2_E_M_wire, 
		 A3_E_M_wire
		 
		 );
	Res_M_Reg Res_reg_M(
	    
		 //input
		 clk, 
		 reset,
		 EXC_flush,
		 
		 Res_E_M_wire,

		 A1_E_M_wire,
		 A2_E_M_wire, 
		 A3_E_M_wire, 
		 
		 //output
		 Res_M_W_wire,
		 
		 A1_M_W_wire, 
		 A2_M_W_wire, 
		 A3_M_W_wire
		 
		 );
		 
	Res_W_Reg Res_reg_W(
	    
		 //input
		 clk, 
		 reset, 
		 EXC_flush,
		 
		 Res_M_W_wire, 
		 A1_M_W_wire, 
		 A2_M_W_wire, 
		 A3_M_W_wire, 
		 
		 //output
		 Res_W_SHD_wire, 
		 A3_W_SHD_wire
		 
		 );

endmodule
