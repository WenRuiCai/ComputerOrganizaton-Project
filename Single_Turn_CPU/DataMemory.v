`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:00 11/17/2018 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory(
    input clk,
    input reset,
    input MemWrite,
    input [11:0] addr,
    input [31:0] data_in,
	 input [31:0] pc,
	 input [1:0] MemRead,
    output [31:0] data_out
    );
	 
	reg [31:0] address=0;
	reg [31:0] ram [1023:0];
	reg [31:0] zero=0;
	reg [31:0] read=0;
	reg [7:0] num=0;
	reg [15:0] half=0;
	integer i;
	
	initial begin
		for(i=0;i<1024;i=i+1)
		begin
			ram[i]=0;
		end
	end
	
	assign data_out=(MemWrite==0)?read:zero;
	
	always @(*) begin				//loadÖ¸ÁîÂß¼­
		case(MemRead)
			0:
				read=ram[addr>>2];
			1:			//lbu
				begin
					case({addr[1:0]})
					0:
						num={ram[addr>>2][7:0]};
					1:
						num={ram[addr>>2][15:8]};
					2:
						num={ram[addr>>2][23:16]};
					3:
						num={ram[addr>>2][31:24]};
					endcase
					read={24'b0,num};
				end
			2:			//lhu
				begin
					case({addr[1:0]})
					0:
						half={ram[addr>>2][15:0]};
					2:
						half={ram[addr>>2][31:16]};
					endcase
					read={16'b0,half};
				end
		endcase
	end
	
	always @(posedge clk)begin				//storeÖ¸ÁîÂß¼­
		if(reset)begin
			for(i=0;i<1024;i=i+1)
			begin
				ram[i]=0;
			end
		end
		else begin
			if(MemWrite)begin
				case (MemRead)
				0:
					begin
						address=addr;
						ram[addr>>2]=data_in;
						$display("@%h: *%h <= %h",pc,address,data_in);
					end
				1:			//sb
					begin
						case({addr[1:0]})
						0:
							ram[addr>>2]={{ram[addr>>2][31:8]},data_in[7:0]};
						1:
							ram[addr>>2]={{ram[addr>>2][31:16]},data_in[7:0],{ram[addr>>2][7:0]}};
						2:
							ram[addr>>2]={{ram[addr>>2][31:24]},data_in[7:0],{ram[addr>>2][15:0]}};
						3:
							ram[addr>>2]={data_in[7:0],{ram[addr>>2][23:0]}};
						endcase
						address=addr;
						$display("@%h: *%h <= %h",pc,address[31:2]<<2,ram[addr>>2]);
					end
				2:			//sh
					begin
						case({addr[1:0]})
						0:
							ram[addr>>2]={ram[addr>>2][31:16],data_in[15:0]};
						2:
							ram[addr>>2]={data_in[15:0],{ram[addr>>2][15:0]}};
						endcase
						address=addr;
						$display("@%h: *%h <= %h",pc,address[31:2]<<2,ram[addr>>2]);
					end
				endcase
			end
		end
	end
	
endmodule
