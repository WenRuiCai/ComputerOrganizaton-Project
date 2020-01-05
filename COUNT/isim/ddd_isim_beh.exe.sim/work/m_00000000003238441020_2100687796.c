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
static const char *ng0 = "E:/CPU Project/COUNT/id_fsm.v";
static int ng1[] = {0, 0};
static int ng2[] = {65, 0};
static int ng3[] = {90, 0};
static int ng4[] = {97, 0};
static int ng5[] = {122, 0};
static int ng6[] = {1, 0};
static int ng7[] = {48, 0};
static int ng8[] = {57, 0};



static void Cont_30_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3760);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 3664);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_32_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_37_2(char *t0)
{
    char t9[8];
    char t10[8];
    char t13[8];
    char t17[8];
    char t31[8];
    char t35[8];
    char t43[8];
    char t75[8];
    char t90[8];
    char t94[8];
    char t108[8];
    char t112[8];
    char t120[8];
    char t152[8];
    char t160[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;

LAB0:    t1 = (t0 + 3344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3680);
    *((int *)t2) = 1;
    t3 = (t0 + 3376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 1, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB12:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB14;

LAB13:    t15 = (t11 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB16:    memset(t17, 0, 8);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t18) != 0)
        goto LAB20;

LAB21:    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB22;

LAB23:    memcpy(t43, t17, 8);

LAB24:    memset(t75, 0, 8);
    t76 = (t43 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t43);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t76) != 0)
        goto LAB39;

LAB40:    t83 = (t75 + 4);
    t84 = *((unsigned int *)t75);
    t85 = (!(t84));
    t86 = *((unsigned int *)t83);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB41;

LAB42:    memcpy(t160, t75, 8);

LAB43:    memset(t10, 0, 8);
    t188 = (t160 + 4);
    t189 = *((unsigned int *)t188);
    t190 = (~(t189));
    t191 = *((unsigned int *)t160);
    t192 = (t191 & t190);
    t193 = (t192 & 1U);
    if (t193 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t188) != 0)
        goto LAB77;

LAB78:    t195 = (t10 + 4);
    t196 = *((unsigned int *)t10);
    t197 = *((unsigned int *)t195);
    t198 = (t196 || t197);
    if (t198 > 0)
        goto LAB79;

LAB80:    t200 = *((unsigned int *)t10);
    t201 = (~(t200));
    t202 = *((unsigned int *)t195);
    t203 = (t201 || t202);
    if (t203 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t195) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t10) > 0)
        goto LAB85;

LAB86:    memcpy(t9, t204, 8);

LAB87:    t205 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t205, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB9:    xsi_set_current_line(45, ng0);

LAB88:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB90;

LAB89:    t7 = (t3 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB90;

LAB93:    if (*((unsigned int *)t4) < *((unsigned int *)t3))
        goto LAB92;

LAB91:    *((unsigned int *)t9) = 1;

LAB92:    memset(t10, 0, 8);
    t12 = (t9 + 4);
    t19 = *((unsigned int *)t12);
    t20 = (~(t19));
    t21 = *((unsigned int *)t9);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t12) != 0)
        goto LAB96;

LAB97:    t15 = (t10 + 4);
    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t15);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB98;

LAB99:    memcpy(t31, t10, 8);

LAB100:    t48 = (t31 + 4);
    t77 = *((unsigned int *)t48);
    t78 = (~(t77));
    t79 = *((unsigned int *)t31);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB118;

LAB117:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB118;

LAB121:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB120;

LAB119:    *((unsigned int *)t9) = 1;

LAB120:    memset(t10, 0, 8);
    t11 = (t9 + 4);
    t19 = *((unsigned int *)t11);
    t20 = (~(t19));
    t21 = *((unsigned int *)t9);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t11) != 0)
        goto LAB124;

LAB125:    t14 = (t10 + 4);
    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t14);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB126;

LAB127:    memcpy(t31, t10, 8);

LAB128:    memset(t35, 0, 8);
    t47 = (t31 + 4);
    t77 = *((unsigned int *)t47);
    t78 = (~(t77));
    t79 = *((unsigned int *)t31);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t47) != 0)
        goto LAB143;

