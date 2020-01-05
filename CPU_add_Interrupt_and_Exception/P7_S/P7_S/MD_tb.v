`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:24:33 12/17/2017
// Design Name:   MD_EX
// Module Name:   F:/ISE project/P6/MD_tb.v
// Project Name:  P6
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MD_EX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MD_tb;

	// Inputs
	reg clk;
	reg reset;
	reg Start;
	reg [31:0] D1;
	reg [31:0] D2;
	reg [2:0] MDControl;

	// Outputs
	wire Busy;

	wire [31:0] HI;
	wire [31:0] LO;

	// Instantiate the Unit Under Test (UUT)
	MD_EX uut (
		.clk(clk), 
		.reset(reset), 
		.D1(D1), 
		.D2(D2), 
		.MDControl(MDControl), 
		.Busy(Busy), 
		.Start(Start),

		.HI(HI), 
		.LO(LO)
	);

	initial begin
		// Initialize Inputs
		clk = 1;
		reset = 0;
		Start = 1;
		D1 = 0;
		D2 = 0;
		MDControl = 0;
      
		/************Mult***********/
		#10
		Start = 0;
		D1 = 32'h0fff1111;		// 正正 符号乘
		D2 = 32'h0fffff11;
		MDControl = 3'b001;
		#10
		Start = 0;
		#10
		D1 = 32'h00000001;		// 正正 符号乘
		D2 = 32'h00000002;
		MDControl = 3'b001;
		#10
		D1 = 32'hff87ab22;		// 负*正 符号乘
		D2 = 32'h0ffffff1;
		MDControl = 3'b001;
		#10
		D1 = 32'h0ffffff1;		// 正*负 符号乘
		D2 = 32'hff87ab22;
		MDControl = 3'b001;
		#10
		D1 = 32'hffffffff;		// 负*负 符号乘
		D2 = 32'hffffffff;
		MDControl = 3'b001;
		#10
		D1 = 32'hfadc36d3;		// 负*负 符号乘
		D2 = 32'hf0000001;
		MDControl = 3'b001;
		#10
		D1 = 32'hf0000001;		// 负*负 符号乘
		D2 = 32'hfadc36d3;
		MDControl = 3'b001;
		
		/************Multu***********/
		#10
		D1 = 32'h0fff1111;		// 正正 无符号乘
		D2 = 32'h0fffff11;
		MDControl = 3'b010;
		#10
		D1 = 32'h00000001;		// 正正 无符号乘
		D2 = 32'h00000002;
		MDControl = 3'b010;
		#10
		D1 = 32'hff87ab22;		// 负*正 无符号乘
		D2 = 32'h0ffffff1;
		MDControl = 3'b010;
		#10
		D1 = 32'h0ffffff1;		// 正*负 无符号乘
		D2 = 32'hff87ab22;
		MDControl = 3'b010;
		#10
		D1 = 32'hffffffff;		// 负*负 无符号乘
		D2 = 32'hffffffff;
		MDControl = 3'b010;
		#10
		D1 = 32'hfadc36d3;		// 负*负 无符号乘
		D2 = 32'hf0000001;
		MDControl = 3'b010;
		#10
		D1 = 32'hf0000001;		// 负*负 无符号乘
		D2 = 32'hfadc36d3;
		MDControl = 3'b010;
		
		/************Div***********/
		#10
		D1 = 32'h11110000;
		D2 = 32'h00000010;
		MDControl = 3'b011;			// 正 / 正 整除  （大/小）
		#10
		D1 = 32'h00000010;
		D2 = 32'h11110000;
		MDControl = 3'b011;			// 正 / 正 非整除 （小/大）
		#10
		D1 = 32'h0f2918bf;
		D2 = 32'h0018cf7a;
		MDControl = 3'b011;			// 正 / 正  （大/小）
		#10
		D1 = 32'h0f2918bf;
		D2 = 32'h0f18cf7a;
		MDControl = 3'b011;			// 正 / 正  （大/小）
		#10
		D1 = 32'h002918bf;
		D2 = 32'h0f18cf7a;
		MDControl = 3'b011;			// 正 / 正  （小/大）
		#10
		D1 = 32'hff2934b0;
		D2 = 32'h0fc80f7a;
		MDControl = 3'b011;			// 负 / 正 
		#10
		D1 = 32'hff2934b0;
		D2 = 32'h0000000a;
		MDControl = 3'b011;			// 负 / 正 
		#10
		D1 = 32'hffffffff;
		D2 = 32'h00000001;
		MDControl = 3'b011;			// 负 / 正
		#10
		D1 = 32'h0fc80f7a;
		D2 = 32'hff2934b0;
		MDControl = 3'b011;			// 正 / 负 
		#10
		D1 = 32'h0000000a;
		D2 = 32'hff2934b0;
		MDControl = 3'b011;			// 正 / 负 
		#10
		D1 = 32'h0a0a0a0a;
		D2 = 32'hffffffff;
		MDControl = 3'b011;			// 正 / 负
		#10
		D1 = 32'hffffffff;
		D2 = 32'hffffffff;
		MDControl = 3'b011;			// 负 / 负
		#10
		D1 = 32'hfffffff0;
		D2 = 32'hfff0ffff;
		MDControl = 3'b011;			// 负 / 负
		#10
		D1 = 32'hf0000011;
		D2 = 32'hf0000001;
		MDControl = 3'b011;			// 负 / 负
		#10
		D1 = 32'hffffff00;
		D2 = 32'hfffffffc;
		MDControl = 3'b011;			// 负 / 负
		
		/************Divu***********/
		#10
		D1 = 32'h11110000;
		D2 = 32'h00000010;
		MDControl = 3'b100;			// 正 / 正 整除  （大/小）
		#10
		D1 = 32'h00000010;
		D2 = 32'h11110000;
		MDControl = 3'b100;			// 正 / 正 非整除 （小/大）
		#10
		D1 = 32'h0f2918bf;
		D2 = 32'h0018cf7a;
		MDControl = 3'b100;			// 正 / 正  （大/小）
		#10
		D1 = 32'h0f2918bf;
		D2 = 32'h0f18cf7a;
		MDControl = 3'b100;			// 正 / 正  （大/小）
		#10
		D1 = 32'h002918bf;
		D2 = 32'h0f18cf7a;
		MDControl = 3'b100;			// 正 / 正  （小/大）
		#10
		D1 = 32'hff2934b0;
		D2 = 32'h0fc80f7a;
		MDControl = 3'b100;			// 负 / 正 
		#10
		D1 = 32'hff2934b0;
		D2 = 32'h0000000a;
		MDControl = 3'b100;			// 负 / 正 
		#10
		D1 = 32'hffffffff;
		D2 = 32'h00000001;
		MDControl = 3'b100;			// 负 / 正
		#10
		D1 = 32'h0fc80f7a;
		D2 = 32'hff2934b0;
		MDControl = 3'b100;			// 正 / 负 
		#10
		D1 = 32'h0000000a;
		D2 = 32'hff2934b0;
		MDControl = 3'b100;			// 正 / 负 
		#10
		D1 = 32'h0a0a0a0a;
		D2 = 32'hffffffff;
		MDControl = 3'b100;			// 正 / 负
		#10
		D1 = 32'hffffffff;
		D2 = 32'hffffffff;
		MDControl = 3'b100;			// 负 / 负
		#10
		D1 = 32'hfffffff0;
		D2 = 32'hfff0ffff;
		MDControl = 3'b100;			// 负 / 负
		#10
		D1 = 32'hf0000011;
		D2 = 32'hf0000001;
		MDControl = 3'b100;			// 负 / 负
		#10
		D1 = 32'hffffff00;
		D2 = 32'hfffffffc;
		MDControl = 3'b100;			// 负 / 负
		
		#10
		D1 = 32'h12345678;
		D2 = 32'h98765432;
		MDControl = 3'b101;
		#10
		D1 = 32'h98765432;
		D2 = 32'h12345678;
		MDControl = 3'b101;
		#10
		D1 = 32'h12345678;
		D2 = 32'h98765432;
		MDControl = 3'b110;
		#10
		D1 = 32'h19876543;
		D2 = 32'h22345678;
		MDControl = 3'b110;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
  
  always #5 clk = ~clk;
endmodule

