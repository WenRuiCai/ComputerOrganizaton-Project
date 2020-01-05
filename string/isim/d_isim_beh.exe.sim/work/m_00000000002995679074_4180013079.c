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
static const char *ng0 = "E:/CPU Project/string/string.v";
static int ng1[] = {0, 0};
static int ng2[] = {48, 0};
static int ng3[] = {57, 0};
static int ng4[] = {1, 0};
static int ng5[] = {43, 0};
static int ng6[] = {42, 0};



static void Cont_32_0(char *t0)
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

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4504);
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
    t18 = (t0 + 4392);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_34_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_40_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4408);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_46_3(char *t0)
{
    char t13[8];
    char t32[8];
    char t56[8];
    char t60[8];
    char t74[8];
    char t78[8];
    char t86[8];
    char t137[8];
    char t150[8];
    char t157[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    char *t191;
    char *t192;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4424);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(53, ng0);

LAB17:    xsi_set_current_line(54, ng0);
    t28 = (t0 + 2088);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB21;

LAB18:    if (t44 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t32) = 1;

LAB21:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    memset(t32, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t22) != 0)
        goto LAB61;

LAB62:    t29 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB63;

LAB64:    memcpy(t74, t32, 8);

LAB65:    t72 = (t74 + 4);
    t106 = *((unsigned int *)t72);
    t107 = (~(t106));
    t108 = *((unsigned int *)t74);
    t109 = (t108 & t107);
    t112 = (t109 != 0);
    if (t112 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB111;

LAB108:    if (t18 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t13) = 1;

LAB111:    memset(t32, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t22) != 0)
        goto LAB114;

LAB115:    t29 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB116;

LAB117:    memcpy(t74, t32, 8);

LAB118:    t72 = (t74 + 4);
    t106 = *((unsigned int *)t72);
    t107 = (~(t106));
    t108 = *((unsigned int *)t74);
    t109 = (t108 & t107);
    t112 = (t109 != 0);
    if (t112 > 0)
        goto LAB130;

LAB131:
LAB132:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB166;

LAB163:    if (t18 != 0)
        goto LAB165;

LAB164:    *((unsigned int *)t13) = 1;

LAB166:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB167;

LAB168:
LAB169:    goto LAB16;

LAB20:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(54, ng0);

LAB25:    xsi_set_current_line(55, ng0);
    t54 = (t0 + 1048U);
    t55 = *((char **)t54);
    t54 = ((char*)((ng2)));
    memset(t56, 0, 8);
    t57 = (t55 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB27;

LAB26:    t58 = (t54 + 4);
    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t55) < *((unsigned int *)t54))
        goto LAB29;

LAB28:    *((unsigned int *)t56) = 1;

LAB29:    memset(t60, 0, 8);
    t61 = (t56 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t56);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t61) != 0)
        goto LAB33;

LAB34:    t68 = (t60 + 4);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t68);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB35;

LAB36:    memcpy(t86, t60, 8);

LAB37:    t118 = (t86 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t86);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(58, ng0);

LAB54:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB52:    goto LAB24;

LAB27:    t59 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t60) = 1;
    goto LAB34;

LAB33:    t67 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB34;

LAB35:    t72 = (t0 + 1048U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng3)));
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB39;

LAB38:    t76 = (t72 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t73) > *((unsigned int *)t72))
        goto LAB41;

LAB40:    *((unsigned int *)t74) = 1;

LAB41:    memset(t78, 0, 8);
    t79 = (t74 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t74);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t79) != 0)
        goto LAB45;

LAB46:    t87 = *((unsigned int *)t60);
    t88 = *((unsigned int *)t78);
    t89 = (t87 & t88);
    *((unsigned int *)t86) = t89;
    t90 = (t60 + 4);
    t91 = (t78 + 4);
    t92 = (t86 + 4);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB37;

LAB39:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB41;

LAB43:    *((unsigned int *)t78) = 1;
    goto LAB46;

LAB45:    t85 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB46;

LAB47:    t98 = *((unsigned int *)t86);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t86) = (t98 | t99);
    t100 = (t60 + 4);
    t101 = (t78 + 4);
    t102 = *((unsigned int *)t60);
    t103 = (~(t102));
    t104 = *((unsigned int *)t100);
    t105 = (~(t104));
    t106 = *((unsigned int *)t78);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (~(t108));
    t110 = (t103 & t105);
    t111 = (t107 & t109);
    t112 = (~(t110));
    t113 = (~(t111));
    t114 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t114 & t112);
    t115 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t115 & t113);
    t116 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t116 & t112);
    t117 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t117 & t113);
    goto LAB49;