LAB144:    t49 = (t35 + 4);
    t84 = *((unsigned int *)t35);
    t85 = (!(t84));
    t86 = *((unsigned int *)t49);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB145;

LAB146:    memcpy(t120, t35, 8);

LAB147:    t164 = (t120 + 4);
    t189 = *((unsigned int *)t164);
    t190 = (~(t189));
    t191 = *((unsigned int *)t120);
    t192 = (t191 & t190);
    t193 = (t192 != 0);
    if (t193 > 0)
        goto LAB179;

LAB180:    xsi_set_current_line(56, ng0);

LAB183:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB181:
LAB115:    goto LAB11;

LAB14:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB16;

LAB18:    *((unsigned int *)t17) = 1;
    goto LAB21;

LAB20:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB21;

LAB22:    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB26;

LAB25:    t33 = (t29 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t30) > *((unsigned int *)t29))
        goto LAB28;

LAB27:    *((unsigned int *)t31) = 1;

LAB28:    memset(t35, 0, 8);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t36) != 0)
        goto LAB32;

LAB33:    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t17 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB24;

LAB26:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB30:    *((unsigned int *)t35) = 1;
    goto LAB33;

LAB32:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB33;

LAB34:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t17 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t17);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB36;

LAB37:    *((unsigned int *)t75) = 1;
    goto LAB40;

LAB39:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB40;

LAB41:    t88 = (t0 + 1048U);
    t89 = *((char **)t88);
    t88 = ((char*)((ng4)));
    memset(t90, 0, 8);
    t91 = (t89 + 4);
    if (*((unsigned int *)t91) != 0)
        goto LAB45;

LAB44:    t92 = (t88 + 4);
    if (*((unsigned int *)t92) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t89) < *((unsigned int *)t88))
        goto LAB47;

LAB46:    *((unsigned int *)t90) = 1;

LAB47:    memset(t94, 0, 8);
    t95 = (t90 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t90);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t95) != 0)
        goto LAB51;

LAB52:    t102 = (t94 + 4);
    t103 = *((unsigned int *)t94);
    t104 = *((unsigned int *)t102);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB53;

LAB54:    memcpy(t120, t94, 8);

LAB55:    memset(t152, 0, 8);
    t153 = (t120 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t120);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t153) != 0)
        goto LAB70;

LAB71:    t161 = *((unsigned int *)t75);
    t162 = *((unsigned int *)t152);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = (t75 + 4);
    t165 = (t152 + 4);
    t166 = (t160 + 4);
    t167 = *((unsigned int *)t164);
    t168 = *((unsigned int *)t165);
    t169 = (t167 | t168);
    *((unsigned int *)t166) = t169;
    t170 = *((unsigned int *)t166);
    t171 = (t170 != 0);
    if (t171 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB43;

LAB45:    t93 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB47;

LAB49:    *((unsigned int *)t94) = 1;
    goto LAB52;

LAB51:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB52;

LAB53:    t106 = (t0 + 1048U);
    t107 = *((char **)t106);
    t106 = ((char*)((ng5)));
    memset(t108, 0, 8);
    t109 = (t107 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB57;

LAB56:    t110 = (t106 + 4);
    if (*((unsigned int *)t110) != 0)
        goto LAB57;

LAB60:    if (*((unsigned int *)t107) > *((unsigned int *)t106))
        goto LAB59;

LAB58:    *((unsigned int *)t108) = 1;

LAB59:    memset(t112, 0, 8);
    t113 = (t108 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t108);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t113) != 0)
        goto LAB63;

