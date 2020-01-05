`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:50:12 11/26/2018
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
    input [31:0] addr,
    input [31:0] data_in,
	 input [31:0] pc_add_4,
     input [4:0] MemOp_s,
     input [4:0] MemOp_l,
    output [31:0] data_out
    );

	reg [31:0] ram [4095:0];
	reg [31:0] zero=0;
    reg [31:0] read=0;
    reg [7:0] num=0;
    reg [15:0] half=0;
	integer i;

	initial begin
		for(i=0;i<4096;i=i+1)
		begin
			ram[i]=0;
		end
	end

	assign data_out=(MemWrite==0)?read:zero;



    always @(*) begin               //load类型指令
        case(MemOp_l)
            0:
                read=ram[addr>>2];
            1:          //lbu
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
            2:          //lhu
                begin
                    case({addr[1:0]})
                    0:
                        half={ram[addr>>2][15:0]};
                    2:
                        half={ram[addr>>2][31:16]};
                    endcase
                    read={16'b0,half};
                end
            3:              //lb
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
                    if({num[7]}==0)
                        read={24'b0,num};
                    else
                        read={24'hffffff,num};
                end
            4:          //lh
                begin
                    case({addr[1:0]})
                    0:
                        half={ram[addr>>2][15:0]};
                    2:
                        half={ram[addr>>2][31:16]};
                    endcase
                    if({half[15]}==0)
                        read={16'b0,half};
                    else
                        read={16'hffff,half};
                end
        endcase
    end




	always @(posedge clk)begin                             //store类型指令
		//$display("reset:%d MemWrite:%d data_in:%h addr:%h",reset,MemWrite,data_in,addr);
		if(reset)begin
			for(i=0;i<4096;i=i+1)
			begin
				ram[i]=0;
			end
		end
		else begin
			if(MemWrite)begin
                case(MemOp_s)
                0:
                    begin
        				ram[addr>>2]=data_in;
        				$display("%d@%h: *%h <= %h", $time, pc_add_4-4, addr, data_in);
                    end
                1:          //sb
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
                        $display("%d@%h: *%h <= %h", $time, pc_add_4-4, addr[31:2]<<2, ram[addr>>2]);
                    end
                2:          //sh
                    begin
                        case({addr[1:0]})
                        0:
                            ram[addr>>2]={ram[addr>>2][31:16],data_in[15:0]};
                        2:
                            ram[addr>>2]={data_in[15:0],{ram[addr>>2][15:0]}};
                        endcase
                        $display("%d@%h: *%h <= %h", $time, pc_add_4-4, addr[31:2]<<2, ram[addr>>2]);
                    end
                endcase
			end
		end
	end

endmodule