LAB50:    xsi_set_current_line(55, ng0);

LAB53:    xsi_set_current_line(56, ng0);
    t124 = ((char*)((ng4)));
    t125 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t125, t124, 0, 0, 1, 0LL);
    goto LAB52;

LAB57:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t32) = 1;
    goto LAB62;

LAB61:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB62;

LAB63:    t30 = (t0 + 2248);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t47 = (t33 + 4);
    t48 = (t34 + 4);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t47);
    t42 = *((unsigned int *)t48);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t48);
    t49 = (t45 | t46);
    t50 = (~(t49));
    t51 = (t44 & t50);
    if (t51 != 0)
        goto LAB69;

LAB66:    if (t49 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t56) = 1;

LAB69:    memset(t60, 0, 8);
    t55 = (t56 + 4);
    t52 = *((unsigned int *)t55);
    t53 = (~(t52));
    t62 = *((unsigned int *)t56);
    t63 = (t62 & t53);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t55) != 0)
        goto LAB72;

LAB73:    t65 = *((unsigned int *)t32);
    t66 = *((unsigned int *)t60);
    t69 = (t65 & t66);
    *((unsigned int *)t74) = t69;
    t58 = (t32 + 4);
    t59 = (t60 + 4);
    t61 = (t74 + 4);
    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t59);
    t80 = (t70 | t71);
    *((unsigned int *)t61) = t80;
    t81 = *((unsigned int *)t61);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB65;

LAB68:    t54 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t60) = 1;
    goto LAB73;

LAB72:    t57 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB73;

LAB74:    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t74) = (t83 | t84);
    t67 = (t32 + 4);
    t68 = (t60 + 4);
    t87 = *((unsigned int *)t32);
    t88 = (~(t87));
    t89 = *((unsigned int *)t67);
    t93 = (~(t89));
    t94 = *((unsigned int *)t60);
    t95 = (~(t94));
    t96 = *((unsigned int *)t68);
    t97 = (~(t96));
    t110 = (t88 & t93);
    t111 = (t95 & t97);
    t98 = (~(t110));
    t99 = (~(t111));
    t102 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t102 & t98);
    t103 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t103 & t99);
    t104 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t104 & t98);
    t105 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t105 & t99);
    goto LAB76;

LAB77:    xsi_set_current_line(62, ng0);

LAB80:    xsi_set_current_line(63, ng0);
    t73 = (t0 + 1048U);
    t75 = *((char **)t73);
    t73 = ((char*)((ng5)));
    memset(t78, 0, 8);
    t76 = (t75 + 4);
    t77 = (t73 + 4);
    t113 = *((unsigned int *)t75);
    t114 = *((unsigned int *)t73);
    t115 = (t113 ^ t114);
    t116 = *((unsigned int *)t76);
    t117 = *((unsigned int *)t77);
    t119 = (t116 ^ t117);
    t120 = (t115 | t119);
    t121 = *((unsigned int *)t76);
    t122 = *((unsigned int *)t77);
    t123 = (t121 | t122);
    t126 = (~(t123));
    t127 = (t120 & t126);
    if (t127 != 0)
        goto LAB84;

LAB81:    if (t123 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t78) = 1;

LAB84:    memset(t86, 0, 8);
    t85 = (t78 + 4);
    t128 = *((unsigned int *)t85);
    t129 = (~(t128));
    t130 = *((unsigned int *)t78);
    t131 = (t130 & t129);
    t132 = (t131 & 1U);
    if (t132 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t85) != 0)
        goto LAB87;

LAB88:    t91 = (t86 + 4);
    t133 = *((unsigned int *)t86);
    t134 = (!(t133));
    t135 = *((unsigned int *)t91);
    t136 = (t134 || t135);
    if (t136 > 0)
        goto LAB89;

LAB90:    memcpy(t157, t86, 8);

LAB91:    t185 = (t157 + 4);
    t186 = *((unsigned int *)t185);
    t187 = (~(t186));
    t188 = *((unsigned int *)t157);
    t189 = (t188 & t187);
    t190 = (t189 != 0);
    if (t190 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(66, ng0);

LAB107:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB105:    goto LAB79;

LAB83:    t79 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t86) = 1;
    goto LAB88;

