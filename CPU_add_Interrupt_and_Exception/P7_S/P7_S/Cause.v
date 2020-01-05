`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:15:41 12/26/2017 
// Design Name: 
// Module Name:    CAUSE 
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
module CAUSE(
    
	 input clk,
    input reset,
    
	 input Cause_WE,				// ԭ��Ĵ���дʹ��
    
	 input BDSet,					// BD��λ ʹ���ź�
	 input BDClr,					// BD��λ ����ź�
	 
    input 		 ECode_WE,	   // ExcCode��λ ʹ���ź�
	 input [4:0] ExcCode,		// ExcCodeд��
	 
	 input         IP_WE,		// IP дʹ���ź�
	 input [5:0] IP,			// �豸�ж����
	 
	 input [31:0]  DIn,
    
	 output [31:0] DOut
    );
  
  reg [6:2]   ExcCode_Cause;		// �ж�/�쳣 ԭ�����
  reg [15:10] IP_Cause;				// 6λ�ж�״̬
  reg         BD;						// ��֧�ӳ� �Ƿ�Ϊ�ӳٲ���ָ���쳣
  
  //��ʼ��
  initial begin
    ExcCode_Cause = 5'b11111;
	 IP_Cause      = 0;
	 BD            = 0;
  end
  
  
  // ��Cause�Ĵ���
  assign DOut = {BD, {15'b0}, IP_Cause, {3'b0}, ExcCode_Cause, {2'b0}};
  
  // дCause�Ĵ���
  always @(posedge clk) begin
    if(reset)
	   begin
		  ExcCode_Cause <= 5'b11111;
		  IP_Cause      <= 0;
		  BD            <= 0;
		end
	 else
	   if(Cause_WE)
		  begin
		  {BD, IP_Cause, ExcCode_Cause} <= {{DIn[31]}, {DIn[15:10]}, {DIn[6:2]}};
		  end
  end

  // Cause ExcCode д�����
  always @(posedge clk) begin
    if(ECode_WE)
	   begin
		  ExcCode_Cause <= ExcCode;
		end
  end
  
  // Cause BD����֧�ӳ�λ����λ����
  always @(posedge clk) begin
    if(BDSet)
	   begin
		  BD <= 1'b1;
		end
	 else if(BDClr)
	   begin
		  BD <= 1'b0;
		end
  end

  // Cause IP д�����
  always @(posedge clk) begin
    if(IP_WE)
	   begin
		  IP_Cause <= IP;
		end
  end
endmodule
