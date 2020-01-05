`timescale 1ns / 1ps

`define INT     5'b00000
`define AdEL    5'b00100
`define AdES    5'b00101
`define RI      5'b01010
`define Ov 		 5'b01100
`define NEXC    5'b11111
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:50:25 12/27/2017 
// Design Name: 
// Module Name:    EXC_Detect 
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
module EXC_Detect(
    
	 input clk,
	 input reset,
	 
	 // 清除信号
	 input EXC_flush,
	 input D_flush,
	 
	 // 寄存器--阻塞信号
	 input D_en,
	 input E_flush,
	 
	 // IF
	 input [31:0]  PC_IF,
	 
	 // ID
	 input [31:0]  Instr_ID,
	 input [31:0]  NPC_ID_IF,
	 input [31:0]  PC_GRFOut_ID_IF,
	 
	 // EX
	 input         Overflow,
	 
	 // MEM
	 input  [31:0] DM_Addr,
	 // Special
	 input	      EXLClr_eret_ID,
	 
	 output [31:0] PC_EPC,
	 output [4:0]  ExcCode_MEM,
	 output [4:0]  CP0_RW_Addr,
	 output        Delay_Set,
	 output		   MTMD_Set,
	 output			EXLClr,
	 output        NOP_EXC						// 当取指异常和非法指令时该信号有效
	 );
  
  // 各级异常
  wire [4:0] PC_AdEL_IF;
  wire [4:0] PC_AdEL_ID;
  wire [4:0] RI_ID;
  wire [4:0] Ov_EX;
  wire [4:0] DM_AdEL_MEM;
  wire [4:0] DM_AdES_MEM;
  wire [4:0] INT_MEM;

  // Instr流水
  wire [31:0] Instr_E_M;
  wire [31:0] Instr_M_W;
  
  // PC流水
  wire [31:0] PC_D_E;
  wire [31:0] PC_E_M;
  wire [31:0] PC_M_W;
  wire [31:0] PC_W;
  
  // Delay
  wire        Delay_Set_ID_E;
  wire        Delay_Set_E_M;
  wire        Delay_Set_M_W;
  
  // EXLClr
  wire      EXLClr_E_M;
  wire      EXLClr_M_W;
  
  // ExcCode流水
  wire [4:0] ExcCode_IF_D;
  wire [4:0] ExcCode_D_ID;
  wire [4:0] ExcCode_ID_E;
  wire [4:0] ExcCode_E_EX;
  wire [4:0] ExcCode_EX_M;
  wire [4:0] ExcCode_M_MEM;
  wire [4:0] ExcCode_MEM_W;


/**** 输出信号控制 ***************************************/
  
  assign PC_EPC      = (Delay_Set_M_W) ? PC_W : 
							  (PC_M_W !== 32'h00000000) ? PC_M_W :			// 中断/异常 PC->EPC控制：若为延迟槽指令，将分支/跳转指令（W级PC）提供给EPC；否则提供M级PC
							  (PC_E_M !== 32'h00000000) ? PC_E_M :			// 阻塞时硬件产生nop PC 为32'h00000000， 应寻找后级流水线指令存入
							  (PC_D_E !== 32'h00000000) ? PC_D_E :
																	PC_M_W ;		
  assign ExcCode_MEM = ExcCode_MEM_W;
  assign Delay_Set   = Delay_Set_M_W;
  assign CP0_RW_Addr = Instr_M_W[15:11];
  assign MTMD_Set    = (Instr_M_W[31:26] === 6'b000000) & ((Instr_M_W[5:0] === 6'b010001)|(Instr_M_W[5:0] === 6'b010011)); // MEM级是否是mthi/mtlo指令

  assign NOP_EXC = (!(ExcCode_ID_E === 5'b11111)) ? 1'b1 : 1'b0;
/**** ExcCode选择 -- 行为建模 **************************************/
  
  assign ExcCode_IF_D  =    PC_AdEL_IF;
  assign ExcCode_ID_E  =   (ExcCode_D_ID !== `NEXC) ? ExcCode_D_ID :
									(RI_ID        === `RI  ) ? `RI	 :
																      ExcCode_D_ID;
  
  assign ExcCode_EX_M  =   (ExcCode_E_EX !== `NEXC) ? ExcCode_E_EX:
									(Ov_EX        === `Ov)   ? `Ov   :
																      ExcCode_E_EX;
																		
  assign ExcCode_MEM_W = (ExcCode_M_MEM !== `NEXC)  ? ExcCode_M_MEM :
								 (DM_AdEL_MEM   === `AdEL)  ? `AdEL :
								 (DM_AdES_MEM   === `AdES)  ? `AdES :
																      ExcCode_M_MEM;

/**************************************************************/

  EXC_DT_IF  EXC_DT_IF_Detect(
                       
							  PC_IF,
							  PC_AdEL_IF
							  
							  );
							  
  EXC_DT_ID  EXC_DT_ID_Detect(
                       
							  Instr_ID,
							  NPC_ID_IF,
							  PC_GRFOut_ID_IF,
							  
							  PC_AdEL_ID,
							  RI_ID
							  
							  );
  
  EXC_DT_EX  EXC_DT_EX_Detect(
                       
							  Instr_E_M,
							  Overflow,
							  
							  Ov_EX
							  
							  );
							  
  EXC_DT_MEM EXC_DT_MEM_Detect(
                       
							  Instr_M_W,
							  DM_Addr,
							  
							  DM_AdEL_MEM,
							  DM_AdES_MEM,
							  INT_MEM
							  
							  );
  
  
  
  Delay_DT   Delay_Detect(
                       
							  Instr_E_M,
							  Delay_Set_ID_E
							  
							  );
  
  EXC_Reg_D    EXC_D_Reg(
                       
							  clk,
							  reset,
							  D_en,
							  EXC_flush,
							  D_flush,
							  
							  PC_IF,
							  ExcCode_IF_D,
							  
							  PC_D_E,
							  ExcCode_D_ID
							  
                       
							  );
							  
  EXC_Reg_E_M  EXC_E_Reg(
                       
							  clk,
							  reset,
							  EXC_flush | E_flush,
							  
							  Delay_Set_ID_E,
							  PC_D_E,
							  ExcCode_ID_E,
							  Instr_ID & ({32{!NOP_EXC}}),
							  EXLClr_eret_ID,
							  
							  Delay_Set_E_M,
							  PC_E_M,
							  ExcCode_E_EX,
							  Instr_E_M,
							  EXLClr_E_M
							  
							  );
							  
  EXC_Reg_E_M  EXC_M_Reg(
                       
							  clk,
							  reset,
							  EXC_flush,
							  
							  Delay_Set_E_M,
							  PC_E_M,
							  ExcCode_EX_M,
							  Instr_E_M,
							  EXLClr_E_M,
							  
							  Delay_Set_M_W,
							  PC_M_W,
							  ExcCode_M_MEM,
							  Instr_M_W,
							  EXLClr_M_W
							  
							  );
  
  EXC_Reg_W    EXC_W_Reg(
                       
							  clk,
							  reset,
							  EXC_flush,
							  
							  EXLClr_M_W,
							  PC_M_W,
							  PC_W,
							  EXLClr
							  );
  
endmodule
