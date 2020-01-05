`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:41:17 12/06/2017 
// Design Name: 
// Module Name:    Datapath 
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
module Datapath(
    input clk,
    input reset,
    
	 //
	 input MD_stall,
	 
	 //
	 input       NPCOp,
    input [2:0] CMPOp,
	 input [1:0] EXTOp,
    input [3:0] ALUControl,
    
	 //
	 input [1:0] PCSrc_IF,
    input [1:0] RegDst_ID,
    input [1:0] ALUSrc_EX,
	 input       ALUout_sel_EX,	//ALU计算与移位计算选择
	 
	 input [1:0] EXout_sel_EX,
	 input [2:0] MDControl_EX,
	 input       Start,
	 
	 input [1:0] Sw_sel_MEM,
	 input       MEMout_sel_MEM,
	 input [1:0] Memtoreg_WB,
    input [2:0] Lw_sel_WB,
	 //
	 input RegWrite,
    input MemWrite,
	 input CP0Write,
    
    //
    input [2:0] FRSID,
    input [2:0] FRTID,
    input [1:0] FV1EX,
    input [1:0] FV2EX,
    input [1:0] FV2MEM,
    
	 //
	 input PC_En,
    input D_En,
    input E_Clr,
	 
	 //Special 条件清除
	 input If_flush,
    
	 //Special
	 input ERET_In,
	 
	 // Device Data_out
	 input [31:0] PrRD,
	 input [7:2]  HWInt,
	 
	 output [31:2] PrAddr,
	 output [3:0]  PrBE,
	 output [31:0] PrWD,
	 output        PrWE,
	 
	 //
	 output 			CMP_result,
	 output 			Busy,
	 output [31:0] Instr,
	 
	 output 			EXC_flush		// 中断/异常清空
    );

//*******************************************************************************************//
// 规定：wire类变量命名原则：首位为值名称,从“第二位” ->（传递到）“第三位”,末位为wire，各位之间用下划线连接   //
//                                    流水级：IF ID EX MEM WB                                 //
//                                 流水线reg：D  E  M  W                                      //
// 注1：转发输入信号命名：                                                                      //
//                   wire [31:0] DM_RD_W_wire;                                              //
//	   					wire [31:0] ALU_O_W_wire;                                              //
//	    					wire [31:0] ALU_O_M_wire;                                              //
//							wire [31:0] PC8_M_MEM_wire;                                             //
//******************************************************************************************//
	
	// ID -> IF
	wire [31:0] NPC_ID_IF_wire;
	
	// IF -> D
	wire [31:0] Instr_IF_D_wire;
	wire [31:0] PC4_IF_D_wire;
	wire [31:0] PC8_IF_D_wire;
	
	// D -> ID
	wire [31:0] Instr_D_ID_wire;
	wire [31:0] PC4_D_ID_wire;
	wire [31:0] PC8_D_ID_wire;
	
	// WB -> ID
	wire [4:0]  A3_WB_ID_wire;
	wire [31:0] WD_WB_ID_wire;
	
	// ID -> E
	wire [31:0] V1_ID_E_wire;
	wire [31:0] V2_ID_E_wire;
	wire [4:0]  A3_ID_E_wire;
	wire [31:0] EXT_ID_E_wire;
	wire [31:0] PC4_ID_E_wire;
	wire [31:0] PC8_ID_E_wire;
	
	// E -> EX
	wire [31:0] V1_E_EX_wire;
	wire [31:0] V2_E_EX_wire;
	wire [4:0]  A3_E_EX_wire;
	wire [31:0] EXT_E_EX_wire;
	wire [31:0] PC4_E_EX_wire;
	wire [31:0] PC8_E_EX_wire;
	
	// EX -> M
	wire [31:0] ALU_O_EX_M_wire;
	wire [31:0] V2_EX_M_wire;
	wire [31:0] PC4_EX_M_wire;
	wire [31:0] PC8_EX_M_wire;
	wire [4:0]  A3_EX_M_wire;
	
	// M -> MEM
	wire [31:0] V2_M_MEM_wire;
	wire [4:0]  A3_M_MEM_wire;
	wire [31:0] PC4_M_MEM_wire;
	wire [31:0] PC8_M_MEM_wire;

	// MEM -> W
	wire [1:0]  A_DR_MEM_W_wire;
	wire [31:0] ALU_O_MEM_W_wire;
	wire [31:0] DM_RD_MEM_W_wire;
	wire [31:0] PC4_MEM_W_wire;
	wire [31:0] PC8_MEM_W_wire;
	wire [4:0]  A3_MEM_W_wire;
	
	// W -> WB
	wire [1:0]  A_DR_W_WB_wire;
 	wire [4:0]  A3_W_WB_wire;
	wire [31:0] PC4_W_WB_wire;
	wire [31:0] PC8_W_WB_wire;
	wire [31:0] DM_RD_W_WB_wire;
	
	// 转发输入信号   ********//
	wire [31:0] DM_RD_W_wire;    // W->WB
	wire [31:0] ALU_O_W_wire;	  // W->WB
	wire [31:0] ALU_O_M_wire;    // M->MEM
 //wire [31:0] PC8_M_MEM_wire;
   // 转发输入信号   ********//
	
	// Special Mult_Div************//
	wire        Busy_EX_wire;
	wire        MDBusy_wire;	  // 乘除单元暂停信号
	//********************//
	
	assign MDBusy_wire = MD_stall & (Start | Busy_EX_wire);	// 当ID级为乘除相关指令且乘除单元忙碌时(start启动期或Busy工作期)置1
	assign Busy = Busy_EX_wire;
	assign Instr = Instr_D_ID_wire & ({32{!NOP_EXC}});
  
   always @(posedge clk)begin
    if(RegWrite & (!reset) &(A3_WB_ID_wire !== 32'h00000000))
	   begin
		  $display("%d@%h: $%d <= %h", $time, PC4_W_WB_wire - 4, A3_WB_ID_wire,WD_WB_ID_wire);
		  //$display("$%d <= %h", A3_WB_ID_wire,WD_WB_ID_wire);
		end
   end

/*********************** INT-EXC wire Define *************************************/

/***** EXC_Detect wire Define ***********/
  wire        D_flush;
  wire [31:0] PC_IF;					// IF级PC
  wire        Overflow_EX;			// EX级溢出标志位
  wire [31:0] DM_Addr_MEM;			// 访存地址
  wire        EXLClr_eret_ID;	   // eret在ID级时有效的EXLClr信号
  
  wire		  NOP_EXC;				// 变为nop,取指异常/非法指令时有效
  
  wire [31:0] PC_to_EPC;			// 写EPC寄存器--PC
  wire [4:0]  ExcCode_MEM;			// 异常编码
  wire 		  Delay_Set;			// 是否是延迟槽
  wire        MTMD_Set;				// 是否是mthi/mtlo指令
  wire [4:0]  CP0_RW_Addr;			// 访问CP0地址
  
  assign PC_IF = PC4_IF_D_wire - 32'h00000004;
  assign DM_Addr_MEM = ALU_O_M_wire;
  /****************************************/
  
  /***** CP0 wire Define ******************/
  wire [4:0]  Addr_RD;				// 读CP0寄存器地址
  wire [4:0]  Addr_WD;				// 写CP0寄存器地址
  wire [31:0] CP0_DIn;				// CP0写入数据
    
  wire        BDSet;					// Cause寄存器BD域置位 -- 是否延迟槽内指令异常
  wire		  BDClr;					// Cause寄存器BD域复位 
    
  wire        EXLSet;				// 异常级置位	   IntReq
  wire        EXLClr;				// 异常级复位    Eret
    
  wire        INT_EXC_Req;		   // 中断/异常请求
  wire [31:0] EPC;		         // EPC寄存器输出至NPC
  wire [31:0] CP0_DOut;				// CP0寄存器输出数据
  
  assign Addr_RD = CP0_RW_Addr;
  assign Addr_WD = CP0_RW_Addr;
     
  /****************************************/
  
  /***** INT_EXC_CTRL wire Define *********/
   wire        MTMD_RE;							//EX乘除单元        hi/lo复原信号
	wire        MD_EX_NE;						//连接至EX乘除单元   禁止信号
   wire        DM_Pr_NE;						//连接至DM/外设/CP0 禁止信号
	wire			PC_En_EXC;						//中断/异常发生      PC使能信号（有效）
   wire [1:0]  PC_EXC_sel;					   //连接至IF PC多选器
  
  /****************************************/
  
  /***** ERET-MTC0 wire Define *********/
  wire ERET_NE;
  
  assign ERET_NE = E_Clr;
  /****************************************/

/********************************************************************************/


	
	IF IF_DP(
			
			//input
			clk, 
			reset, 
			(PC_En & (!MDBusy_wire)) | PC_En_EXC, 
																// 阻塞条件
			
			NPC_ID_IF_wire,								// ID向IF输入的NPC值 
			V1_ID_E_wire, 									// ID级RF中读出的PC值 -- jr(jalr)指令
			EPC,
			
			PCSrc_IF,				
			PC_EXC_sel,
			
			//output
			PC4_IF_D_wire, 		// PC+4
			PC8_IF_D_wire, 		// PC+8
			Instr_IF_D_wire		// 指令
	  );
				
				
   ID ID_DP(
		
		//input
		clk, 
		reset, 
		RegWrite, 
		
		Instr_D_ID_wire,
		
		NPCOp, 
		CMPOp, 
		EXTOp, 
		
		FRSID, 						// 转发--ID级RS
		FRTID, 						// 转发--ID级RT
		
		RegDst_ID, 
		
		PC4_D_ID_wire, 
		PC8_D_ID_wire, 
		
		//*****转发输入信号******//
		DM_RD_W_wire,	
		ALU_O_W_wire,
		ALU_O_M_wire,
		PC8_M_MEM_wire,
		//*****转发输入信号*****//
		
		A3_WB_ID_wire, 			// WB级->RF (写寄存器地址)
		WD_WB_ID_wire,				// WB级->RF (写寄存器数据)
		
		//output
		NPC_ID_IF_wire, 
		CMP_result,
		
		V1_ID_E_wire, 				// RF_RD1
		V2_ID_E_wire, 				// RF_RD2
		A3_ID_E_wire,				// 要传输的写寄存器地址
		
		EXT_ID_E_wire, 			// 扩展单元输出值
		PC4_ID_E_wire, 
		PC8_ID_E_wire
				);
	
	EX EX_DP(
	   
		clk,
		reset,
		
		//input
		V1_E_EX_wire, 
		V2_E_EX_wire, 
		A3_E_EX_wire, 
		EXT_E_EX_wire, 
		PC4_E_EX_wire, 
		PC8_E_EX_wire,
		
		//*****转发输入信号******//
		DM_RD_W_wire, 
		ALU_O_W_wire, 
		ALU_O_M_wire,
		//*****转发输入信号*****//
		
		FV1EX, 						// 转发 -- EX级V1
		FV2EX,						// 转发 -- EX级V2
		
		ALUSrc_EX,
		ALUout_sel_EX,
		ALUControl,
		
		//乘除单元
		EXout_sel_EX,				// EX级ALU口输出选择信号
		MDControl_EX,				// 乘除单元功能控制信号
		Start,						// 乘除单元启动信号
		
		// Special--CP0
		MD_EX_NE,
		MTMD_RE,
		
		//output
		ALU_O_EX_M_wire, 
		V2_EX_M_wire, 
		PC4_EX_M_wire, 
		PC8_EX_M_wire, 
		A3_EX_M_wire,
		
		Busy_EX_wire,				// 乘除单元工作状态
		Overflow_EX					// 溢出标志			
				);
	
	MEM MEM_DP(
	   
		//input
      clk, 
		reset, 
		MemWrite,
		DM_Pr_NE,
		Sw_sel_MEM,
		MEMout_sel_MEM,
		
		V2_M_MEM_wire, 
		A3_M_MEM_wire,
		
		ALU_O_M_wire, 				// M -> MEM
		PC4_M_MEM_wire, 
		PC8_M_MEM_wire,
		
		FV2MEM,						// 转发 -- MEM级V2
		
		//*****转发输入信号******//
		DM_RD_W_wire, 
		ALU_O_W_wire,
		//*****转发输入信号******//
		
		//Device
		PrRD,
		
		//CP0
		CP0_DOut,
		
		//output
		DM_RD_MEM_W_wire, 
		ALU_O_MEM_W_wire, 
		PC4_MEM_W_wire, 
		PC8_MEM_W_wire, 
		A3_MEM_W_wire,
		A_DR_MEM_W_wire,
		
		CP0_DIn,
		
		PrAddr,
		PrBE,
		PrWD,
		PrWE
		
				);
	WB WB_DP(
	   
		//input
		A_DR_W_WB_wire,
		A3_W_WB_wire, 
		ALU_O_W_wire, 
		DM_RD_W_WB_wire, 
		PC4_W_WB_wire, 
		PC8_W_WB_wire,
		
		Memtoreg_WB,
		Lw_sel_WB,
		
		//output
		A3_WB_ID_wire,
		WD_WB_ID_wire,
		DM_RD_W_wire
		      );



   D_PipReg D(
	  
	   //input
	   clk, 
		reset,
		EXC_flush,												// 中断/异常清空信号
		D_flush,													// eret清空信号
		D_En & (!MDBusy_wire),								// D级流水线寄存器使能 -- 暂停
		
		Instr_IF_D_wire, 
		PC4_IF_D_wire, 
		PC8_IF_D_wire,
		
		//output
		Instr_D_ID_wire, 
		PC4_D_ID_wire, 
		PC8_D_ID_wire
		
		      );
	E_PipReg E(
	   
		//input
		clk, 
		reset, 
		EXC_flush,
		E_Clr | MDBusy_wire, 							// E级流水线寄存器复位 -- 清除
		If_flush,
		
		V1_ID_E_wire, 
		V2_ID_E_wire, 
		A3_ID_E_wire, 
		
		EXT_ID_E_wire, 
		PC4_ID_E_wire, 
		PC8_ID_E_wire, 
		
		//output
		V1_E_EX_wire, 
		V2_E_EX_wire, 
		A3_E_EX_wire, 
		EXT_E_EX_wire, 
		PC4_E_EX_wire, 
		PC8_E_EX_wire
		      
				);
				
	M_PipReg M(
	   
		//input
		clk, 
		reset, 
		EXC_flush,
		V2_EX_M_wire, 
		A3_EX_M_wire, 
		ALU_O_EX_M_wire, 
		PC4_EX_M_wire, 
		PC8_EX_M_wire, 
		
		//output
		V2_M_MEM_wire, 
		A3_M_MEM_wire, 
		ALU_O_M_wire, 
		PC4_M_MEM_wire, 
		PC8_M_MEM_wire
		
		      );

	W_PipReg W(
	   
		//input
		clk, 
		reset, 
		EXC_flush,
		A_DR_MEM_W_wire,
		A3_MEM_W_wire, 
		ALU_O_MEM_W_wire, 
		DM_RD_MEM_W_wire, 
		PC4_MEM_W_wire, 
		PC8_MEM_W_wire, 
		
		//output
		A_DR_W_WB_wire,
	   A3_W_WB_wire, 
		ALU_O_W_wire, 
		DM_RD_W_WB_wire, 
		PC4_W_WB_wire,
		PC8_W_WB_wire
		      
				);

/**************************************************************/
  
  
  // 异常检测器
  EXC_Detect   EXC_DT_DP(
             
				 clk,
				 reset,
				 EXC_flush,
				 D_flush,
				 
				 //寄存器--阻塞
				 D_En & (!MDBusy_wire),							// D级流水线寄存器使能 -- 暂停
				 E_Clr | MDBusy_wire, 							// E级流水线寄存器复位 -- 清除
				 
				 PC_IF,												// IF级PC      -- 是否取指溢出
				 Instr_D_ID_wire,									// 指令流水
				 NPC_ID_IF_wire,									// ID级NPC     -- 跳转分支指令是否异常
				 V1_ID_E_wire,										// ID级寄存器PC -- 跳转分支指令是否异常
				 Overflow_EX,										// EX级溢出标志	-- add/addi/sub是否溢出
				 
				 DM_Addr_MEM,										// MEM级访存地址	-- 访存是否异常
				 EXLClr_eret_ID,									// eret在ID级时有效的EXLClr信号
				 
				 //output
				 PC_to_EPC,											// 写EPC PC值
				 ExcCode_MEM,										// 异常编码
				 CP0_RW_Addr,										// 访问CP0地址
				 Delay_Set,											// 是否是延迟槽标志
				 MTMD_Set,											// 是否是mthi/mtlo指令
				 EXLClr,												// 异常级复位
				 NOP_EXC				                        // 变为nop,取指异常/非法指令时有效
				 );
				 
  //异常/中断控制器			 
  INT_EXC_CTRL INT_EXC_CT_DP(
             
				 INT_EXC_Req,										// 中断/异常请求有效信号
				 ERET_In & (!ERET_NE),							// 是否是ERET指令 且是否ERET暂停
				 Delay_Set,											// 是否是延迟槽指令
				 MTMD_Set,											// 是否是mthi/mtlo指令
				 
				 EXLSet,												// 异常级置位
				 EXLClr_eret_ID,								   // eret在ID级时有效的EXLClr信号
				 
				 BDSet,												// BD域置位
				 BDClr,												// BD域复位
				 
				 EXC_flush,											// 中断/异常 清除信号
				 
				 MD_EX_NE,											// 乘除单元禁止信号
				 MTMD_RE,											// 乘除单元hi/lo复原信号
				 DM_Pr_NE,											// DM/外设/CP0禁止信号
				 PC_En_EXC,
				 
				 D_flush,											// ERET有效 D级寄存器清除信号
				 
				 PC_EXC_sel											// PC 正常/异常选择信号
				 
				 );
  
  // CP0 协处理器  
  CP0          CP0_DP(
             
				 clk,
				 reset,
				 
				 Addr_RD,											// CP0读地址
				 Addr_WD,											// CP0写地址
				 CP0_DIn,											// CP0写数据
				 PC_to_EPC,											// 写EPC--PC值
				 BDSet,												// BD域置位
				 BDClr,												// BD域复位
				 ExcCode_MEM,										// 异常编码
				 HWInt,												// 外设中断请求
				 CP0Write & (!DM_Pr_NE),						// CP0写使能
				 EXLSet,												// 异常级置位
				 EXLClr_eret_ID,									// 异常级复位
				 
				 //output
				 INT_EXC_Req,										// 中断/异常请求有效信号
				 EPC,													// EPC值 -> PC
				 CP0_DOut											// CP0读出数据
             );

/**************************************************************/
  
endmodule
