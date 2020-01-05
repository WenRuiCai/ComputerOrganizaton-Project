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

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4080);
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
    t18 = (t0 + 3984);
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

LAB1:    return;
}

static void Always_40_2(char *t0)
{
    char t8[8];
    char t32[8];
    char t36[8];
    char t50[8];
    char t54[8];
    char t62[8];
    char t121[8];
    char t133[8];
    char t149[8];
    char t157[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
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
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
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
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t150;
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

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB45;

LAB42:    if (t20 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t8) = 1;

LAB45:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t10) != 0)
        goto LAB48;

LAB49:    t24 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t24);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB50;

LAB51:    memcpy(t54, t32, 8);

LAB52:    t61 = (t54 + 4);
    t104 = *((unsigned int *)t61);
    t105 = (~(t104));
    t106 = *((unsigned int *)t54);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB126;

LAB123:    if (t20 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t8) = 1;

LAB126:    memset(t32, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t10) != 0)
        goto LAB129;

LAB130:    t24 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t24);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB131;

LAB132:    memcpy(t54, t32, 8);

LAB133:    t61 = (t54 + 4);
    t104 = *((unsigned int *)t61);
    t105 = (~(t104));
    t106 = *((unsigned int *)t54);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB145;

LAB146:
LAB147:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB181;

LAB178:    if (t20 != 0)
        goto LAB180;

LAB179:    *((unsigned int *)t8) = 1;

LAB181:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB182;

LAB183:
LAB184:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(41, ng0);

LAB13:    xsi_set_current_line(42, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t33 = (t31 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB15;

LAB14:    t34 = (t30 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t31) < *((unsigned int *)t30))
        goto LAB17;

LAB16:    *((unsigned int *)t32) = 1;

LAB17:    memset(t36, 0, 8);
    t37 = (t32 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t37) != 0)
        goto LAB21;

LAB22:    t44 = (t36 + 4);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t44);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB23;

LAB24:    memcpy(t62, t36, 8);

LAB25:    t94 = (t62 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t62);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB12;

LAB15:    t35 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB17;

LAB19:    *((unsigned int *)t36) = 1;
    goto LAB22;

LAB21:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB22;

LAB23:    t48 = (t0 + 1048U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng3)));
    memset(t50, 0, 8);
    t51 = (t49 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB27;

LAB26:    t52 = (t48 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t49) > *((unsigned int *)t48))
        goto LAB29;

LAB28:    *((unsigned int *)t50) = 1;

LAB29:    memset(t54, 0, 8);
    t55 = (t50 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t50);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t55) != 0)
        goto LAB33;

LAB34:    t63 = *((unsigned int *)t36);
    t64 = *((unsigned int *)t54);
    t65 = (t63 & t64);
    *((unsigned int *)t62) = t65;
    t66 = (t36 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB25;

LAB27:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t54) = 1;
    goto LAB34;

LAB33:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB34;

LAB35:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t36 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t36);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t92 & t88);
    t93 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t93 & t89);
    goto LAB37;

LAB38:    xsi_set_current_line(42, ng0);

LAB41:    xsi_set_current_line(43, ng0);
    t100 = ((char*)((ng4)));
    t101 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    goto LAB40;

LAB44:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t32) = 1;
    goto LAB49;

LAB48:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB49;

LAB50:    t30 = (t0 + 2248);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t35 = (t33 + 4);
    t37 = (t34 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t34);
    t45 = (t41 ^ t42);
    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t37);
    t56 = (t46 ^ t47);
    t57 = (t45 | t56);
    t58 = *((unsigned int *)t35);
    t59 = *((unsigned int *)t37);
    t60 = (t58 | t59);
    t63 = (~(t60));
    t64 = (t57 & t63);
    if (t64 != 0)
        goto LAB56;

LAB53:    if (t60 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t36) = 1;

LAB56:    memset(t50, 0, 8);
    t44 = (t36 + 4);
    t65 = *((unsigned int *)t44);
    t69 = (~(t65));
    t70 = *((unsigned int *)t36);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t44) != 0)
        goto LAB59;

LAB60:    t73 = *((unsigned int *)t32);
    t74 = *((unsigned int *)t50);
    t75 = (t73 & t74);
    *((unsigned int *)t54) = t75;
    t49 = (t32 + 4);
    t51 = (t50 + 4);
    t52 = (t54 + 4);
    t78 = *((unsigned int *)t49);
    t79 = *((unsigned int *)t51);
    t80 = (t78 | t79);
    *((unsigned int *)t52) = t80;
    t81 = *((unsigned int *)t52);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB52;

