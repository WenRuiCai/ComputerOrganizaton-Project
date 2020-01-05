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
   
// CL -> DP ���� /////////////////////////////////////////////////////////////////
	
	//���ܿ�����
	 wire       NPCOp_wire;			// ��һPC����߼�   
    wire [2:0] CMPOp_wire;       // ��ָ֧��Ƚ����� 
	 wire [1:0] EXTOp_wire;			// ��չ��Ԫ        
    wire [3:0] ALUControl_wire;	// ������Ԫ
    wire [2:0] MDControl_wire;	// �˳���Ԫ	 
    
	 //��·ѡ����
	 wire [1:0] PCSrc_IF_wire;		  // PCѡ��
    wire [1:0] RegDst_ID_wire;	  // д�Ĵ�����ַ
    wire [1:0] ALUSrc_EX_wire;	  // ALU��B���˿�ѡ��
	 wire       ALUout_sel_EX_wire; // ALU���ѡ����λ��
	 wire [1:0] EXout_sel_EX_wire;  //���˳�--ALU��EX�����������Դѡ��
	 wire       MEMout_sel_MEM_wire;// MEM�����ѡ��
	 wire [1:0] Sw_sel_MEM_wire;    // Storeָ������ѡ��
	 wire [2:0] Lw_sel_WB_wire;     // Loadָ������ѡ��
	 wire [1:0] Memtoreg_WB_wire;	  // д�Ĵ�������
	 
	 //дʹ����
	 wire       RegWrite_wire;		// �Ĵ���дʹ��
    wire       MemWrite_wire;		// �洢��дʹ��
	 wire       CP0Write_wire;		// CP0дʹ��
    
    //ת��������
    wire [2:0] FRSID_wire;			// ID��ת�� -- RF.RS
    wire [2:0] FRTID_wire;       // ID��ת�� -- RF.RT
    wire [1:0] FV1EX_wire;			// EX��ת�� -- V1
    wire [1:0] FV2EX_wire;       // EX��ת�� -- V2
    wire [1:0] FV2MEM_wire;		// MEM��ת�� -- V2
    
	 //��ͣ������
	 wire       PC_En_wire;			// PC������ʹ��              -- ��ֹ 
    wire       D_En_wire;			// IF/ID��(D)��ˮ�߼Ĵ���ʹ�� -- ��ͣ
    wire       E_Clr_wire;			// ID/EX��(E)��ˮ�߼Ĵ������ -- ���
    
	 //Special �������
    wire       If_flush_wire;
	 
	 //Special �˳�
    wire       Start_wire;			// �˳����������ź�
	 wire       Busy_wire;			// �˳���Ԫ״̬�ź�
	 wire       MD_stall_wire;		// �˳���Ԫ��ͣ����1
	 
	 //Special EXC
	 wire       ERET_In_wire;
	 wire       EXC_flush_wire;
//////////////////////////////////////////////////////////////////////////////////

	 
// DP -> CL ���� //////////////////////////////////////////////////////////////////
	 wire        CMP_result_wire;
    wire [31:0] Instr_wire;
//////////////////////////////////////////////////////////////////////////////////  

  
  Datapath DP(                   // ʵ����
     clk,
	  reset,
	  
	  MD_stall_wire,					// �˳���Ԫ��������
	  
     NPCOp_wire,
     CMPOp_wire,
	  EXTOp_wire,
     ALUControl_wire,
	  
	  PCSrc_IF_wire,
     RegDst_ID_wire,
     ALUSrc_EX_wire,
	  ALUout_sel_EX_wire,
	  
	  //�˳���Ԫ�ź�
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
	  
	  ERET_In_wire,		// ERET ID����Ч�ź�
	  
	  PrRD,
	  HWInt,
	  
	  PrAddr,
	  PrBE,
	  PrWD,
	  PrWE,
	  
    
	  CMP_result_wire,
	  Busy_wire,			// output �˳���Ԫ״̬�ź�
     Instr_wire,
	  
	  EXC_flush_wire		// ��ˮ������ź�
    );
	 

  Control_Layer CL(
     clk,
	  reset,
	  
	  EXC_flush_wire,
	  
	  Instr_wire,
	  CMP_result_wire,
	  Busy_wire,			// input �˳���Ԫ״̬�ź�
	  
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
	  
	  //�˳���Ԫ�ź�
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
	  MD_stall_wire,				//�˳���Ԫ��������1
     ERET_In_wire
	  );

endmodule
