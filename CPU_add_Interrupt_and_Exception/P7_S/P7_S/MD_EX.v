`timescale 1ns / 1ps

/********** MDControl **************/
`define NE     3'b000
`define mult   3'b001
`define multu  3'b010
`define div    3'b011
`define divu   3'b100
`define mthi   3'b101
`define mtlo   3'b110
/**********************************/

/********** Start *****************/
`define Valid 1'b1
`define Invalid 1'b0
/**********************************/

/********** Cycle *****************/
`define Finished_Mult 4'b0011
`define Finished_Div  4'b0111
/**********************************/

`define MD_DIV_WE ((counter === `Finished_Mult) & ((MD_Ctrl === `mult)|(MD_Ctrl === `multu))) | ((counter === `Finished_Div) & ((MD_Ctrl === `div)|(MD_Ctrl === `divu)))

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:48:13 12/16/2017 
// Design Name: 
// Module Name:    MD_EX 
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
module MD_EX(
    input clk,
	 input reset,
	 
	 input [31:0] D1,
    input [31:0] D2,
    input [2:0]  MDControl_EX,
	 input        Start_EX,
	 input        MD_EX_NE,
	 input        MTMD_RE,		// hi��lo�Ĵ�����ԭ�ź�
	 
	 output Busy,
    output [31:0] HI,
    output [31:0] LO
    );
	 
  reg       Busy_reg;			// Busy�ź�
  
  reg [3:0] counter;				// ������
  
  reg [2:0] MD_Ctrl;				// �˳������ź�
  
  reg [31:0] hi;					// �Ĵ���hi
  reg [31:0] lo;					// �Ĵ���lo
  
  /*wire [63:0] D1_EXT;			// D1��չλ��
  wire [63:0] D2_EXT;			// D2��չλ��*/

  reg  [31:0] D1_reg;			// D1�Ĵ��� -- ģ���ӳ�
  reg  [31:0] D2_reg;			// D2�Ĵ��� -- ģ���ӳ�
  
  reg  [31:0] hi_old;			// �������һ��hi�Ĵ���ֵ
  reg  [31:0] lo_old;			// �������һ��lo�Ĵ���ֵ
  
  /******* MD�����ź� *******************/
  wire [2:0] MDControl;
  wire       Start;
  
  assign MDControl = MDControl_EX & {{!MD_EX_NE}, {!MD_EX_NE}, {!MD_EX_NE}};
  assign Start = Start_EX & (!MD_EX_NE);
  /*******************************/
  
  
  initial begin
    counter <= 0;

	 Busy_reg <= 0;

    MD_Ctrl <= 0;
	 
	 hi <= 0;
	 lo <= 0;
	 
    D1_reg <= 0;
	 D2_reg <= 0;
	 
	 hi_old <= 0;
	 lo_old <= 0;
  end
  
  
  /*assign D1_EXT = ((MDControl === `mult)  || (MDControl === `div))  ? {{32{D1[31]}}, D1}:		// ��չѡ��
						((MDControl === `multu) || (MDControl === `divu)) ? {{32{1'b0}}, D1}:
																						    {{32{1'b0}}, D1};
  assign D2_EXT = ((MDControl === `mult)  || (MDControl === `div))  ? {{32{D2[31]}}, D2}:
						((MDControl === `multu) || (MDControl === `divu)) ? {{32{1'b0}}, D2}:
						                                                    {{32{1'b0}}, D2};*/
  assign Busy = Busy_reg;
  assign HI = hi;
  assign LO = lo;
  
  always@(posedge clk)begin				// hi/lo��ԭ����
    if(MTMD_RE & (!(`MD_DIV_WE))) 
	   begin
	     hi <= hi_old;
		  lo <= lo_old;
	   end
  end
  
  always@(posedge clk)begin				// ����״̬����
    if(reset)
	   begin
        counter <= 0;

	     Busy_reg <= 0;
	    
        MD_Ctrl <= 0;
	 
	     hi <= 0;
	     lo <= 0;
		  
		  hi_old <= 0;
		  lo_old <= 0;
	 
        D1_reg <= 0;
	     D2_reg <= 0;
		end
	 else if(MDControl === `mthi)
	   begin
		  hi <= D1;
		  hi_old <= hi;
		end
	 else if(MDControl === `mtlo)
	   begin
		  lo <= D1;
		  lo_old <= lo;
		end
	 else if(Start === `Valid)
		begin
		 Busy_reg <= `Valid;
		 MD_Ctrl <= MDControl;
		 D1_reg <= D1;
		 D2_reg <= D2;
		end
  end  
  
  
  always@(posedge clk)begin																// ������� -- ���ݼĴ�����ŵĹ��ܿ����ź�ѡ��ͬ�ļ��㷽ʽ
    if((MD_Ctrl === `mult) || (MD_Ctrl === `multu))
	   begin
		 if(Busy_reg === `Valid)
			begin
			  counter <= counter + 1;														// ģ���ӳ� -- ͨ���������������ڼ���
			end
		 if(counter === `Finished_Mult)
			begin
			  if(MD_Ctrl === `mult)
			    begin
					{hi, lo} <= $signed(D1_reg) * $signed(D2_reg);
					hi_old <= hi;
					lo_old <= lo;
				 end
			  else if(MD_Ctrl === `multu)
			    begin
					{hi, lo} <= $unsigned(D1_reg) * $unsigned(D2_reg);
					hi_old <= hi;
					lo_old <= lo;
				 end
			  counter <= 3'b000;
			  Busy_reg <= `Invalid;
			  MD_Ctrl <= `NE;
			end
	   end
	 else if((MD_Ctrl === `div) || (MD_Ctrl === `divu))
	   begin
		  if(Busy_reg === `Valid)
			begin
			  counter <= counter + 1;
			end
		 if(counter === `Finished_Div)
			begin
			  if(MD_Ctrl === `div)begin
					hi <= $signed(D1_reg) % $signed(D2_reg);
					lo <= $signed(D1_reg) / $signed(D2_reg);
					hi_old <= hi;
				   lo_old <= lo;
			  end
			  else if(MD_Ctrl === `divu)begin
					hi <= $unsigned(D1_reg) % $unsigned(D2_reg);
					lo <= $unsigned(D1_reg) / $unsigned(D2_reg);
			      hi_old <= hi;
				   lo_old <= lo;
			  end
			  counter <= 3'b000;
			  Busy_reg <= `Invalid;
			  MD_Ctrl <= `NE;
			end
		end
  end

endmodule