LAB64:    t121 = *((unsigned int *)t94);
    t122 = *((unsigned int *)t112);
    t123 = (t121 & t122);
    *((unsigned int *)t120) = t123;
    t124 = (t94 + 4);
    t125 = (t112 + 4);
    t126 = (t120 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB55;

LAB57:    t111 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB59;

LAB61:    *((unsigned int *)t112) = 1;
    goto LAB64;

LAB63:    t119 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB64;

LAB65:    t132 = *((unsigned int *)t120);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t120) = (t132 | t133);
    t134 = (t94 + 4);
    t135 = (t112 + 4);
    t136 = *((unsigned int *)t94);
    t137 = (~(t136));
    t138 = *((unsigned int *)t134);
    t139 = (~(t138));
    t140 = *((unsigned int *)t112);
    t141 = (~(t140));
    t142 = *((unsigned int *)t135);
    t143 = (~(t142));
    t144 = (t137 & t139);
    t145 = (t141 & t143);
    t146 = (~(t144));
    t147 = (~(t145));
    t148 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t148 & t146);
    t149 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t149 & t147);
    t150 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t150 & t146);
    t151 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t151 & t147);
    goto LAB67;

LAB68:    *((unsigned int *)t152) = 1;
    goto LAB71;

LAB70:    t159 = (t152 + 4);
    *((unsigned int *)t152) = 1;
    *((unsigned int *)t159) = 1;
    goto LAB71;

LAB72:    t172 = *((unsigned int *)t160);
    t173 = *((unsigned int *)t166);
    *((unsigned int *)t160) = (t172 | t173);
    t174 = (t75 + 4);
    t175 = (t152 + 4);
    t176 = *((unsigned int *)t174);
    t177 = (~(t176));
    t178 = *((unsigned int *)t75);
    t179 = (t178 & t177);
    t180 = *((unsigned int *)t175);
    t181 = (~(t180));
    t182 = *((unsigned int *)t152);
    t183 = (t182 & t181);
    t184 = (~(t179));
    t185 = (~(t183));
    t186 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t186 & t184);
    t187 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t187 & t185);
    goto LAB74;

LAB75:    *((unsigned int *)t10) = 1;
    goto LAB78;

LAB77:    t194 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t194) = 1;
    goto LAB78;

LAB79:    t199 = ((char*)((ng6)));
    goto LAB80;

LAB81:    t204 = ((char*)((ng1)));
    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t9, 32, t199, 32, t204, 32);
    goto LAB87;

LAB85:    memcpy(t9, t199, 8);
    goto LAB87;

LAB90:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB92;

LAB94:    *((unsigned int *)t10) = 1;
    goto LAB97;

LAB96:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB97;

LAB98:    t16 = (t0 + 1048U);
    t18 = *((char **)t16);
    t16 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t24 = (t18 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB102;

LAB101:    t25 = (t16 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB102;

LAB105:    if (*((unsigned int *)t18) > *((unsigned int *)t16))
        goto LAB104;

LAB103:    *((unsigned int *)t13) = 1;

LAB104:    memset(t17, 0, 8);
    t30 = (t13 + 4);
    t37 = *((unsigned int *)t30);
    t38 = (~(t37));
    t39 = *((unsigned int *)t13);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t30) != 0)
        goto LAB108;

LAB109:    t44 = *((unsigned int *)t10);
    t45 = *((unsigned int *)t17);
    t46 = (t44 & t45);
    *((unsigned int *)t31) = t46;
    t33 = (t10 + 4);
    t34 = (t17 + 4);
    t36 = (t31 + 4);
    t50 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t34);
    t52 = (t50 | t51);
    *((unsigned int *)t36) = t52;
    t53 = *((unsigned int *)t36);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB100;

LAB102:    t29 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB104;

LAB106:    *((unsigned int *)t17) = 1;
    goto LAB109;

LAB108:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB109;

LAB110:    t55 = *((unsigned int *)t31);
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t31) = (t55 | t56);
    t42 = (t10 + 4);
    t47 = (t17 + 4);
    t59 = *((unsigned int *)t10);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (~(t61));
    t63 = *((unsigned int *)t17);
    t64 = (~(t63));
    t65 = *((unsigned int *)t47);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t71 & t69);
    t72 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t72 & t70);
    t73 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t73 & t69);
    t74 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t74 & t70);
    goto LAB112;

LAB113:    xsi_set_current_line(46, ng0);

