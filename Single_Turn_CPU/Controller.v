`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:34 11/17/2018 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
    input [5:0] Function,
    input [5:0] Special,
    output reg [1:0]RegDst,
    output reg WE,
    output reg WE3,
    output reg [2:0] ALUControl,
    output reg [1:0]MemtoReg,
    output reg [2:0] ALUSrc,
	 output reg [3:0] choose_way,
	 output reg [1:0] MemRead
    );
    always @(*)begin
			//$display("Special: %b Function: %b",Special,Function);
        case(Special)
        6'b001101:      //ori
            begin
                RegDst=0;WE3=1;WE=0;ALUControl=1;MemtoReg=0;ALUSrc=3;choose_way=0;MemRead=0;
            end
        6'b001111:      //lui
            begin
                RegDst=0;WE3=1;WE=0;ALUControl=2;MemtoReg=0;ALUSrc=2;choose_way=0;MemRead=0;
            end
        6'b000100:      //beq
            begin
                RegDst=0;WE3=0;WE=0;ALUControl=7;MemtoReg=0;ALUSrc=0;choose_way=1;MemRead=0;
            end
        6'b100011:      //lw
            begin
                RegDst=0;WE3=1;WE=0;ALUControl=2;MemtoReg=1;ALUSrc=1;choose_way=0;MemRead=0;
            end
        6'b101011:      //sw
            begin
                RegDst=0;WE3=0;WE=1;ALUControl=2;MemtoReg=0;ALUSrc=1;choose_way=0;MemRead=0;
            end
        6'b000011:      //jal
            begin
                RegDst=2;WE3=1;WE=0;ALUControl=0;MemtoReg=2;ALUSrc=0;choose_way=2;MemRead=0;
            end
		  6'b000010:		//j
				begin
					 RegDst=2;WE3=0;WE=0;ALUControl=0;MemtoReg=2;ALUSrc=0;choose_way=2;MemRead=0;
				end
		  6'b100100:		//lbu
				begin
					 RegDst=0;WE3=1;WE=0;ALUControl=2;MemtoReg=1;ALUSrc=1;choose_way=0;MemRead=1;
				end
		  6'b100101:		//lhu
				begin
					 RegDst=0;WE3=1;WE=0;ALUControl=2;MemtoReg=1;ALUSrc=1;choose_way=0;MemRead=2;
				end
		  6'b101000:		//sb
				begin
					 RegDst=0;WE3=0;WE=1;ALUControl=2;MemtoReg=0;ALUSrc=1;choose_way=0;MemRead=1;
				end
		  6'b101001:		//sh
				begin
					 RegDst=0;WE3=0;WE=1;ALUControl=2;MemtoReg=0;ALUSrc=1;choose_way=0;MemRead=2;
				end
        6'b000000:
            begin
                case(Function)
                6'b100001:      //addu
                    begin
                        RegDst=1;WE3=1;WE=0;ALUControl=2;MemtoReg=0;ALUSrc=0;choose_way=0;MemRead=0;
                    end
                6'b100011:      //subu
                    begin
                        RegDst=1;WE3=1;WE=0;ALUControl=6;MemtoReg=0;ALUSrc=0;choose_way=0;MemRead=0;
                    end
                6'b001000:      //jr
                    begin
                        RegDst=1;WE3=0;WE=0;ALUControl=2;MemtoReg=0;ALUSrc=0;choose_way=3;MemRead=0;
                    end
					 6'b000000:		 //nop
						  begin
								RegDst=0;WE3=0;WE=0;ALUControl=0;MemtoReg=0;ALUSrc=0;choose_way=0;MemRead=0;
						  end
					 6'b101011:		//sltu
						  begin
								RegDst=1;WE3=1;WE=0;ALUControl=3;MemtoReg=0;ALUSrc=0;choose_way=0;MemRead=0;
						  end
					 6'b001011:		//movn
							begin
								RegDst=1;WE3=1;WE=0;ALUControl=5;MemtoReg=0;ALUSrc=0;choose_way=0;MemRead=0;
							end
                endcase
            end
        endcase
    end
    
endmodule