LAB55:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t50) = 1;
    goto LAB60;

LAB59:    t48 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB60;

LAB61:    t83 = *((unsigned int *)t54);
    t84 = *((unsigned int *)t52);
    *((unsigned int *)t54) = (t83 | t84);
    t53 = (t32 + 4);
    t55 = (t50 + 4);
    t85 = *((unsigned int *)t32);
    t88 = (~(t85));
    t89 = *((unsigned int *)t53);
    t90 = (~(t89));
    t91 = *((unsigned int *)t50);
    t92 = (~(t91));
    t93 = *((unsigned int *)t55);
    t95 = (~(t93));
    t86 = (t88 & t90);
    t87 = (t92 & t95);
    t96 = (~(t86));
    t97 = (~(t87));
    t98 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t98 & t96);
    t99 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t99 & t97);
    t102 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t102 & t96);
    t103 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t103 & t97);
    goto LAB63;

LAB64:    xsi_set_current_line(46, ng0);

LAB67:    xsi_set_current_line(47, ng0);
    t66 = (t0 + 1048U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng5)));
    memset(t62, 0, 8);
    t68 = (t67 + 4);
    t76 = (t66 + 4);
    t109 = *((unsigned int *)t67);
    t110 = *((unsigned int *)t66);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t68);
    t113 = *((unsigned int *)t76);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t68);
    t117 = *((unsigned int *)t76);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB71;

LAB68:    if (t118 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t62) = 1;

LAB71:    memset(t121, 0, 8);
    t94 = (t62 + 4);
    t122 = *((unsigned int *)t94);
    t123 = (~(t122));
    t124 = *((unsigned int *)t62);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t94) != 0)
        goto LAB74;

LAB75:    t101 = (t121 + 4);
    t127 = *((unsigned int *)t121);
    t128 = (!(t127));
    t129 = *((unsigned int *)t101);
    t130 = (t128 || t129);
    if (t130 > 0)
        goto LAB76;

LAB77:    memcpy(t157, t121, 8);

LAB78:    t185 = (t157 + 4);
    t186 = *((unsigned int *)t185);
    t187 = (~(t186));
    t188 = *((unsigned int *)t157);
    t189 = (t188 & t187);
    t190 = (t189 != 0);
    if (t190 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB95;

LAB94:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB97;

LAB96:    *((unsigned int *)t8) = 1;

LAB97:    memset(t32, 0, 8);
    t7 = (t8 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t7) != 0)
        goto LAB101;

LAB102:    t10 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t10);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB103;

LAB104:    memcpy(t54, t32, 8);

LAB105:    t51 = (t54 + 4);
    t73 = *((unsigned int *)t51);
    t74 = (~(t73));
    t75 = *((unsigned int *)t54);
    t78 = (t75 & t74);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(53, ng0);

LAB122:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB120:
LAB92:    goto LAB66;

LAB70:    t77 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t121) = 1;
    goto LAB75;

LAB74:    t100 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB75;

LAB76:    t131 = (t0 + 1048U);
    t132 = *((char **)t131);
    t131 = ((char*)((ng6)));
    memset(t133, 0, 8);
    t134 = (t132 + 4);
    t135 = (t131 + 4);
    t136 = *((unsigned int *)t132);
    t137 = *((unsigned int *)t131);
    t138 = (t136 ^ t137);
    t139 = *((unsigned int *)t134);
    t140 = *((unsigned int *)t135);
    t141 = (t139 ^ t140);
    t142 = (t138 | t141);
    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t135);
    t145 = (t143 | t144);
    t146 = (~(t145));
    t147 = (t142 & t146);
    if (t147 != 0)
        goto LAB82;

LAB79:    if (t145 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t133) = 1;

LAB82:    memset(t149, 0, 8);
    t150 = (t133 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t133);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t150) != 0)
        goto LAB85;

LAB86:    t158 = *((unsigned int *)t121);
    t159 = *((unsigned int *)t149);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = (t121 + 4);
    t162 = (t149 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB78;

LAB81:    t148 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t149) = 1;
    goto LAB86;

LAB85:    t156 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB86;