LAB116:    xsi_set_current_line(47, ng0);
    t49 = ((char*)((ng6)));
    t57 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t57, t49, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB115;

LAB118:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB120;

LAB122:    *((unsigned int *)t10) = 1;
    goto LAB125;

LAB124:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB125;

LAB126:    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t18 = (t16 + 4);
    if (*((unsigned int *)t18) != 0)
        goto LAB130;

LAB129:    t24 = (t15 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB130;

LAB133:    if (*((unsigned int *)t16) > *((unsigned int *)t15))
        goto LAB132;

LAB131:    *((unsigned int *)t13) = 1;

LAB132:    memset(t17, 0, 8);
    t29 = (t13 + 4);
    t37 = *((unsigned int *)t29);
    t38 = (~(t37));
    t39 = *((unsigned int *)t13);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t29) != 0)
        goto LAB136;

LAB137:    t44 = *((unsigned int *)t10);
    t45 = *((unsigned int *)t17);
    t46 = (t44 & t45);
    *((unsigned int *)t31) = t46;
    t32 = (t10 + 4);
    t33 = (t17 + 4);
    t34 = (t31 + 4);
    t50 = *((unsigned int *)t32);
    t51 = *((unsigned int *)t33);
    t52 = (t50 | t51);
    *((unsigned int *)t34) = t52;
    t53 = *((unsigned int *)t34);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB138;

LAB139:
LAB140:    goto LAB128;

LAB130:    t25 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB132;

LAB134:    *((unsigned int *)t17) = 1;
    goto LAB137;

LAB136:    t30 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB137;

LAB138:    t55 = *((unsigned int *)t31);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t31) = (t55 | t56);
    t36 = (t10 + 4);
    t42 = (t17 + 4);
    t59 = *((unsigned int *)t10);
    t60 = (~(t59));
    t61 = *((unsigned int *)t36);
    t62 = (~(t61));
    t63 = *((unsigned int *)t17);
    t64 = (~(t63));
    t65 = *((unsigned int *)t42);
    t66 = (~(t65));
    t8 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t8));
    t70 = (~(t67));
    t71 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t71 & t69);
    t72 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t72 & t70);
    t73 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t73 & t69);
    t74 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t74 & t70);
    goto LAB140;

LAB141:    *((unsigned int *)t35) = 1;
    goto LAB144;

LAB143:    t48 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB144;

LAB145:    t57 = (t0 + 1048U);
    t58 = *((char **)t57);
    t57 = ((char*)((ng4)));
    memset(t43, 0, 8);
    t76 = (t58 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB149;

LAB148:    t82 = (t57 + 4);
    if (*((unsigned int *)t82) != 0)
        goto LAB149;

LAB152:    if (*((unsigned int *)t58) < *((unsigned int *)t57))
        goto LAB151;

LAB150:    *((unsigned int *)t43) = 1;

LAB151:    memset(t75, 0, 8);
    t88 = (t43 + 4);
    t96 = *((unsigned int *)t88);
    t97 = (~(t96));
    t98 = *((unsigned int *)t43);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t88) != 0)
        goto LAB155;

LAB156:    t91 = (t75 + 4);
    t103 = *((unsigned int *)t75);
    t104 = *((unsigned int *)t91);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB157;

LAB158:    memcpy(t108, t75, 8);

LAB159:    memset(t112, 0, 8);
    t124 = (t108 + 4);
    t154 = *((unsigned int *)t124);
    t155 = (~(t154));
    t156 = *((unsigned int *)t108);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t124) != 0)
        goto LAB174;

LAB175:    t161 = *((unsigned int *)t35);
    t162 = *((unsigned int *)t112);
    t163 = (t161 | t162);
    *((unsigned int *)t120) = t163;
    t126 = (t35 + 4);
    t134 = (t112 + 4);
    t135 = (t120 + 4);
    t167 = *((unsigned int *)t126);
    t168 = *((unsigned int *)t134);
    t169 = (t167 | t168);
    *((unsigned int *)t135) = t169;
    t170 = *((unsigned int *)t135);
    t171 = (t170 != 0);
    if (t171 == 1)
        goto LAB176;

