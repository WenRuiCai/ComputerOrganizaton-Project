`timescale 1ns / 1ps
module IFU(
    input [31:0] j_addr,
    input [31:0] b_addr,
	 input [31:0] jr_addr,
    input [3:0] choose_way,
    input clk,
    input reset,
	 input Equal,
    output [31:0] nPC,
	 output [31:0] PC,
    output [5:0] Function,
    output [4:0] instr_zero,
    output [4:0] rd,
    output [4:0] rt,
    output [4:0] rs_or_base,
    output [5:0] special,
    output [15:0] Immediate1,
    output [25:0] Immediate2
    );

	 reg [31:0] instruction;
	 reg [31:0] choose_data;
	 reg [31:0] now_PC;
	 reg [31:0] rom[1023:0];
	 integer i;

	 assign PC=now_PC;
	 assign nPC=now_PC+4;
	 assign special={instruction[31:26]};
	 assign rs_or_base={instruction[25:21]};
	 assign rt={instruction[20:16]};
	 assign rd={instruction[15:11]};
	 assign instr_zero={instruction[10:6]};
	 assign Function={instruction[5:0]};
	 assign Immediate1={instruction[15:0]};
	 assign Immediate2={instruction[25:0]};

	 initial begin
			for(i=0;i<1024;i=i+1)
			begin
				rom[i]=0;
			end
			now_PC=32'h0x00003000;
			instruction=0;
			$readmemh("code.txt",rom,0,1023);
	 end

	 always @(*) begin
			/*$display("%d",choose_way);
			$display("%h",b_addr);
			$display("%h",j_addr);
			$display("%h",jr_addr);*/
			if(choose_way==0)
				choose_data=now_PC+4;
			else if(choose_way==1)
			begin
				if(Equal==1)
					choose_data=b_addr;
				else
					choose_data=now_PC+4;
			end
			else if(choose_way==2)
				choose_data=j_addr;
			else if(choose_way==3)
				choose_data=jr_addr;
			instruction=rom[(now_PC-32'h0x00003000)>>2];
			//$display("%h",now_PC);
			//$display("%h",instruction);
	 end

	 always @(posedge clk)begin
		if(reset)begin
			now_PC=32'h0x00003000;
		end
		else begin
			now_PC=choose_data;
			//$display("%h",choose_data);
			//$display("%h",now_PC);
		end
	 end

endmodule
