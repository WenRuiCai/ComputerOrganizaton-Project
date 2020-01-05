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
   input [6:2] ExcCode_from_IF,
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
    output [4:0] T_use_rt,
    output [6:2] ExcCode_to_D
    );

    reg [31:0] store_ins;
    reg [31:0] store_plus4;
    reg [31:0] store_plus8;
	 reg [4:0] store_T_use_rs;
    reg [4:0] store_T_use_rt;
    reg [6:2] store_ExcCode_to_D;

    assign Instruction=store_ins;
    assign PC_plus_4 =store_plus4 ;
    assign PC_plus_8 =store_plus8 ;
	 assign T_use_rs=store_T_use_rs;
    assign T_use_rt=store_T_use_rt;
    assign ExcCode_to_D = store_ExcCode_to_D;

    initial begin
        store_ins=0;
        store_plus4=0;
        store_plus8=0;
		  store_T_use_rs=0;
        store_T_use_rt=0;
        store_ExcCode_to_D=0;
    end

    always @(posedge clk)begin
        if(reset)begin
            store_ins=0;
            store_plus4=0;
            store_plus8=0;
			   store_T_use_rs=0;
            store_T_use_rt=0;
            store_ExcCode_to_D=0;
        end
        else begin
            if(en)begin
                store_plus8=PC_plus_8_in;
                store_plus4=PC_plus_4_in;
                store_ins=Instr_in;
                store_ExcCode_to_D=ExcCode_from_IF;
					 //$display("%h",store_ins);
					 case(Instr_in[31:26])        //ĂĂşĹĂT_use//
					    6'b001101:      //ori
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b001110:      //xori
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b001100:      //andi
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b001010:      //slti
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b001011:      //sltiu
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b001000:      //addi
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b001001:      //addiu
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
              6'b000101:      //bne
              begin
                  store_T_use_rs=0;
                  store_T_use_rt=0;
              end
              6'b000001:      //bgez & bltz
              begin
                store_T_use_rs=0;
                  store_T_use_rt=0;
              end
              6'b000111:      //bgtz
              begin
                  store_T_use_rs=0;
                  store_T_use_rt=0;
              end
              6'b000110:      //blez
              begin
                  store_T_use_rs=0;
                  store_T_use_rt=0;
              end
              6'b100011:     //lw
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b100000:   //lb
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b100100:   //lbu
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b100001:   //lh
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b100101:   //lhu
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=31;
              end
              6'b101011:      //sw
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=2;
              end
              6'b101000:    //sb
              begin
                  store_T_use_rs=1;
                  store_T_use_rt=2;
              end
              6'b101001:    //sh
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
              6'b010000:
              begin
                  if({Instr_in[25:21]}==5'b00000) begin  //mfc0
                    store_T_use_rs=31;
                    store_T_use_rt=31;
                  end
                  else if({Instr_in[25:21]}==5'b00100) begin                //mtc0
                    store_T_use_rs=31;
                    store_T_use_rt=1;
                  end
                  else if ({Instr_in[5:0]}==6'b011000) begin
                    store_T_use_rs=31;
                  store_T_use_rt=31;
                  end
              end
              6'b000000:
              begin
                  case(Instr_in[5:0])
                     6'b010000:       //mfhi
                     begin
                        store_T_use_rs=31;
                        store_T_use_rt=31;
                     end
                     6'b010010:       //mflo
                     begin
                        store_T_use_rs=31;
                        store_T_use_rt=31;
                     end
                     6'b010001:       //mthi
                     begin
                        store_T_use_rs=1;
                        store_T_use_rt=31;
                     end
                     6'b010011:       //mtlo
                     begin
                        store_T_use_rs=1;
                        store_T_use_rt=31;
                     end
                     6'b011000:       //mult
                     begin
                        store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b011001:       //multu
                     begin
                        store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b011010:       //div
                     begin
                        store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b011011:       //divu
                     begin
                        store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100001:      //addu
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100000:      //add
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b000011:   //sraçŽćŻ
                     begin
                         store_T_use_rs=31;
                         store_T_use_rt=1;
                     end
                     6'b000010:   //srléťčž
                     begin
                         store_T_use_rs=31;
                         store_T_use_rt=1;
                     end
                     6'b000100:     //sllv
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b000110:     //srlv
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b000111:     //srav
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b101010:     //slt
                     begin
                        store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b101011:     //sltu
                     begin
                        store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100011:      //subu
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100010:      //sub
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100101:     //or
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100100:     //and
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100110:     //xor
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b100111:     //nor
                     begin
                         store_T_use_rs=1;
                         store_T_use_rt=1;
                     end
                     6'b001000:      //jr
                     begin
                         store_T_use_rs=0;
                         store_T_use_rt=31;
                     end
                     6'b001001:     //jalr
                     begin
                         store_T_use_rs=0;
                         store_T_use_rt=31;
                     end
                     6'b000000:       //nop & sll
                     begin
                        if(Instr_in==32'b0)  //nop
                        begin
                          store_T_use_rs=31;
                          store_T_use_rt=31;
                        end
                        else begin          //sll
                          store_T_use_rs=31;
                          store_T_use_rt=1;
                        end
                     end
                     default:
                     begin
                        store_T_use_rs=31;
                        store_T_use_rt=31;
                     end
                  endcase
              end
              default:
                begin
                  store_T_use_rs=31;
                  store_T_use_rt=31;
                end
				    endcase
            end
        end
    end

endmodule