LAB87:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t121 + 4);
    t172 = (t149 + 4);
    t173 = *((unsigned int *)t171);
    t174 = (~(t173));
    t175 = *((unsigned int *)t121);
    t176 = (t175 & t174);
    t177 = *((unsigned int *)t172);
    t178 = (~(t177));
    t179 = *((unsigned int *)t149);
    t180 = (t179 & t178);
    t181 = (~(t176));
    t182 = (~(t180));
    t183 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t183 & t181);
    t184 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t184 & t182);
    goto LAB89;

LAB90:    xsi_set_current_line(47, ng0);

LAB93:    xsi_set_current_line(48, ng0);
    t191 = ((char*)((ng4)));
    t192 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t192, t191, 0, 0, 1, 0LL);
    goto LAB92;

LAB95:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB97;

LAB99:    *((unsigned int *)t32) = 1;
    goto LAB102;

LAB101:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB102;

LAB103:    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t30 = (t24 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB107;

LAB106:    t31 = (t23 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t24) > *((unsigned int *)t23))
        goto LAB109;

LAB108:    *((unsigned int *)t36) = 1;

LAB109:    memset(t50, 0, 8);
    t34 = (t36 + 4);
    t19 = *((unsigned int *)t34);
    t20 = (~(t19));
    t21 = *((unsigned int *)t36);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t34) != 0)
        goto LAB113;

LAB114:    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t50);
    t28 = (t26 & t27);
    *((unsigned int *)t54) = t28;
    t37 = (t32 + 4);
    t43 = (t50 + 4);
    t44 = (t54 + 4);
    t29 = *((unsigned int *)t37);
    t38 = *((unsigned int *)t43);
    t39 = (t29 | t38);
    *((unsigned int *)t44) = t39;
    t40 = *((unsigned int *)t44);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB115;

LAB116:
LAB117:    goto LAB105;

LAB107:    t33 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB109;

LAB111:    *((unsigned int *)t50) = 1;
    goto LAB114;

LAB113:    t35 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB114;

LAB115:    t42 = *((unsigned int *)t54);
    t45 = *((unsigned int *)t44);
    *((unsigned int *)t54) = (t42 | t45);
    t48 = (t32 + 4);
    t49 = (t50 + 4);
    t46 = *((unsigned int *)t32);
    t47 = (~(t46));
    t56 = *((unsigned int *)t48);
    t57 = (~(t56));
    t58 = *((unsigned int *)t50);
    t59 = (~(t58));
    t60 = *((unsigned int *)t49);
    t63 = (~(t60));
    t86 = (t47 & t57);
    t87 = (t59 & t63);
    t64 = (~(t86));
    t65 = (~(t87));
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t64);
    t70 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t70 & t65);
    t71 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t71 & t64);
    t72 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t72 & t65);
    goto LAB117;

LAB118:    xsi_set_current_line(50, ng0);

LAB121:    xsi_set_current_line(51, ng0);
    t52 = ((char*)((ng1)));
    t53 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    goto LAB120;

LAB125:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t32) = 1;
    goto LAB130;

LAB129:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB130;

LAB131:    t30 = (t0 + 1928);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t35 = (t33 + 4);
    t37 = (t34 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t34);
    t45 = (t41 ^ t42);
    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t37);
    t56 = (t46 ^ t47);
    t57 = (t45 | t56);
    t58 = *((unsigned int *)t35);
    t59 = *((unsigned int *)t37);
    t60 = (t58 | t59);
    t63 = (~(t60));
    t64 = (t57 & t63);
    if (t64 != 0)
        goto LAB137;

LAB134:    if (t60 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t36) = 1;

LAB137:    memset(t50, 0, 8);
    t44 = (t36 + 4);
    t65 = *((unsigned int *)t44);
    t69 = (~(t65));
    t70 = *((unsigned int *)t36);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t44) != 0)
        goto LAB140;

LAB141:    t73 = *((unsigned int *)t32);
    t74 = *((unsigned int *)t50);
    t75 = (t73 & t74);
    *((unsigned int *)t54) = t75;
    t49 = (t32 + 4);
    t51 = (t50 + 4);
    t52 = (t54 + 4);
    t78 = *((unsigned int *)t49);
    t79 = *((unsigned int *)t51);
    t80 = (t78 | t79);
    *((unsigned int *)t52) = t80;
    t81 = *((unsigned int *)t52);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB142;

LAB143:
LAB144:    goto LAB133;

LAB136:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB137;

LAB138:    *((unsigned int *)t50) = 1;
    goto LAB141;

LAB140:    t48 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB141;