LAB87:    t90 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB88;

LAB89:    t92 = (t0 + 1048U);
    t100 = *((char **)t92);
    t92 = ((char*)((ng6)));
    memset(t137, 0, 8);
    t101 = (t100 + 4);
    t118 = (t92 + 4);
    t138 = *((unsigned int *)t100);
    t139 = *((unsigned int *)t92);
    t140 = (t138 ^ t139);
    t141 = *((unsigned int *)t101);
    t142 = *((unsigned int *)t118);
    t143 = (t141 ^ t142);
    t144 = (t140 | t143);
    t145 = *((unsigned int *)t101);
    t146 = *((unsigned int *)t118);
    t147 = (t145 | t146);
    t148 = (~(t147));
    t149 = (t144 & t148);
    if (t149 != 0)
        goto LAB95;

LAB92:    if (t147 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t137) = 1;

LAB95:    memset(t150, 0, 8);
    t125 = (t137 + 4);
    t151 = *((unsigned int *)t125);
    t152 = (~(t151));
    t153 = *((unsigned int *)t137);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t125) != 0)
        goto LAB98;

LAB99:    t158 = *((unsigned int *)t86);
    t159 = *((unsigned int *)t150);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = (t86 + 4);
    t162 = (t150 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB91;

LAB94:    t124 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t150) = 1;
    goto LAB99;

LAB98:    t156 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB99;

LAB100:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t86 + 4);
    t172 = (t150 + 4);
    t173 = *((unsigned int *)t171);
    t174 = (~(t173));
    t175 = *((unsigned int *)t86);
    t176 = (t175 & t174);
    t177 = *((unsigned int *)t172);
    t178 = (~(t177));
    t179 = *((unsigned int *)t150);
    t180 = (t179 & t178);
    t181 = (~(t176));
    t182 = (~(t180));
    t183 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t183 & t181);
    t184 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t184 & t182);
    goto LAB102;

LAB103:    xsi_set_current_line(63, ng0);

LAB106:    xsi_set_current_line(64, ng0);
    t191 = ((char*)((ng4)));
    t192 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t192, t191, 0, 0, 1, 0LL);
    goto LAB105;

LAB110:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB111;

LAB112:    *((unsigned int *)t32) = 1;
    goto LAB115;

LAB114:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB115;

LAB116:    t30 = (t0 + 1928);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t47 = (t33 + 4);
    t48 = (t34 + 4);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t47);
    t42 = *((unsigned int *)t48);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t48);
    t49 = (t45 | t46);
    t50 = (~(t49));
    t51 = (t44 & t50);
    if (t51 != 0)
        goto LAB122;

LAB119:    if (t49 != 0)
        goto LAB121;

LAB120:    *((unsigned int *)t56) = 1;

LAB122:    memset(t60, 0, 8);
    t55 = (t56 + 4);
    t52 = *((unsigned int *)t55);
    t53 = (~(t52));
    t62 = *((unsigned int *)t56);
    t63 = (t62 & t53);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t55) != 0)
        goto LAB125;

LAB126:    t65 = *((unsigned int *)t32);
    t66 = *((unsigned int *)t60);
    t69 = (t65 & t66);
    *((unsigned int *)t74) = t69;
    t58 = (t32 + 4);
    t59 = (t60 + 4);
    t61 = (t74 + 4);
    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t59);
    t80 = (t70 | t71);
    *((unsigned int *)t61) = t80;
    t81 = *((unsigned int *)t61);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB127;

LAB128:
LAB129:    goto LAB118;

LAB121:    t54 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB122;

LAB123:    *((unsigned int *)t60) = 1;
    goto LAB126;

LAB125:    t57 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB126;

LAB127:    t83 = *((unsigned int *)t74);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t74) = (t83 | t84);
    t67 = (t32 + 4);
    t68 = (t60 + 4);
    t87 = *((unsigned int *)t32);
    t88 = (~(t87));
    t89 = *((unsigned int *)t67);
    t93 = (~(t89));
    t94 = *((unsigned int *)t60);
    t95 = (~(t94));
    t96 = *((unsigned int *)t68);
    t97 = (~(t96));
    t110 = (t88 & t93);
    t111 = (t95 & t97);
    t98 = (~(t110));
    t99 = (~(t111));
    t102 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t102 & t98);
    t103 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t103 & t99);
    t104 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t104 & t98);
    t105 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t105 & t99);
    goto LAB129;

