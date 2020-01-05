`include "pc.v"
`include "pcAddFour.v"
`include "ROM.v"
`include "ControlUnit.v"
`include "dataSelect_5_Bit.v"
`include "regfile.v"
`include "signExtend.v"
`include "dataSelect_32_Bit.v"
`include "ALU.v"
`include "RAM.v"
`include "pcAddImm.v"
module Main(CLK, Reset, nowIns, nextAddr, aluRe, writeData, readData1, readData2, ExtendData, RAMDataOut, aluOp, Zero, pcSrc, insToCtrl, dataMemRW);
  input CLK, Reset;
  output [31:0] nowIns, nextAddr, aluRe, writeData, readData1, readData2, ExtendData, RAMDataOut;
  output [2:0] aluOp;
  output [5:0] insToCtrl;
  output Zero, pcSrc, dataMemRW;
  wire [31:0] i_pc, o_pc, o_pc_1, o_pc_2, o_pc_3, ALUResult, WirteData, ReadData1, ReadData2, PCaddFour, extendData, DataOut;
  wire [2:0] ALUOp;
  wire zero, ExtSel, PCWre, InsMemRW, RegOut, RegWre, PCSrc, ALUSrcB, DataMemRW, ALUM2Reg;
  wire [4:0] fiveChoose1;
  wire [31:0] thChoose1;
  assign nowIns = o_pc_2;
  assign nextAddr = i_pc;
  assign aluRe = ALUResult;
  assign writeData = WirteData;
  assign readData1 = ReadData1;
  assign readData2 = ReadData2;
  assign ExtendData = extendData;
  assign RAMDataOut = DataOut;
  assign aluOp = ALUOp;
  assign Zero = zero;
  assign pcSrc = PCSrc;
  assign insToCtrl = o_pc_2[31:26];
  assign dataMemRW = DataMemRW;

  //添加到子模块
  pc pc(CLK, i_pc, PCWre, Reset, o_pc);
  pcAddFour pcAddFour(o_pc, o_pc_1);
  ROM ROM(o_pc_2, o_pc, InsMemRW);
  ControlUnit ControlUnit(o_pc_2[31:26], zero, ExtSel, PCWre, InsMemRW, RegOut, RegWre, ALUOp, PCSrc, ALUSrcB, DataMemRW, ALUM2Reg);
  dataSelect_5_Bit dataSelect_5_Bit_1(o_pc_2[20:16], o_pc_2[15:11], RegOut, fiveChoose1);
  regfile regfile(o_pc_2[25:21], o_pc_2[20:16], WirteData, fiveChoose1, RegWre, CLK, ReadData1, ReadData2);
  signExtend signExtend(o_pc_2[15:0], ExtSel, extendData);
  dataSelect_32_Bit dataSelect_32_Bit_1(ReadData2, extendData, ALUSrcB, thChoose1);
  ALU ALU(ReadData1, thChoose1, ALUOp, zero, ALUResult);
  RAM RAM(ReadData2, ALUResult, DataMemRW, DataOut, CLK);
  dataSelect_32_Bit dataSelect_32_Bit_2(ALUResult, DataOut, ALUM2Reg, WirteData);
  pcAddImm pcAddImm(o_pc_1, extendData, o_pc_3);
  dataSelect_32_Bit dataSelect_32_Bit_3(o_pc_1, o_pc_3, PCSrc, i_pc);
endmodule