LAB142:    t83 = *((unsigned int *)t54);
    t84 = *((unsigned int *)t52);
    *((unsigned int *)t54) = (t83 | t84);
    t53 = (t32 + 4);
    t55 = (t50 + 4);
    t85 = *((unsigned int *)t32);
    t88 = (~(t85));
    t89 = *((unsigned int *)t53);
    t90 = (~(t89));
    t91 = *((unsigned int *)t50);
    t92 = (~(t91));
    t93 = *((unsigned int *)t55);
    t95 = (~(t93));
    t86 = (t88 & t90);
    t87 = (t92 & t95);
    t96 = (~(t86));
    t97 = (~(t87));
    t98 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t98 & t96);
    t99 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t99 & t97);
    t102 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t102 & t96);
    t103 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t103 & t97);
    goto LAB144;

LAB145:    xsi_set_current_line(57, ng0);

LAB148:    xsi_set_current_line(58, ng0);
    t66 = (t0 + 1048U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng2)));
    memset(t62, 0, 8);
    t68 = (t67 + 4);
    if (*((unsigned int *)t68) != 0)
        goto LAB150;

LAB149:    t76 = (t66 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB150;

LAB153:    if (*((unsigned int *)t67) < *((unsigned int *)t66))
        goto LAB152;

LAB151:    *((unsigned int *)t62) = 1;

LAB152:    memset(t121, 0, 8);
    t94 = (t62 + 4);
    t109 = *((unsigned int *)t94);
    t110 = (~(t109));
    t111 = *((unsigned int *)t62);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB154;

LAB155:    if (*((unsigned int *)t94) != 0)
        goto LAB156;

LAB157:    t101 = (t121 + 4);
    t114 = *((unsigned int *)t121);
    t115 = *((unsigned int *)t101);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB158;

LAB159:    memcpy(t157, t121, 8);

LAB160:    t185 = (t157 + 4);
    t155 = *((unsigned int *)t185);
    t158 = (~(t155));
    t159 = *((unsigned int *)t157);
    t160 = (t159 & t158);
    t164 = (t160 != 0);
    if (t164 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(61, ng0);

LAB177:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB175:    goto LAB147;

LAB150:    t77 = (t62 + 4);
    *((unsigned int *)t62) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB152;

LAB154:    *((unsigned int *)t121) = 1;
    goto LAB157;

LAB156:    t100 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB157;

LAB158:    t131 = (t0 + 1048U);
    t132 = *((char **)t131);
    t131 = ((char*)((ng3)));
    memset(t133, 0, 8);
    t134 = (t132 + 4);
    if (*((unsigned int *)t134) != 0)
        goto LAB162;

LAB161:    t135 = (t131 + 4);
    if (*((unsigned int *)t135) != 0)
        goto LAB162;

LAB165:    if (*((unsigned int *)t132) > *((unsigned int *)t131))
        goto LAB164;

LAB163:    *((unsigned int *)t133) = 1;

LAB164:    memset(t149, 0, 8);
    t150 = (t133 + 4);
    t117 = *((unsigned int *)t150);
    t118 = (~(t117));
    t119 = *((unsigned int *)t133);
    t120 = (t119 & t118);
    t122 = (t120 & 1U);
    if (t122 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t150) != 0)
        goto LAB168;

LAB169:    t123 = *((unsigned int *)t121);
    t124 = *((unsigned int *)t149);
    t125 = (t123 & t124);
    *((unsigned int *)t157) = t125;
    t161 = (t121 + 4);
    t162 = (t149 + 4);
    t163 = (t157 + 4);
    t126 = *((unsigned int *)t161);
    t127 = *((unsigned int *)t162);
    t128 = (t126 | t127);
    *((unsigned int *)t163) = t128;
    t129 = *((unsigned int *)t163);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB170;

LAB171:
LAB172:    goto LAB160;

LAB162:    t148 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t148) = 1;
    goto LAB164;

LAB166:    *((unsigned int *)t149) = 1;
    goto LAB169;

LAB168:    t156 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB169;

LAB170:    t136 = *((unsigned int *)t157);
    t137 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t136 | t137);
    t171 = (t121 + 4);
    t172 = (t149 + 4);
    t138 = *((unsigned int *)t121);
    t139 = (~(t138));
    t140 = *((unsigned int *)t171);
    t141 = (~(t140));
    t142 = *((unsigned int *)t149);
    t143 = (~(t142));
    t144 = *((unsigned int *)t172);
    t145 = (~(t144));
    t176 = (t139 & t141);
    t180 = (t143 & t145);
    t146 = (~(t176));
    t147 = (~(t180));
    t151 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t151 & t146);
    t152 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t152 & t147);
    t153 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t153 & t146);
    t154 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t154 & t147);
    goto LAB172;

