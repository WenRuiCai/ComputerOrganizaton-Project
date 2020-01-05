`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:47:15 11/16/2018 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
	 input [31:0] nPC,
    input [2:0] ALUSrc,
    input [31:0] RD2,
	 input [15:0] Immediate1,
    input [25:0] Immediate2,
	 output [31:0] SrcB,
	 output [31:0] b_instr,
	 output [31:0] j_instr
    );
	 
	reg [15:0] zero1=0;
	reg [15:0] one=16'h0xFFFF;
	reg [1:0] zero2=0;
	reg [31:0] sign_ext=0;
	reg [31:0] b_ext=0;
	reg [31:0] j_ext=0;
	reg [31:0] store=0;
	
	assign SrcB=store;
	assign b_instr=b_ext;
	assign j_instr=j_ext;
	
	always @(*)begin
			//$display("%h",nPC);
			if(Immediate1[15]==1)
					sign_ext={one,Immediate1};
			else
					sign_ext={zero1,Immediate1};
			//$display("%h %h",j_ext,b_ext);		
			j_ext={nPC[31:28],Immediate2,zero2};   //jal指令将要跳转的地址
			b_ext=nPC+(sign_ext<<2);              //beq指令将要跳转的地址，注意这里是按照Mips标准的字节运算
			//$display("%d",ALUSrc);
			case(ALUSrc)
			0:
				store=RD2;
			1:
				store=sign_ext;
			2:
				store={Immediate1,zero1};
			3:
				store={zero1,Immediate1};
			4:
				store=nPC;
			endcase
			//$display("%h",store);
	end
endmodule