LAB130:    xsi_set_current_line(71, ng0);

LAB133:    xsi_set_current_line(72, ng0);
    t73 = (t0 + 1048U);
    t75 = *((char **)t73);
    t73 = ((char*)((ng2)));
    memset(t78, 0, 8);
    t76 = (t75 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB135;

LAB134:    t77 = (t73 + 4);
    if (*((unsigned int *)t77) != 0)
        goto LAB135;

LAB138:    if (*((unsigned int *)t75) < *((unsigned int *)t73))
        goto LAB137;

LAB136:    *((unsigned int *)t78) = 1;

LAB137:    memset(t86, 0, 8);
    t85 = (t78 + 4);
    t113 = *((unsigned int *)t85);
    t114 = (~(t113));
    t115 = *((unsigned int *)t78);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB139;

LAB140:    if (*((unsigned int *)t85) != 0)
        goto LAB141;

LAB142:    t91 = (t86 + 4);
    t119 = *((unsigned int *)t86);
    t120 = *((unsigned int *)t91);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB143;

LAB144:    memcpy(t157, t86, 8);

LAB145:    t185 = (t157 + 4);
    t155 = *((unsigned int *)t185);
    t158 = (~(t155));
    t159 = *((unsigned int *)t157);
    t160 = (t159 & t158);
    t164 = (t160 != 0);
    if (t164 > 0)
        goto LAB158;

LAB159:    xsi_set_current_line(75, ng0);

LAB162:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB160:    goto LAB132;

LAB135:    t79 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB137;

LAB139:    *((unsigned int *)t86) = 1;
    goto LAB142;

LAB141:    t90 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB142;

LAB143:    t92 = (t0 + 1048U);
    t100 = *((char **)t92);
    t92 = ((char*)((ng3)));
    memset(t137, 0, 8);
    t101 = (t100 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB147;

LAB146:    t118 = (t92 + 4);
    if (*((unsigned int *)t118) != 0)
        goto LAB147;

LAB150:    if (*((unsigned int *)t100) > *((unsigned int *)t92))
        goto LAB149;

LAB148:    *((unsigned int *)t137) = 1;

LAB149:    memset(t150, 0, 8);
    t125 = (t137 + 4);
    t122 = *((unsigned int *)t125);
    t123 = (~(t122));
    t126 = *((unsigned int *)t137);
    t127 = (t126 & t123);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t125) != 0)
        goto LAB153;

LAB154:    t129 = *((unsigned int *)t86);
    t130 = *((unsigned int *)t150);
    t131 = (t129 & t130);
    *((unsigned int *)t157) = t131;
    t161 = (t86 + 4);
    t162 = (t150 + 4);
    t163 = (t157 + 4);
    t132 = *((unsigned int *)t161);
    t133 = *((unsigned int *)t162);
    t134 = (t132 | t133);
    *((unsigned int *)t163) = t134;
    t135 = *((unsigned int *)t163);
    t136 = (t135 != 0);
    if (t136 == 1)
        goto LAB155;

LAB156:
LAB157:    goto LAB145;

LAB147:    t124 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB149;

LAB151:    *((unsigned int *)t150) = 1;
    goto LAB154;

LAB153:    t156 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB154;

LAB155:    t138 = *((unsigned int *)t157);
    t139 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t138 | t139);
    t171 = (t86 + 4);
    t172 = (t150 + 4);
    t140 = *((unsigned int *)t86);
    t141 = (~(t140));
    t142 = *((unsigned int *)t171);
    t143 = (~(t142));
    t144 = *((unsigned int *)t150);
    t145 = (~(t144));
    t146 = *((unsigned int *)t172);
    t147 = (~(t146));
    t176 = (t141 & t143);
    t180 = (t145 & t147);
    t148 = (~(t176));
    t149 = (~(t180));
    t151 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t151 & t148);
    t152 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t152 & t149);
    t153 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t153 & t148);
    t154 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t154 & t149);
    goto LAB157;

LAB158:    xsi_set_current_line(72, ng0);

LAB161:    xsi_set_current_line(73, ng0);
    t191 = ((char*)((ng4)));
    t192 = (t0 + 1928);
    xsi_vlogvar_assign_value(t192, t191, 0, 0, 1);
    goto LAB160;

LAB165:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB166;

LAB167:    xsi_set_current_line(81, ng0);

