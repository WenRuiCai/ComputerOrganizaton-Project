/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/CPU Project/PipeLine_CPU/CMP.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {24U, 0U};



static void Cont_27_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t6[8];
    char t16[8];
    char t43[8];
    char t44[8];
    char t48[8];
    char t84[8];
    char t85[8];
    char t86[8];
    char t87[8];
    char t98[8];
    char t125[8];
    char t126[8];
    char t129[8];
    char *t1;
    char *t2;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t127;
    char *t128;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1368U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 26);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 26);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    xsi_vlogtype_concat(t5, 6, 6, 1U, t6, 6);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t5 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB7;

LAB4:    if (t28 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t16) = 1;

LAB7:    memset(t4, 0, 8);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t4 + 4);
    t40 = *((unsigned int *)t4);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB12;

LAB13:    t80 = *((unsigned int *)t4);
    t81 = (~(t80));
    t82 = *((unsigned int *)t39);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t39) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t84, 8);

LAB20:    t155 = (t0 + 3088);
    t156 = (t155 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memset(t159, 0, 8);
    t160 = 1U;
    t161 = t160;
    t162 = (t3 + 4);
    t163 = *((unsigned int *)t3);
    t160 = (t160 & t163);
    t164 = *((unsigned int *)t162);
    t161 = (t161 & t164);
    t165 = (t159 + 4);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t166 | t160);
    t167 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t167 | t161);
    xsi_driver_vfirst_trans(t155, 0, 0);
    t168 = (t0 + 3008);
    *((int *)t168) = 1;

LAB1:    return;
LAB6:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t38 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 1048U);
    t46 = *((char **)t45);
    t45 = (t0 + 1208U);
    t47 = *((char **)t45);
    memset(t48, 0, 8);
    t45 = (t46 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t46);
    t51 = *((unsigned int *)t47);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t45);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = (t52 | t55);
    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t49);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB24;

LAB21:    if (t59 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t48) = 1;

LAB24:    memset(t44, 0, 8);
    t63 = (t48 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t48);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t63) != 0)
        goto LAB27;

LAB28:    t70 = (t44 + 4);
    t71 = *((unsigned int *)t44);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t44);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t70) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t44) > 0)
        goto LAB35;

LAB36:    memcpy(t43, t79, 8);

LAB37:    goto LAB13;

LAB14:    t88 = (t0 + 1368U);
    t89 = *((char **)t88);
    memset(t87, 0, 8);
    t88 = (t87 + 4);
    t90 = (t89 + 4);
    t91 = *((unsigned int *)t89);
    t92 = (t91 >> 26);
    *((unsigned int *)t87) = t92;
    t93 = *((unsigned int *)t90);
    t94 = (t93 >> 26);
    *((unsigned int *)t88) = t94;
    t95 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t95 & 63U);
    t96 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t96 & 63U);
    xsi_vlogtype_concat(t86, 6, 6, 1U, t87, 6);
    t97 = ((char*)((ng4)));
    memset(t98, 0, 8);
    t99 = (t86 + 4);
    t100 = (t97 + 4);
    t101 = *((unsigned int *)t86);
    t102 = *((unsigned int *)t97);
    t103 = (t101 ^ t102);
    t104 = *((unsigned int *)t99);
    t105 = *((unsigned int *)t100);
    t106 = (t104 ^ t105);
    t107 = (t103 | t106);
    t108 = *((unsigned int *)t99);
    t109 = *((unsigned int *)t100);
    t110 = (t108 | t109);
    t111 = (~(t110));
    t112 = (t107 & t111);
    if (t112 != 0)
        goto LAB41;

LAB38:    if (t110 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t98) = 1;

LAB41:    memset(t85, 0, 8);
    t114 = (t98 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t98);
    t118 = (t117 & t116);
    t119 = (t118 & 1U);
    if (t119 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t114) != 0)
        goto LAB44;

LAB45:    t121 = (t85 + 4);
    t122 = *((unsigned int *)t85);
    t123 = *((unsigned int *)t121);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB46;

LAB47:    t150 = *((unsigned int *)t85);
    t151 = (~(t150));
    t152 = *((unsigned int *)t121);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t121) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t85) > 0)
        goto LAB52;

LAB53:    memcpy(t84, t154, 8);

LAB54:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t43, 32, t84, 32);
    goto LAB20;

LAB18:    memcpy(t3, t43, 8);
    goto LAB20;

LAB23:    t62 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t44) = 1;
    goto LAB28;

LAB27:    t69 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB28;

LAB29:    t74 = ((char*)((ng2)));
    goto LAB30;

LAB31:    t79 = ((char*)((ng3)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t43, 32, t74, 32, t79, 32);
    goto LAB37;

LAB35:    memcpy(t43, t74, 8);
    goto LAB37;

LAB40:    t113 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t85) = 1;
    goto LAB45;

LAB44:    t120 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB45;

LAB46:    t127 = (t0 + 1048U);
    t128 = *((char **)t127);
    t127 = ((char*)((ng3)));
    memset(t129, 0, 8);
    t130 = (t128 + 4);
    if (*((unsigned int *)t130) != 0)
        goto LAB56;

LAB55:    t131 = (t127 + 4);
    if (*((unsigned int *)t131) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t128) > *((unsigned int *)t127))
        goto LAB58;

LAB57:    *((unsigned int *)t129) = 1;

LAB58:    memset(t126, 0, 8);
    t133 = (t129 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t129);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t133) != 0)
        goto LAB62;

LAB63:    t140 = (t126 + 4);
    t141 = *((unsigned int *)t126);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB64;

LAB65:    t145 = *((unsigned int *)t126);
    t146 = (~(t145));
    t147 = *((unsigned int *)t140);
    t148 = (t146 || t147);
    if (t148 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t140) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t126) > 0)
        goto LAB70;

LAB71:    memcpy(t125, t149, 8);

LAB72:    goto LAB47;

LAB48:    t154 = ((char*)((ng3)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t84, 32, t125, 32, t154, 32);
    goto LAB54;

LAB52:    memcpy(t84, t125, 8);
    goto LAB54;

LAB56:    t132 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB58;

LAB60:    *((unsigned int *)t126) = 1;
    goto LAB63;

LAB62:    t139 = (t126 + 4);
    *((unsigned int *)t126) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB63;

LAB64:    t144 = ((char*)((ng2)));
    goto LAB65;

LAB66:    t149 = ((char*)((ng3)));
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t125, 32, t144, 32, t149, 32);
    goto LAB72;

LAB70:    memcpy(t125, t144, 8);
    goto LAB72;

}


extern void work_m_00000000000425123965_1579609468_init()
{
	static char *pe[] = {(void *)Cont_27_0};
	xsi_register_didat("work_m_00000000000425123965_1579609468", "isim/test_isim_beh.exe.sim/work/m_00000000000425123965_1579609468.didat");
	xsi_register_executes(pe);
}
