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
	 input       ALUout_sel_EX,	//ALU��������λ����ѡ��
	 
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
	 
	 //Special �������
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
	 
	 output 			EXC_flush		// �ж�/�쳣���
    );

//*******************************************************************************************//
// �涨��wire���������ԭ����λΪֵ����,�ӡ��ڶ�λ�� ->�����ݵ���������λ��,ĩλΪwire����λ֮�����»�������   //
//                                    ��ˮ����IF ID EX MEM WB                                 //
//                                 ��ˮ��reg��D  E  M  W                                      //
// ע1��ת�������ź�������                                                                      //
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
	
	// ת�������ź�   ********//
	wire [31:0] DM_RD_W_wire;    // W->WB
	wire [31:0] ALU_O_W_wire;	  // W->WB
	wire [31:0] ALU_O_M_wire;    // M->MEM
 //wire [31:0] PC8_M_MEM_wire;
   // ת�������ź�   ********//
	
	// Special Mult_Div************//
	wire        Busy_EX_wire;
	wire        MDBusy_wire;	  // �˳���Ԫ��ͣ�ź�
	//********************//
	
	assign MDBusy_wire = MD_stall & (Start | Busy_EX_wire);	// ��ID��Ϊ�˳����ָ���ҳ˳���Ԫæµʱ(start�����ڻ�Busy������)��1
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
  wire [31:0] PC_IF;					// IF��PC
  wire        Overflow_EX;			// EX�������־λ
  wire [31:0] DM_Addr_MEM;			// �ô��ַ
  wire        EXLClr_eret_ID;	   // eret��ID��ʱ��Ч��EXLClr�ź�
  
  wire		  NOP_EXC;				// ��Ϊnop,ȡָ�쳣/�Ƿ�ָ��ʱ��Ч
  
  wire [31:0] PC_to_EPC;			// дEPC�Ĵ���--PC
  wire [4:0]  ExcCode_MEM;			// �쳣����
  wire 		  Delay_Set;			// �Ƿ����ӳٲ�
  wire        MTMD_Set;				// �Ƿ���mthi/mtloָ��
  wire [4:0]  CP0_RW_Addr;			// ����CP0��ַ
  
  assign PC_IF = PC4_IF_D_wire - 32'h00000004;
  assign DM_Addr_MEM = ALU_O_M_wire;
  /****************************************/
  
  /***** CP0 wire Define ******************/
  wire [4:0]  Addr_RD;				// ��CP0�Ĵ�����ַ
  wire [4:0]  Addr_WD;				// дCP0�Ĵ�����ַ
  wire [31:0] CP0_DIn;				// CP0д������
    
  wire        BDSet;					// Cause�Ĵ���BD����λ -- �Ƿ��ӳٲ���ָ���쳣
  wire		  BDClr;					// Cause�Ĵ���BD��λ 
    
  wire        EXLSet;				// �쳣����λ	   IntReq
  wire        EXLClr;				// �쳣����λ    Eret
    
  wire        INT_EXC_Req;		   // �ж�/�쳣����
  wire [31:0] EPC;		         // EPC�Ĵ��������NPC
  wire [31:0] CP0_DOut;				// CP0�Ĵ����������
  
  assign Addr_RD = CP0_RW_Addr;
  assign Addr_WD = CP0_RW_Addr;
     
  /****************************************/
  
  /***** INT_EXC_CTRL wire Define *********/
   wire        MTMD_RE;							//EX�˳���Ԫ        hi/lo��ԭ�ź�
	wire        MD_EX_NE;						//������EX�˳���Ԫ   ��ֹ�ź�
   wire        DM_Pr_NE;						//������DM/����/CP0 ��ֹ�ź�
	wire			PC_En_EXC;						//�ж�/�쳣����      PCʹ���źţ���Ч��
   wire [1:0]  PC_EXC_sel;					   //������IF PC��ѡ��
  
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
																// ��������
			
			NPC_ID_IF_wire,								// ID��IF�����NPCֵ 
			V1_ID_E_wire, 									// ID��RF�ж�����PCֵ -- jr(jalr)ָ��
			EPC,
			
			PCSrc_IF,				
			PC_EXC_sel,
			
			//output
			PC4_IF_D_wire, 		// PC+4
			PC8_IF_D_wire, 		// PC+8
			Instr_IF_D_wire		// ָ��
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
		
		FRSID, 						// ת��--ID��RS
		FRTID, 						// ת��--ID��RT
		
		RegDst_ID, 
		
		PC4_D_ID_wire, 
		PC8_D_ID_wire, 
		
		//*****ת�������ź�******//
		DM_RD_W_wire,	
		ALU_O_W_wire,
		ALU_O_M_wire,
		PC8_M_MEM_wire,
		//*****ת�������ź�*****//
		
		A3_WB_ID_wire, 			// WB��->RF (д�Ĵ�����ַ)
		WD_WB_ID_wire,				// WB��->RF (д�Ĵ�������)
		
		//output
		NPC_ID_IF_wire, 
		CMP_result,
		
		V1_ID_E_wire, 				// RF_RD1
		V2_ID_E_wire, 				// RF_RD2
		A3_ID_E_wire,				// Ҫ�����д�Ĵ�����ַ
		
		EXT_ID_E_wire, 			// ��չ��Ԫ���ֵ
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
		
		//*****ת�������ź�******//
		DM_RD_W_wire, 
		ALU_O_W_wire, 
		ALU_O_M_wire,
		//*****ת�������ź�*****//
		
		FV1EX, 						// ת�� -- EX��V1
		FV2EX,						// ת�� -- EX��V2
		
		ALUSrc_EX,
		ALUout_sel_EX,
		ALUControl,
		
		//�˳���Ԫ
		EXout_sel_EX,				// EX��ALU�����ѡ���ź�
		MDControl_EX,				// �˳���Ԫ���ܿ����ź�
		Start,						// �˳���Ԫ�����ź�
		
		// Special--CP0
		MD_EX_NE,
		MTMD_RE,
		
		//output
		ALU_O_EX_M_wire, 
		V2_EX_M_wire, 
		PC4_EX_M_wire, 
		PC8_EX_M_wire, 
		A3_EX_M_wire,
		
		Busy_EX_wire,				// �˳���Ԫ����״̬
		Overflow_EX					// �����־			
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
		
		FV2MEM,						// ת�� -- MEM��V2
		
		//*****ת�������ź�******//
		DM_RD_W_wire, 
		ALU_O_W_wire,
		//*****ת�������ź�******//
		
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
		EXC_flush,												// �ж�/�쳣����ź�
		D_flush,													// eret����ź�
		D_En & (!MDBusy_wire),								// D����ˮ�߼Ĵ���ʹ�� -- ��ͣ
		
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
		E_Clr | MDBusy_wire, 							// E����ˮ�߼Ĵ�����λ -- ���
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
  
  
  // �쳣�����
  EXC_Detect   EXC_DT_DP(
             
				 clk,
				 reset,
				 EXC_flush,
				 D_flush,
				 
				 //�Ĵ���--����
				 D_En & (!MDBusy_wire),							// D����ˮ�߼Ĵ���ʹ�� -- ��ͣ
				 E_Clr | MDBusy_wire, 							// E����ˮ�߼Ĵ�����λ -- ���
				 
				 PC_IF,												// IF��PC      -- �Ƿ�ȡָ���
				 Instr_D_ID_wire,									// ָ����ˮ
				 NPC_ID_IF_wire,									// ID��NPC     -- ��ת��ָ֧���Ƿ��쳣
				 V1_ID_E_wire,										// ID���Ĵ���PC -- ��ת��ָ֧���Ƿ��쳣
				 Overflow_EX,										// EX�������־	-- add/addi/sub�Ƿ����
				 
				 DM_Addr_MEM,										// MEM���ô��ַ	-- �ô��Ƿ��쳣
				 EXLClr_eret_ID,									// eret��ID��ʱ��Ч��EXLClr�ź�
				 
				 //output
				 PC_to_EPC,											// дEPC PCֵ
				 ExcCode_MEM,										// �쳣����
				 CP0_RW_Addr,										// ����CP0��ַ
				 Delay_Set,											// �Ƿ����ӳٲ۱�־
				 MTMD_Set,											// �Ƿ���mthi/mtloָ��
				 EXLClr,												// �쳣����λ
				 NOP_EXC				                        // ��Ϊnop,ȡָ�쳣/�Ƿ�ָ��ʱ��Ч
				 );
				 
  //�쳣/�жϿ�����			 
  INT_EXC_CTRL INT_EXC_CT_DP(
             
				 INT_EXC_Req,										// �ж�/�쳣������Ч�ź�
				 ERET_In & (!ERET_NE),							// �Ƿ���ERETָ�� ���Ƿ�ERET��ͣ
				 Delay_Set,											// �Ƿ����ӳٲ�ָ��
				 MTMD_Set,											// �Ƿ���mthi/mtloָ��
				 
				 EXLSet,												// �쳣����λ
				 EXLClr_eret_ID,								   // eret��ID��ʱ��Ч��EXLClr�ź�
				 
				 BDSet,												// BD����λ
				 BDClr,												// BD��λ
				 
				 EXC_flush,											// �ж�/�쳣 ����ź�
				 
				 MD_EX_NE,											// �˳���Ԫ��ֹ�ź�
				 MTMD_RE,											// �˳���Ԫhi/lo��ԭ�ź�
				 DM_Pr_NE,											// DM/����/CP0��ֹ�ź�
				 PC_En_EXC,
				 
				 D_flush,											// ERET��Ч D���Ĵ�������ź�
				 
				 PC_EXC_sel											// PC ����/�쳣ѡ���ź�
				 
				 );
  
  // CP0 Э������  
  CP0          CP0_DP(
             
				 clk,
				 reset,
				 
				 Addr_RD,											// CP0����ַ
				 Addr_WD,											// CP0д��ַ
				 CP0_DIn,											// CP0д����
				 PC_to_EPC,											// дEPC--PCֵ
				 BDSet,												// BD����λ
				 BDClr,												// BD��λ
				 ExcCode_MEM,										// �쳣����
				 HWInt,												// �����ж�����
				 CP0Write & (!DM_Pr_NE),						// CP0дʹ��
				 EXLSet,												// �쳣����λ
				 EXLClr_eret_ID,									// �쳣����λ
				 
				 //output
				 INT_EXC_Req,										// �ж�/�쳣������Ч�ź�
				 EPC,													// EPCֵ -> PC
				 CP0_DOut											// CP0��������
             );

/**************************************************************/
  
endmodule
