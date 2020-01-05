`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:36:06 12/06/2017 
// Design Name: 
// Module Name:    mips 
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
module mips_CPU(
    input clk,
    input reset,
	 
	 input [31:0] PrRD,
	 input [5:0]  HWInt,
	 
	 output [31:2] PrAddr,
	 output [3:0]  PrBE,
	 output [31:0] PrWD,
	 output        PrWE
    );
   
// CL -> DP 传递 /////////////////////////////////////////////////////////////////
	
	//功能控制类
	 wire       NPCOp_wire;			// 下一PC组合逻辑   
    wire [2:0] CMPOp_wire;       // 分支指令比较条件 
	 wire [1:0] EXTOp_wire;			// 扩展单元        
    wire [3:0] ALUControl_wire;	// 算术单元
    wire [2:0] MDControl_wire;	// 乘除单元	 
    
	 //多路选择类
	 wire [1:0] PCSrc_IF_wire;		  // PC选择
    wire [1:0] RegDst_ID_wire;	  // 写寄存器地址
    wire [1:0] ALUSrc_EX_wire;	  // ALU（B）端口选择
	 wire       ALUout_sel_EX_wire; // ALU输出选择（移位）
	 wire [1:0] EXout_sel_EX_wire;  //（乘除--ALU）EX级输出数据来源选择
	 wire       MEMout_sel_MEM_wire;// MEM级输出选择
	 wire [1:0] Sw_sel_MEM_wire;    // Store指令类型选择
	 wire [2:0] Lw_sel_WB_wire;     // Load指令类型选择
	 wire [1:0] Memtoreg_WB_wire;	  // 写寄存器数据
	 
	 //写使能类
	 wire       RegWrite_wire;		// 寄存器写使能
    wire       MemWrite_wire;		// 存储器写使能
	 wire       CP0Write_wire;		// CP0写使能
    
    //转发控制类
    wire [2:0] FRSID_wire;			// ID级转发 -- RF.RS
    wire [2:0] FRTID_wire;       // ID级转发 -- RF.RT
    wire [1:0] FV1EX_wire;			// EX级转发 -- V1
    wire [1:0] FV2EX_wire;       // EX级转发 -- V2
    wire [1:0] FV2MEM_wire;		// MEM级转发 -- V2
    
	 //暂停控制类
	 wire       PC_En_wire;			// PC计数器使能              -- 禁止 
    wire       D_En_wire;			// IF/ID级(D)流水线寄存器使能 -- 暂停
    wire       E_Clr_wire;			// ID/EX级(E)流水线寄存器清除 -- 清除
    
	 //Special 条件清除
    wire       If_flush_wire;
	 
	 //Special 乘除
    wire       Start_wire;			// 乘除功能启动信号
	 wire       Busy_wire;			// 乘除单元状态信号
	 wire       MD_stall_wire;		// 乘除单元暂停条件1
	 
	 //Special EXC
	 wire       ERET_In_wire;
	 wire       EXC_flush_wire;
//////////////////////////////////////////////////////////////////////////////////

	 
// DP -> CL 传递 //////////////////////////////////////////////////////////////////
	 wire        CMP_result_wire;
    wire [31:0] Instr_wire;
//////////////////////////////////////////////////////////////////////////////////  

  
  Datapath DP(                   // 实例化
     clk,
	  reset,
	  
	  MD_stall_wire,					// 乘除单元阻塞条件
	  
     NPCOp_wire,
     CMPOp_wire,
	  EXTOp_wire,
     ALUControl_wire,
	  
	  PCSrc_IF_wire,
     RegDst_ID_wire,
     ALUSrc_EX_wire,
	  ALUout_sel_EX_wire,
	  
	  //乘除单元信号
	  EXout_sel_EX_wire,
	  MDControl_wire,
	  Start_EX_wire,
	  
	  Sw_sel_MEM_wire,
	  MEMout_sel_MEM_wire,
	  Memtoreg_WB_wire,
	  Lw_sel_WB_wire,
	  
	  RegWrite_wire,
     MemWrite_wire,
	  CP0Write_wire,
    
     FRSID_wire,
     FRTID_wire,
     FV1EX_wire,
     FV2EX_wire,
     FV2MEM_wire,
    
	  PC_En_wire,
     D_En_wire,
     E_Clr_wire,
	  If_flush_wire,
	  
	  ERET_In_wire,		// ERET ID级有效信号
	  
	  PrRD,
	  HWInt,
	  
	  PrAddr,
	  PrBE,
	  PrWD,
	  PrWE,
	  
    
	  CMP_result_wire,
	  Busy_wire,			// output 乘除单元状态信号
     Instr_wire,
	  
	  EXC_flush_wire		// 流水线清空信号
    );
	 

  Control_Layer CL(
     clk,
	  reset,
	  
	  EXC_flush_wire,
	  
	  Instr_wire,
	  CMP_result_wire,
	  Busy_wire,			// input 乘除单元状态信号
	  
	  RegWrite_wire,
     MemWrite_wire,
	  CP0Write_wire,
	  
	  EXTOp_wire,
     NPCOp_wire,
     CMPOp_wire,
	  
	  PCSrc_IF_wire,
     RegDst_ID_wire,
     ALUControl_wire,
	  ALUSrc_EX_wire,
	  ALUout_sel_EX_wire,
	  
	  //乘除单元信号
	  EXout_sel_EX_wire,
	  MDControl_wire,
	  Start_EX_wire,
	  
	  Sw_sel_MEM_wire,
	  MEMout_sel_MEM_wire,
	  Memtoreg_WB_wire,
	  Lw_sel_WB_wire,
	  
     FRSID_wire,
     FRTID_wire,
     FV1EX_wire,
     FV2EX_wire,
     FV2MEM_wire,
    
	  PC_En_wire,
     D_En_wire,
     E_Clr_wire,
	  If_flush_wire,
	  MD_stall_wire,				//乘除单元阻塞条件1
     ERET_In_wire
	  );

endmodule
