`timescale 1ns / 1ps

`define EXC_HD_PC 2'b01
`define EPC_PC    2'b10
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:42:20 12/27/2017 
// Design Name: 
// Module Name:    INT_EXC_CTRL 
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
module INT_EXC_CTRL(
    
	 input INT_EXC_Req,						// �ж�/�쳣����
    input ERET_In,							// ָ��eret��Ч�ź�
    input Delay_Set,							// �Ƿ����ӳٲ�ָ��
	 input MTMD_Set,							// �Ƿ���mthi/mtloָ��
    
	 output EXLSet,							// �쳣����λ
    output EXLClr,							// �쳣����λ
    
	 output BDSet,								// Cause�Ĵ���BD����λ
    output BDClr,								// Cause�Ĵ���BD��λ
    
	 output PipReg_flush,					// ��ˮ�߼Ĵ�������ź�
    output MD_EX_NE,							// �˳���Ԫ��ֹ�ź�
	 output MTMD_RE,							// �˳���Ԫhi/lo��ԭ�ź�
	 output DM_Pr_NE,							// DM���ݴ洢�� / �ⲿ�豸 дʹ�ܽ�ֹ�ź�
	 output PC_En_EXC,						// PCʹ���ź�
    
	 output D_reg_flush,						// eret���ָ������ź�
    
	 output [1:0] PC_EXC_HD_sel			// PCѡ���ź�
    );
  
  /******* �ж�/�쳣��Ч ************/
  assign EXLSet       = INT_EXC_Req;
  assign PipReg_flush = INT_EXC_Req;
  assign MD_EX_NE     = INT_EXC_Req;
  assign DM_Pr_NE		 = INT_EXC_Req;
  assign PC_En_EXC    = INT_EXC_Req;
  assign MTMD_RE      = INT_EXC_Req & MTMD_Set;
  assign BDSet        = INT_EXC_Req & Delay_Set;
  /******** ERET������Ч **************/
  assign EXLClr      = ERET_In;
  assign BDClr       = ERET_In;
  assign D_reg_flush = ERET_In;

  /********* PCѡ���ź� ****************/
  assign PC_EXC_HD_sel = (INT_EXC_Req === 1'b1) ? `EXC_HD_PC:
							    (ERET_In === 1'b1)     ? `EPC_PC:
													            2'b00;

endmodule
