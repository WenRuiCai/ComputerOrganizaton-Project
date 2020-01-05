`timescale 1ns / 1ps

/********* WD Sel ***********/
`define Ctrl_Addr   2'b00
`define Preset_Addr 2'b01
`define Count_Addr  2'b10

`define Debug_Data  32'h20171225

/********* FSM state ****************/
`define IDLE   3'b000
`define LOAD   3'b001
`define CNTING 3'b010
`define INT    3'b011
`define RELOAD 3'b100

/********* Count Mode **************/
`define Mode0  (CTRL[2:1] === 2'b00)
`define Mode1  (CTRL[2:1] === 2'b01)
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:53:01 12/26/2017 
// Design Name: 
// Module Name:    Timer 
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
module Timer(
    
	 input clk,		
    input reset,
	 
	 // Bridge -> Timer
    input [3:2]  ADDR_I,	// 写地址
    input 		  WE_I,		// 写使能
    input [31:0] DAT_I,		// 相关写入数据
	 
	 
    output [31:0] DAT_O,	// 相关读出数据
    output        IRQ		// 中断请求
    );
  
  // device 外部可见
  reg [31:0] CTRL;			// 控制寄存器
  reg [31:0] PRESET; 		// 初值寄存器
  reg [31:0] COUNT;			// 计数寄存器
  
  // reg    外部不可见
  reg [2:0] state;			// 有限状态机-状态寄存器
  reg       load_WE;			// PRESET->COUNT 使能
  reg       count_En;		// fsm产生的计数器使能
  reg       INT_Valid;		// 中断产生逻辑--状态机控制
  
  /***********  中断产生逻辑 **********/
  assign IRQ = CTRL[3] & INT_Valid;
  
  
  /************ 读写控制 *************/
  assign DAT_O = (ADDR_I === `Ctrl_Addr)   ? {{28{1'b0}}, {CTRL[3:0]}}:
					  (ADDR_I === `Preset_Addr) ? PRESET:
					  (ADDR_I === `Count_Addr)  ? COUNT:
														  `Debug_Data;
  
  initial begin
    CTRL      <= 0;
	 PRESET    <= 0;
	 COUNT     <= 0;
	 state     <= 0;
	 load_WE   <= 0;
	 count_En  <= 0;
	 INT_Valid <= 0;
  end
  
  always @(posedge clk) begin
    if(reset)
	   begin
		  CTRL      <= 0;
		  PRESET    <= 0;
		  COUNT     <= 0;
		  
		  state     <= 0;
		  load_WE   <= 0;
		  count_En  <= 0;
		  INT_Valid <= 0;
		end
	 else
      if(WE_I)
		  begin
		    case(ADDR_I)
		      `Ctrl_Addr:   CTRL   <= DAT_I;
			   `Preset_Addr: PRESET <= DAT_I;
		    endcase
		  end
  end
  
  /************* 模式控制 -- 状态机***************/
  always @(posedge clk)begin
		if(!WE_I) begin
		 case(state)
			`IDLE:
			  begin
				 if(CTRL[0])
					begin
					  state <= `LOAD;
					  load_WE <= 1'b1;
					  INT_Valid <= 1'b0;
					end
				 else
					begin
					  state <= `IDLE;
					end
			  end
			`LOAD:
			  begin
				 state     <= `CNTING;
				 load_WE   <= 1'b0;
				 count_En  <= 1'b1;
				 INT_Valid <= 1'b0;
			  end
			`CNTING:
			  begin
				 if(COUNT <= 32'h00000001)
					begin
					  if(`Mode0)
						  begin
							 state    <= `INT;
							 //CTRL[0]  <= 1'b0;
							 count_En <= 1'b0;
						  end
					  else if(`Mode1)
					     begin
						    state    <= `RELOAD;
							 //CTRL[0]  <= 1'b0;
							 count_En <= 1'b0;
						  end
					end
				 else
					begin
					  state <= `CNTING;
					end
			  end
			`INT:
			    begin
				   state <= `IDLE;
					CTRL[0]  <= 1'b0;
					INT_Valid <= 1'b1;
			    end
			`RELOAD:
				 begin
				   state <= `LOAD;
					load_WE <= 1'b1;
					INT_Valid <= 1'b1;
				 end
	   endcase
	 end
  end  
	

  /*************** COUNT控制 *********************/
  always @(posedge clk) begin
    if(!WE_I) begin
		 if(load_WE)
			begin
			  COUNT <= PRESET;
			end
		 else
			begin
			  if(CTRL[0] & count_En)
				 begin
				   if(COUNT > 0)
					  COUNT <= COUNT - 1;
				 end
			end
	 end
  end
  
  /*************** INT_Valid控制 *********************/
  always @(CTRL) begin
    if(!CTRL[3])
		INT_Valid <= 1'b0;
  end
  
  /*************** count_En控制 **********************/
  always @(CTRL) begin
    if(!CTRL[0])
		count_En <= 1'b0;
		state    <= 3'b000;
  end
  
  
endmodule
