module ControlUnit(decode, zero, ExtSel, PCWre, InsMemRW, RegOut, RegWre, ALUOp, PCSrc, ALUSrcB, DataMemRW, ALUM2Reg);
  input [5:0] decode;
  input zero;
  output reg ExtSel;
  output reg PCWre;
  output reg InsMemRW;
  output reg RegOut;
  output reg RegWre;
  output reg [2:0] ALUOp;
  output reg PCSrc;
  output reg ALUSrcB;
  output reg DataMemRW;
  output reg ALUM2Reg;

  initial begin
        ExtSel = 0;
        PCWre = 1;
        InsMemRW = 1;
        RegOut = 1;
        RegWre = 0;
        ALUOp = 0;
        PCSrc = 0;
        ALUSrcB = 0;
        DataMemRW = 0;
        ALUM2Reg = 0;
  end

  always@(decode or zero) begin // 解决跳转相等时候跳转的bug（也是竞争与冒险问题），加多一个zero变化时候也发出控制信号
       case( decode )
        6'b000000:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 0;
          ALUM2Reg = 0;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 0;
          PCSrc = 0;
          RegOut = 1;
          ALUOp = 000;
        end
        6'b000001:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 1;
          ALUM2Reg = 0;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 1;
          PCSrc = 0;
          RegOut = 0;
          ALUOp = 000;
        end
        6'b000010:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 0;
          ALUM2Reg = 0;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 0;
          PCSrc = 0;
          RegOut = 1;
          ALUOp = 001;
        end
        6'b000011:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 1;
          ALUM2Reg = 0;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 1;
          PCSrc = 0;
          RegOut = 0;
          ALUOp = 011;
        end
        6'b000100:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 0;
          ALUM2Reg = 0;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 0;
          PCSrc = 0;
          RegOut = 1;
          ALUOp = 100;
        end
        6'b000101:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 0;
          ALUM2Reg = 0;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 0;
          PCSrc = 0;
          RegOut = 1;
          ALUOp = 011;
        end
        6'b000110:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 0;
          ALUM2Reg = 0;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 0;
          PCSrc = 0;
          RegOut = 1;
          ALUOp = 000;
        end
        6'b000111:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 1;
          ALUM2Reg = 0;
          RegWre = 0;
          InsMemRW = 1;
          DataMemRW = 1;
          ExtSel = 1;
          PCSrc = 0;
          RegOut = 0;
          ALUOp = 000;
        end
        6'b001000:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 1;
          ALUSrcB = 1;
          ALUM2Reg = 1;
          RegWre = 1;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 1;
          PCSrc = 0;
          RegOut = 0;
          ALUOp = 000;
        end
        6'b001001:
        begin   //以下都是控制单元产生的控制信号
          if (zero) begin
            PCSrc = 1;
          end else begin
            PCSrc = 0;
          end
             ALUM2Reg = 0;
          PCWre = 1;
          ALUSrcB = 0;
          RegWre = 0;
          InsMemRW = 1;
          DataMemRW = 0;
          ExtSel = 1;
          RegOut = 0;
          ALUOp = 001;
        end
        6'b111111:
        begin   //以下都是控制单元产生的控制信号
          PCWre = 0;
          ALUSrcB = 0;
          ALUM2Reg = 0;
          RegWre = 0;
          InsMemRW = 0;
          DataMemRW = 0;
          ExtSel = 0;
          PCSrc = 0;
          RegOut = 0;
          ALUOp = 000;
        end
    endcase
  end
endmodule