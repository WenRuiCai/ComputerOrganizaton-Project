`timescale 1ns / 1ps

/************ExcCode Match**************/
`define Exc_INT	(ExcCode === 5'b00000)				// �ж�
`define Exc_AdEL  (ExcCode === 5'b00100)				// ȡ����ȡָʱ��ַ����
`define Exc_AdES  (ExcCode === 5'b00101)				// ����ʱ��ַ����
`define Exc_RI    (ExcCode === 5'b01010)				// �Ƿ�ָ��
`define Exc_Ov    (ExcCode === 5'b01100)				// ����--���
/**************************************/

/*********** Addr Match *****************/
`define SR_RD    (Addr_RD === 32'h0000000c) 
`define CAUSE_RD (Addr_RD === 32'h0000000d) 
`define EPC_RD   (Addr_RD === 32'h0000000e) 
`define PRID_RD  (Addr_RD === 32'h0000000f) 

`define SR_WD    (Addr_WD === 32'h0000000c) 
`define CAUSE_WD (Addr_WD === 32'h0000000d) 
`define EPC_WD   (Addr_WD === 32'h0000000e) 
/****************************************/
 
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:48:52 12/26/2017 
// Design Name: 
// Module Name:    CP0 
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
module CP0(
	 
	 input clk,
    input reset,
	 
	 
    input [4:0]  Addr_RD,				// ��CP0�Ĵ�����ַ
    input [4:0]  Addr_WD,				// дCP0�Ĵ�����ַ
    input [31:0] DIn,					// CP0д������
    
	 input [31:0] PC,						// �ж�/�쳣ʱ��PC
	 input        BDSet,					// Cause�Ĵ���BD����λ -- �Ƿ��ӳٲ���ָ���쳣
	 output		  BDClr,					// Cause�Ĵ���BD��λ 
	 
    input [4:0]  ExcCode,				// �ж�/�쳣����
    input [5:0]  HWInt,					// �ⲿ�豸�ж�����
    
	 input        WE,						// CP0�Ĵ���дʹ��
    input        EXLSet,				// �쳣����λ	   IntReq
    input        EXLClr,				// �쳣����λ    Eret
    
	 output        INT_EXC_Req,		// �ж�/�쳣����
    output [31:0] EPC,					// EPC�Ĵ��������NPC
    output [31:0] DOut					// CP0�Ĵ����������
    );
	
/******** ExcCode ѡ��**********************************/
	 wire [4:0] ExcCode_CP0;
	 assign ExcCode_CP0 = (INT_Req) ? `Exc_INT : ExcCode;

/******** �ж�/�쳣�ź� ���/��� **************************/
    wire EXC_Req;							// �쳣����
	 wire INT_Req;							// �ж����� 

    wire       IE_SR;						// ȫ���ж�ʹ��
	 wire [5:0] IM_SR;						// �����ж�����λ
	 wire       EXL_SR;						// �쳣��
	 
	 assign EXC_Req = (`Exc_AdEL | `Exc_AdES | `Exc_RI | `Exc_Ov);
    assign INT_Req = |(HWInt & IM_SR) & IE_SR & !EXL_SR ;
	 
	 assign INT_EXC_Req = INT_Req | EXC_Req;
/*******************************************************/    
	
/********** ָ��дʹ���ź� **************************/
    
	 wire SR_WE;
	 wire Cause_WE;
	 wire EPC_WE;
	 
	 
	 assign SR_WE    = WE & `SR_WD;
	 assign Cause_WE = 0;//WE & `CAUSE_WD;
	 assign EPC_WE   = WE & `EPC_WD;
	 
/**************************************************/

/********** �ж�/�쳣��Ӧ--���дʹ�� *************************/
    
	 wire EPC_PCWE;
	 wire ECode_WE;
	 wire IP_WE;
	 
	 assign EPC_PCWE  = (INT_EXC_Req)            ? 1'b1 : 1'b0;
	 assign ECode_WE  = (INT_EXC_Req)            ? 1'b1 : 1'b0;
	 assign IP_WE     = 1'b1;													// ��clock������ ���ϵı����ⲿ6���ж�
	 
/***********************************************/

/********** CP0������� ****************************/
    
	 assign EPC = (`EPC_RD & EPC_WE)     ? {DIn[31:2],{2'b00}}:
														{EPC_DOut[31:2],{2'b00}};
	 assign DOut = (`SR_RD & SR_WE)       ? DIn:		// �ڲ�ת��
						(`EPC_RD & EPC_WE)     ? {DIn[31:2],{2'b00}}:
						
						(`SR_RD)     ? SR_DOut:
						(`CAUSE_RD)  ? Cause_DOut:
						(`EPC_RD)    ? {EPC_DOut[31:2],{2'b00}}:
						(`PRID_RD)   ? PRID_DOut:
											32'h00000000;

/********** ���ģ��ʵ���� *********************************/
	 
	 wire [31:0] SR_DOut;
	 wire [31:0] Cause_DOut;
	 wire [31:0] EPC_DOut;
	 wire [31:0] PRID_DOut;

	 SR      SR_CP0(

					  clk,
					  reset,
					  SR_WE,
					  
					  EXLSet,
					  EXLClr,
					  
					  DIn,
					  SR_DOut,
					  
					  IM_SR,
					  IE_SR,
					  EXL_SR
						  
						  );

	 CAUSE   Cause_CP0(
					  
					  clk,
					  reset,
					  
					  Cause_WE,
					  BDSet,
					  BDClr,
					  
					  ECode_WE,
					  ExcCode_CP0,
					  
					  IP_WE,
					  HWInt,
					  
					  DIn,
					  
					  Cause_DOut
		);

	 EPC     EPC_CP0(
					  
					  clk,
					  reset,
					  
					  EPC_PCWE,
					  PC,
					  
					  EPC_WE,
					  DIn,
					  
					  EPC_DOut
		);
    
	 PRID   PRID_CP0(
					  
					  clk,
					  reset,
					  
					  PRID_DOut
		);

/********************************************************/

  
endmodule
