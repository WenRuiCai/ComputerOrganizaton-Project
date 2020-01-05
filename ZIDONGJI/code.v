`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:25:23 10/17/2018 
// Design Name: 
// Module Name:    code 
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
module id_fsm(
	input [7:0] char,
	input clk,
	output reg out 
	);
	integer state;
	reg [1:0] in;
	initial begin
		out=0;
		state=0;
	end

	always @(posedge clk) begin
		if((char<91 && char>=65)||(char<123&&char>=97)) in<=1;
		else if(char<58&&char>=48) in<=2;
		else in<=0;
		
		case (state)
		0:
			begin
				state <= in == 1 ? 1 : 0;
				out <= 0;
			end
		1:
			begin
				case (in)
				1:
					begin
						state<=1;out<=0;
					end
				0:
					begin
						state<=0;out<=0;
					end
				2:
					begin
						state<=2;out<=1;
					end
				endcase
			end		
		2:
			begin
				case (in)
				1:
					begin
						state<=1;out<=0;
					end
				0:
					begin
						state<=0;out<=0;
					end
				2:
					begin
						state<=2;out<=1;
					end
				endcase
			end		
		endcase
	 end
endmodule