LAB170:    xsi_set_current_line(82, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t30 = (t29 + 4);
    t31 = (t28 + 4);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t28);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t31);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB174;

LAB171:    if (t44 != 0)
        goto LAB173;

LAB172:    *((unsigned int *)t32) = 1;

LAB174:    memset(t56, 0, 8);
    t34 = (t32 + 4);
    t49 = *((unsigned int *)t34);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t34) != 0)
        goto LAB177;

LAB178:    t48 = (t56 + 4);
    t62 = *((unsigned int *)t56);
    t63 = (!(t62));
    t64 = *((unsigned int *)t48);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB179;

LAB180:    memcpy(t78, t56, 8);

LAB181:    t77 = (t78 + 4);
    t123 = *((unsigned int *)t77);
    t126 = (~(t123));
    t127 = *((unsigned int *)t78);
    t128 = (t127 & t126);
    t129 = (t128 != 0);
    if (t129 > 0)
        goto LAB193;

LAB194:    xsi_set_current_line(85, ng0);

LAB197:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB195:    goto LAB169;

LAB173:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB174;

LAB175:    *((unsigned int *)t56) = 1;
    goto LAB178;

LAB177:    t47 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB178;

LAB179:    t54 = (t0 + 1048U);
    t55 = *((char **)t54);
    t54 = ((char*)((ng6)));
    memset(t60, 0, 8);
    t57 = (t55 + 4);
    t58 = (t54 + 4);
    t66 = *((unsigned int *)t55);
    t69 = *((unsigned int *)t54);
    t70 = (t66 ^ t69);
    t71 = *((unsigned int *)t57);
    t80 = *((unsigned int *)t58);
    t81 = (t71 ^ t80);
    t82 = (t70 | t81);
    t83 = *((unsigned int *)t57);
    t84 = *((unsigned int *)t58);
    t87 = (t83 | t84);
    t88 = (~(t87));
    t89 = (t82 & t88);
    if (t89 != 0)
        goto LAB185;

LAB182:    if (t87 != 0)
        goto LAB184;

LAB183:    *((unsigned int *)t60) = 1;

LAB185:    memset(t74, 0, 8);
    t61 = (t60 + 4);
    t93 = *((unsigned int *)t61);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t61) != 0)
        goto LAB188;

LAB189:    t98 = *((unsigned int *)t56);
    t99 = *((unsigned int *)t74);
    t102 = (t98 | t99);
    *((unsigned int *)t78) = t102;
    t68 = (t56 + 4);
    t72 = (t74 + 4);
    t73 = (t78 + 4);
    t103 = *((unsigned int *)t68);
    t104 = *((unsigned int *)t72);
    t105 = (t103 | t104);
    *((unsigned int *)t73) = t105;
    t106 = *((unsigned int *)t73);
    t107 = (t106 != 0);
    if (t107 == 1)
        goto LAB190;

LAB191:
LAB192:    goto LAB181;

LAB184:    t59 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB185;

LAB186:    *((unsigned int *)t74) = 1;
    goto LAB189;

LAB188:    t67 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB189;

LAB190:    t108 = *((unsigned int *)t78);
    t109 = *((unsigned int *)t73);
    *((unsigned int *)t78) = (t108 | t109);
    t75 = (t56 + 4);
    t76 = (t74 + 4);
    t112 = *((unsigned int *)t75);
    t113 = (~(t112));
    t114 = *((unsigned int *)t56);
    t110 = (t114 & t113);
    t115 = *((unsigned int *)t76);
    t116 = (~(t115));
    t117 = *((unsigned int *)t74);
    t111 = (t117 & t116);
    t119 = (~(t110));
    t120 = (~(t111));
    t121 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t121 & t119);
    t122 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t122 & t120);
    goto LAB192;

LAB193:    xsi_set_current_line(82, ng0);

LAB196:    xsi_set_current_line(83, ng0);
    t79 = ((char*)((ng1)));
    t85 = (t0 + 1928);
    xsi_vlogvar_assign_value(t85, t79, 0, 0, 1);
    goto LAB195;

}


extern void work_m_00000000002995679074_4180013079_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Initial_34_1,(void *)Always_40_2,(void *)Always_46_3};
	xsi_register_didat("work_m_00000000002995679074_4180013079", "isim/d_isim_beh.exe.sim/work/m_00000000002995679074_4180013079.didat");
	xsi_register_executes(pe);
}