LAB173:    xsi_set_current_line(58, ng0);

LAB176:    xsi_set_current_line(59, ng0);
    t191 = ((char*)((ng4)));
    t192 = (t0 + 1928);
    xsi_vlogvar_assign_value(t192, t191, 0, 0, 1);
    goto LAB175;

LAB180:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB181;

LAB182:    xsi_set_current_line(66, ng0);

LAB185:    xsi_set_current_line(67, ng0);
    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t30 = (t24 + 4);
    t31 = (t23 + 4);
    t38 = *((unsigned int *)t24);
    t39 = *((unsigned int *)t23);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t31);
    t45 = (t41 ^ t42);
    t46 = (t40 | t45);
    t47 = *((unsigned int *)t30);
    t56 = *((unsigned int *)t31);
    t57 = (t47 | t56);
    t58 = (~(t57));
    t59 = (t46 & t58);
    if (t59 != 0)
        goto LAB189;

LAB186:    if (t57 != 0)
        goto LAB188;

LAB187:    *((unsigned int *)t32) = 1;

LAB189:    memset(t36, 0, 8);
    t34 = (t32 + 4);
    t60 = *((unsigned int *)t34);
    t63 = (~(t60));
    t64 = *((unsigned int *)t32);
    t65 = (t64 & t63);
    t69 = (t65 & 1U);
    if (t69 != 0)
        goto LAB190;

LAB191:    if (*((unsigned int *)t34) != 0)
        goto LAB192;

LAB193:    t37 = (t36 + 4);
    t70 = *((unsigned int *)t36);
    t71 = (!(t70));
    t72 = *((unsigned int *)t37);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB194;

LAB195:    memcpy(t62, t36, 8);

LAB196:    t76 = (t62 + 4);
    t118 = *((unsigned int *)t76);
    t119 = (~(t118));
    t120 = *((unsigned int *)t62);
    t122 = (t120 & t119);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB208;

LAB209:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB213;

LAB212:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB213;

LAB216:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB215;

LAB214:    *((unsigned int *)t8) = 1;

LAB215:    memset(t32, 0, 8);
    t7 = (t8 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB217;

LAB218:    if (*((unsigned int *)t7) != 0)
        goto LAB219;

LAB220:    t10 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = *((unsigned int *)t10);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB221;

LAB222:    memcpy(t54, t32, 8);

LAB223:    t51 = (t54 + 4);
    t73 = *((unsigned int *)t51);
    t74 = (~(t73));
    t75 = *((unsigned int *)t54);
    t78 = (t75 & t74);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB236;

LAB237:    xsi_set_current_line(73, ng0);

LAB240:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB238:
LAB210:    goto LAB184;

LAB188:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB189;

LAB190:    *((unsigned int *)t36) = 1;
    goto LAB193;

LAB192:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB193;

LAB194:    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    t43 = ((char*)((ng6)));
    memset(t50, 0, 8);
    t48 = (t44 + 4);
    t49 = (t43 + 4);
    t74 = *((unsigned int *)t44);
    t75 = *((unsigned int *)t43);
    t78 = (t74 ^ t75);
    t79 = *((unsigned int *)t48);
    t80 = *((unsigned int *)t49);
    t81 = (t79 ^ t80);
    t82 = (t78 | t81);
    t83 = *((unsigned int *)t48);
    t84 = *((unsigned int *)t49);
    t85 = (t83 | t84);
    t88 = (~(t85));
    t89 = (t82 & t88);
    if (t89 != 0)
        goto LAB200;

LAB197:    if (t85 != 0)
        goto LAB199;

LAB198:    *((unsigned int *)t50) = 1;

LAB200:    memset(t54, 0, 8);
    t52 = (t50 + 4);
    t90 = *((unsigned int *)t52);
    t91 = (~(t90));
    t92 = *((unsigned int *)t50);
    t93 = (t92 & t91);
    t95 = (t93 & 1U);
    if (t95 != 0)
        goto LAB201;

LAB202:    if (*((unsigned int *)t52) != 0)
        goto LAB203;

LAB204:    t96 = *((unsigned int *)t36);
    t97 = *((unsigned int *)t54);
    t98 = (t96 | t97);
    *((unsigned int *)t62) = t98;
    t55 = (t36 + 4);
    t61 = (t54 + 4);
    t66 = (t62 + 4);
    t99 = *((unsigned int *)t55);
    t102 = *((unsigned int *)t61);
    t103 = (t99 | t102);
    *((unsigned int *)t66) = t103;
    t104 = *((unsigned int *)t66);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB205;

LAB206:
LAB207:    goto LAB196;

LAB199:    t51 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB200;

LAB201:    *((unsigned int *)t54) = 1;
    goto LAB204;

LAB203:    t53 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB204;

LAB205:    t106 = *((unsigned int *)t62);
    t107 = *((unsigned int *)t66);
    *((unsigned int *)t62) = (t106 | t107);
    t67 = (t36 + 4);
    t68 = (t54 + 4);
    t108 = *((unsigned int *)t67);
    t109 = (~(t108));
    t110 = *((unsigned int *)t36);
    t86 = (t110 & t109);
    t111 = *((unsigned int *)t68);
    t112 = (~(t111));
    t113 = *((unsigned int *)t54);
    t87 = (t113 & t112);
    t114 = (~(t86));
    t115 = (~(t87));
    t116 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t116 & t114);
    t117 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t117 & t115);
    goto LAB207;