LAB177:
LAB178:    goto LAB147;

LAB149:    t83 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB151;

LAB153:    *((unsigned int *)t75) = 1;
    goto LAB156;

LAB155:    t89 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB156;

LAB157:    t92 = (t0 + 1048U);
    t93 = *((char **)t92);
    t92 = ((char*)((ng5)));
    memset(t90, 0, 8);
    t95 = (t93 + 4);
    if (*((unsigned int *)t95) != 0)
        goto LAB161;

LAB160:    t101 = (t92 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB161;

LAB164:    if (*((unsigned int *)t93) > *((unsigned int *)t92))
        goto LAB163;

LAB162:    *((unsigned int *)t90) = 1;

LAB163:    memset(t94, 0, 8);
    t106 = (t90 + 4);
    t114 = *((unsigned int *)t106);
    t115 = (~(t114));
    t116 = *((unsigned int *)t90);
    t117 = (t116 & t115);
    t118 = (t117 & 1U);
    if (t118 != 0)
        goto LAB165;

LAB166:    if (*((unsigned int *)t106) != 0)
        goto LAB167;

LAB168:    t121 = *((unsigned int *)t75);
    t122 = *((unsigned int *)t94);
    t123 = (t121 & t122);
    *((unsigned int *)t108) = t123;
    t109 = (t75 + 4);
    t110 = (t94 + 4);
    t111 = (t108 + 4);
    t127 = *((unsigned int *)t109);
    t128 = *((unsigned int *)t110);
    t129 = (t127 | t128);
    *((unsigned int *)t111) = t129;
    t130 = *((unsigned int *)t111);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB169;

LAB170:
LAB171:    goto LAB159;

LAB161:    t102 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB163;

LAB165:    *((unsigned int *)t94) = 1;
    goto LAB168;

LAB167:    t107 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB168;

LAB169:    t132 = *((unsigned int *)t108);
    t133 = *((unsigned int *)t111);
    *((unsigned int *)t108) = (t132 | t133);
    t113 = (t75 + 4);
    t119 = (t94 + 4);
    t136 = *((unsigned int *)t75);
    t137 = (~(t136));
    t138 = *((unsigned int *)t113);
    t139 = (~(t138));
    t140 = *((unsigned int *)t94);
    t141 = (~(t140));
    t142 = *((unsigned int *)t119);
    t143 = (~(t142));
    t68 = (t137 & t139);
    t144 = (t141 & t143);
    t146 = (~(t68));
    t147 = (~(t144));
    t148 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t148 & t146);
    t149 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t149 & t147);
    t150 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t150 & t146);
    t151 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t151 & t147);
    goto LAB171;

LAB172:    *((unsigned int *)t112) = 1;
    goto LAB175;

LAB174:    t125 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB175;

LAB176:    t172 = *((unsigned int *)t120);
    t173 = *((unsigned int *)t135);
    *((unsigned int *)t120) = (t172 | t173);
    t153 = (t35 + 4);
    t159 = (t112 + 4);
    t176 = *((unsigned int *)t153);
    t177 = (~(t176));
    t178 = *((unsigned int *)t35);
    t145 = (t178 & t177);
    t180 = *((unsigned int *)t159);
    t181 = (~(t180));
    t182 = *((unsigned int *)t112);
    t179 = (t182 & t181);
    t184 = (~(t145));
    t185 = (~(t179));
    t186 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t186 & t184);
    t187 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t187 & t185);
    goto LAB178;

LAB179:    xsi_set_current_line(51, ng0);

LAB182:    xsi_set_current_line(52, ng0);
    t165 = ((char*)((ng6)));
    t166 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t166, t165, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB181;

}


extern void work_m_00000000003238441020_2100687796_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Initial_32_1,(void *)Always_37_2};
	xsi_register_didat("work_m_00000000003238441020_2100687796", "isim/ddd_isim_beh.exe.sim/work/m_00000000003238441020_2100687796.didat");
	xsi_register_executes(pe);
}
