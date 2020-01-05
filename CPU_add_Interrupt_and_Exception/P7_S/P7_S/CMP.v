`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:05 12/06/2017 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
    input [31:0] CMP_D1,
    input [31:0] CMP_D2,
    input [2:0]  CMPOp,
    output CMP_result
    );

  parameter equal      = 3'b000,
            notequal   = 3'b001,
				lessequal  = 3'b010,
				great      = 3'b011,
				less       = 3'b100,
				greatequal = 3'b101,
				D2_equal_zero = 3'b110;
  
  reg CMP_out;
  
  assign CMP_result = CMP_out;
  always@(*) begin
    case(CMPOp)
	   equal:      CMP_out <= (CMP_D1 === CMP_D2) ? 1'b1 : 1'b0;
		notequal:   CMP_out <= (CMP_D1 !== CMP_D2) ? 1'b1 : 1'b0;
		lessequal:  CMP_out <= ($signed(CMP_D1) <= 0) ? 1'b1 : 1'b0;
		great:      CMP_out <= ($signed(CMP_D1) >  0) ? 1'b1 : 1'b0;
		less:       CMP_out <= ($signed(CMP_D1) < 0)  ? 1'b1 : 1'b0;
		greatequal: CMP_out <= ($signed(CMP_D1) >= 0) ? 1'b1 : 1'b0;
		D2_equal_zero: CMP_out <= (CMP_D2 === 0) ? 1'b1 : 1'b0;
    endcase
  end

endmodule