LAB208:    xsi_set_current_line(67, ng0);

LAB211:    xsi_set_current_line(68, ng0);
    t77 = ((char*)((ng1)));
    t94 = (t0 + 1928);
    xsi_vlogvar_assign_value(t94, t77, 0, 0, 1);
    goto LAB210;

LAB213:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB215;

LAB217:    *((unsigned int *)t32) = 1;
    goto LAB220;

LAB219:    t9 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB220;

LAB221:    t23 = (t0 + 1048U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng3)));
    memset(t36, 0, 8);
    t30 = (t24 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB225;

LAB224:    t31 = (t23 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB225;

LAB228:    if (*((unsigned int *)t24) > *((unsigned int *)t23))
        goto LAB227;

LAB226:    *((unsigned int *)t36) = 1;

LAB227:    memset(t50, 0, 8);
    t34 = (t36 + 4);
    t19 = *((unsigned int *)t34);
    t20 = (~(t19));
    t21 = *((unsigned int *)t36);
    t22 = (t21 & t20);
    t25 = (t22 & 1U);
    if (t25 != 0)
        goto LAB229;

LAB230:    if (*((unsigned int *)t34) != 0)
        goto LAB231;

LAB232:    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t50);
    t28 = (t26 & t27);
    *((unsigned int *)t54) = t28;
    t37 = (t32 + 4);
    t43 = (t50 + 4);
    t44 = (t54 + 4);
    t29 = *((unsigned int *)t37);
    t38 = *((unsigned int *)t43);
    t39 = (t29 | t38);
    *((unsigned int *)t44) = t39;
    t40 = *((unsigned int *)t44);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB233;

LAB234:
LAB235:    goto LAB223;

LAB225:    t33 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB227;

LAB229:    *((unsigned int *)t50) = 1;
    goto LAB232;

LAB231:    t35 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB232;

LAB233:    t42 = *((unsigned int *)t54);
    t45 = *((unsigned int *)t44);
    *((unsigned int *)t54) = (t42 | t45);
    t48 = (t32 + 4);
    t49 = (t50 + 4);
    t46 = *((unsigned int *)t32);
    t47 = (~(t46));
    t56 = *((unsigned int *)t48);
    t57 = (~(t56));
    t58 = *((unsigned int *)t50);
    t59 = (~(t58));
    t60 = *((unsigned int *)t49);
    t63 = (~(t60));
    t86 = (t47 & t57);
    t87 = (t59 & t63);
    t64 = (~(t86));
    t65 = (~(t87));
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t64);
    t70 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t70 & t65);
    t71 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t71 & t64);
    t72 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t72 & t65);
    goto LAB235;

LAB236:    xsi_set_current_line(70, ng0);

LAB239:    xsi_set_current_line(71, ng0);
    t52 = ((char*)((ng4)));
    t53 = (t0 + 1928);
    xsi_vlogvar_assign_value(t53, t52, 0, 0, 1);
    goto LAB238;

}


extern void work_m_00000000001486805968_2100687796_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Initial_34_1,(void *)Always_40_2};
	xsi_register_didat("work_m_00000000001486805968_2100687796", "isim/ssss_isim_beh.exe.sim/work/m_00000000001486805968_2100687796.didat");
	xsi_register_executes(pe);
}
