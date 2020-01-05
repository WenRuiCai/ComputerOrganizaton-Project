`timescale 1ns / 1ps
`include "DataMemory.v"
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:50:27 11/26/2018
// Design Name:
// Module Name:    Level_Memory
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
module Level_Memory(
    input clk,
    input reset,
    input [31:0] Instr_in,
    input [31:0] pc_add_4_in,
    input [31:0] pc_add_8_in,
    input [31:0] MemAddr,
    input [31:0] WriteData_from_E,
    input [31:0] WriteData_from_W,
    input [4:0] select_Writedata,
    output [31:0] DM_data_out,
    output [31:0] ALUResult
    );

    wire MemWrite;
    wire [31:0] WriteData;

    reg store_MemWrite=0;

    assign MemWrite = store_MemWrite;

    assign WriteData=({Instr_in[20:16]}==0)?0:((select_Writedata==0)?WriteData_from_E:WriteData_from_W);
    assign ALUResult=MemAddr;

	 DataMemory DM(clk,reset,MemWrite,MemAddr,WriteData,pc_add_4_in,DM_data_out);

    always @(*) begin
			//$display("%d  %h  %h %d",$time,WriteData_from_E,WriteData_from_W,select_Writedata);
        case (Instr_in[31:26])      //special
            6'b001101:      //ori
                begin
                    store_MemWrite=0;
                end
            6'b001111:      //lui
                begin
                    store_MemWrite=0;
                end
            6'b000100:      // beq
                begin
                    store_MemWrite=0;
                end
			   6'b011000:      // blezals
                begin
                    store_MemWrite=0;
                end
            6'b100011:      //lw
                begin
                    store_MemWrite=0;
                end
            6'b101011:      //sw
                begin
                    store_MemWrite=1;
                end
            6'b000011:      //jal
                begin
                    store_MemWrite=0;
                end
				6'b000010:      //j
                begin
                    store_MemWrite=0;
                end
            6'b000000:
                begin
                    case (Instr_in[5:0])
                        6'b100001:      //addu
                            begin
                               store_MemWrite=0;
                            end
                        6'b100011:      //subu
                            begin
                                store_MemWrite=0;
                            end
                        6'b001000:      //jr
                            begin
                                store_MemWrite=0;
                            end
                        6'b000000:      //nop
                            begin
                                store_MemWrite=0;
                            end
                    endcase
                end
        endcase
    end

endmodule
