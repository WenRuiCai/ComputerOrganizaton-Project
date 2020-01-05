`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:47:05 11/26/2018
// Design Name:
// Module Name:    Reg_IF_to_D
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
module Reg_IF_to_D(
	 input [31:0] Instr_in,
	 input [31:0] PC_plus_4_in,
	 input [31:0] PC_plus_8_in,
    input clk,
    input reset,
    input en,
	 output [31:0] Instruction,
    output [31:0] PC_plus_4,
    output [31:0] PC_plus_8,
	 output [4:0] T_use_rs,
    output [4:0] T_use_rt
    );

    reg [31:0] store_ins;
    reg [31:0] store_plus4;
    reg [31:0] store_plus8;
	 reg [4:0] store_T_use_rs;
    reg [4:0] store_T_use_rt;

    assign Instruction=store_ins;
    assign PC_plus_4 =store_plus4 ;
    assign PC_plus_8 =store_plus8 ;
	 assign T_use_rs=store_T_use_rs;
    assign T_use_rt=store_T_use_rt;

    initial begin
        store_ins=0;
        store_plus4=0;
        store_plus8=0;
		  store_T_use_rs=0;
        store_T_use_rt=0;
    end

    always @(posedge clk)begin
        if(reset)begin
            store_ins=0;
            store_plus4=0;
            store_plus8=0;
			   store_T_use_rs=0;
            store_T_use_rt=0;
        end
        else begin
            if(en)begin
                store_plus8=PC_plus_8_in;
                store_plus4=PC_plus_4_in;
                store_ins=Instr_in;
					 //$display("%h",store_ins);
					 case(Instr_in[31:26])        //Éú³ÉT_use//
						  6'b001101:      //ori
                    begin
                        store_T_use_rs=1;
                        store_T_use_rt=31;
                    end
                    6'b001111:      //lui
                    begin
                        store_T_use_rs=31;
                        store_T_use_rt=31;
                    end
                    6'b000100:      //beq
                    begin
                        store_T_use_rs=0;
                        store_T_use_rt=0;
                    end
						  6'b011000:		// blezals
						  begin
								store_T_use_rs=0;
                        store_T_use_rt=0;
						  end
                    6'b100011:      //lw
                    begin
                        store_T_use_rs=1;
                        store_T_use_rt=31;
                    end
                    6'b101011:      //sw
                    begin
                        store_T_use_rs=1;
                        store_T_use_rt=2;
                    end
                    6'b000011:      //jal
                    begin
                        store_T_use_rs=31;
                        store_T_use_rt=31;
                    end
						  6'b000010:		//j
						  begin
								store_T_use_rs=31;
                        store_T_use_rt=31;
						  end
                    6'b000000:
                    begin
                        case(Instr_in[5:0])
                           6'b100001:      //addu
                           begin
                               store_T_use_rs=1;
                               store_T_use_rt=1;
                           end
                           6'b100011:      //subu
                           begin
                               store_T_use_rs=1;
                               store_T_use_rt=1;
                           end
                           6'b001000:      //jr
                           begin
                               store_T_use_rs=0;
                               store_T_use_rt=31;
                           end
                           6'b000000:       //nop
                           begin
                                store_T_use_rs=31;
                                store_T_use_rt=31;
                           end
                        endcase
                    end
				    endcase
            end
        end
    end

endmodule
