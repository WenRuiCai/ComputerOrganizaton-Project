`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    16:07:33 12/01/2018
// Design Name:
// Module Name:    Hizzard
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
module Hizzard(
    input [31:0] Instr_D,
    input [31:0] Instr_E,
    input [31:0] Instr_M,
    input [31:0] Instr_W,
    input [4:0] T_use_rs,
    input [4:0] T_use_rt,
    input [4:0] T_new_E,
    input [4:0] T_new_M,
    input [4:0] T_new_W,
    input [4:0] rs_need_D,
    input [4:0] rt_need_D,
    input [4:0] rs_need_E,
    input [4:0] rt_need_E,
    input [4:0] WriteReg_need_E,
    input [4:0] WriteReg_need_M,
    input [4:0] WriteReg_need_W,
    output [4:0] select_rs_out_D,
    output [4:0] select_rt_out_D,
    output [4:0] select_rs_or_SrcA_E,
    output [4:0] select_rt_E,
    output [4:0] select_Writedata_M,
    output pc_enabled,
    output reset_D_to_E,
    output IF_to_D_enabled
    );

    reg stall_rs0_E1=0,stall_rs0_E2=0,stall_rs0_M1=0,stall_rs1_E2=0;

    reg stall_rt0_E1=0,stall_rt0_E2=0,stall_rt0_M1=0,stall_rt1_E2=0;
    ////////////////////////////////以上是暂停处�

    reg [4:0] F_rs_out_D=0,F_rt_out_D=0,F_ALUSrcA_E=0,F_ALUSrcB_E=0,F_WriteData_M=0;

    assign select_rs_out_D=F_rs_out_D;
    assign select_rt_out_D=F_rt_out_D;
    assign select_rs_or_SrcA_E=F_ALUSrcA_E;
    assign select_rt_E=F_ALUSrcB_E;
    assign select_Writedata_M=F_WriteData_M;

    reg store_pc_enabled=1;
    reg store_reset_D_to_E=0;
    reg store_IF_to_D_enabled=1;

    assign pc_enabled=store_pc_enabled;
    assign reset_D_to_E=store_reset_D_to_E;
    assign IF_to_D_enabled=store_IF_to_D_enabled;

    always @(*) begin		//????ͣ
			stall_rs0_E1=(T_use_rs==0)&&(T_new_E==1)&&(rs_need_D==WriteReg_need_E);
            stall_rs0_E2=(T_use_rs==0)&&(T_new_E==2)&&(rs_need_D==WriteReg_need_E);
            stall_rs0_M1=(T_use_rs==0)&&(T_new_M==1)&&(rs_need_D==WriteReg_need_M);
            stall_rs1_E2=(T_use_rs==1)&&(T_new_E==2)&&(rs_need_D==WriteReg_need_E);

            stall_rt0_E1=(T_use_rt==0)&&(T_new_E==1)&&(rt_need_D==WriteReg_need_E);
            stall_rt0_E2=(T_use_rt==0)&&(T_new_E==2)&&(rt_need_D==WriteReg_need_E);
            stall_rt0_M1=(T_use_rt==0)&&(T_new_M==1)&&(rt_need_D==WriteReg_need_M);
            stall_rt1_E2=(T_use_rt==1)&&(T_new_E==2)&&(rt_need_D==WriteReg_need_E);

            if((stall_rs0_E1||stall_rs0_E2||stall_rs0_M1||stall_rs1_E2)||(stall_rt0_E1||stall_rt0_E2||stall_rt0_M1||stall_rt1_E2))
            begin
                store_pc_enabled=0;
                store_reset_D_to_E=1;
                store_IF_to_D_enabled=0;
            end
				else begin
					 store_pc_enabled=1;
                store_reset_D_to_E=0;
                store_IF_to_D_enabled=1;
				end
    end

	 always @(*) begin		//???ת??
            //////////////////////////////////////////////////////////////////RS_D

            if(T_new_E==0&&rs_need_D==WriteReg_need_E)
                F_rs_out_D=1;
            else if(T_new_M==0&&rs_need_D==WriteReg_need_M)
            begin
                if(rs_need_D==31&&({Instr_M[31:26]}==6'b000011||{Instr_M[31:26]}==6'b011000))      //change
                    F_rs_out_D=3;
                else
                    F_rs_out_D=2;
            end
            else if(rs_need_D==WriteReg_need_W&&T_new_W==0)      //change
                F_rs_out_D=4;
            else
                F_rs_out_D=0;


            ////////////////////////////////////////////////////////////////////RT_D
            if(T_new_E==0&&rt_need_D==WriteReg_need_E)
                F_rt_out_D=1;
            else if(T_new_M==0&&rt_need_D==WriteReg_need_M)
            begin
                if(rt_need_D==31&&({Instr_M[31:26]}==6'b000011||{Instr_M[31:26]}==6'b011000))          //change
                    F_rt_out_D=3;
                else
                    F_rt_out_D=2;
            end
            else if(rt_need_D==WriteReg_need_W&&T_new_W==0)          //change
                F_rt_out_D=4;
            else
                F_rt_out_D=0;
            ///////////////////////////////////////////////////////////////////SrcA
            if(T_new_M==0&&rs_need_E==WriteReg_need_M)
            begin
                if(rs_need_E==31&&({Instr_M[31:26]}==6'b000011||{Instr_M[31:26]}==6'b011000))
				    F_ALUSrcA_E=3;
                else
                    F_ALUSrcA_E=1;
			end
            else if(rs_need_E==WriteReg_need_W&&T_new_W==0)
                F_ALUSrcA_E=2;
            else
                F_ALUSrcA_E=0;

            //////////////////////////////////////////////////////////////////SrcB
            if(T_new_M==0&&rt_need_E==WriteReg_need_M)
            begin
                if(rt_need_E==31&&({Instr_M[31:26]}==6'b000011||{Instr_M[31:26]}==6'b011000))
				    F_ALUSrcB_E=3;
                else
                    F_ALUSrcB_E=1;
			end
            else if(rt_need_E==WriteReg_need_W&&T_new_W==0)
                F_ALUSrcB_E=2;
            else
                F_ALUSrcB_E=0;

            /////////////////////////////////////////////////////////////////MemWrite
            if({Instr_M[31:26]}==6'b101011&&WriteReg_need_M==WriteReg_need_W&&T_new_W==0)        //change
                F_WriteData_M=1;
            else
                F_WriteData_M=0;

	 end

endmodule
