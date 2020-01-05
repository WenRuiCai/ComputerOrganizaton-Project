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
static const char *ng0 = "E:/CPU Project/new_string/string.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {48, 0};
static int ng5[] = {57, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {8U, 0U};
static int ng8[] = {43, 0};
static int ng9[] = {42, 0};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {4U, 0U};



static void Cont_29_0(char *t0)
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

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4184);
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
    t18 = (t0 + 4072);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_30_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_34_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4088);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}

static void Always_38_3(char *t0)
{
    char t6[8];
    char t30[8];
    char t34[8];
    char t48[8];
    char t52[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
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
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    t3 = (t0 + 3784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB63;

LAB60:    if (t18 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t6) = 1;

LAB63:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB98;

LAB95:    if (t18 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t6) = 1;

LAB98:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB135;

LAB132:    if (t18 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t6) = 1;

LAB135:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(88, ng0);

LAB167:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB138:
LAB101:
LAB66:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB24;

LAB23:    t32 = (t28 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t29) < *((unsigned int *)t28))
        goto LAB26;

LAB25:    *((unsigned int *)t30) = 1;

LAB26:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t35) != 0)
        goto LAB30;

LAB31:    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB32;

LAB33:    memcpy(t60, t34, 8);

LAB34:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB54;

LAB51:    if (t18 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;

LAB54:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(53, ng0);

LAB59:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB57:
LAB49:    goto LAB21;

LAB24:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB26;

LAB28:    *((unsigned int *)t34) = 1;
    goto LAB31;

LAB30:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB31;

LAB32:    t46 = (t0 + 1368U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng5)));
    memset(t48, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB36;

LAB35:    t50 = (t46 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t47) > *((unsigned int *)t46))
        goto LAB38;

LAB37:    *((unsigned int *)t48) = 1;

LAB38:    memset(t52, 0, 8);
    t53 = (t48 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t48);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t53) != 0)
        goto LAB42;

LAB43:    t61 = *((unsigned int *)t34);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t34 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t51 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t52) = 1;
    goto LAB43;

LAB42:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB43;

LAB44:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t34 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t34);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB46;

LAB47:    xsi_set_current_line(45, ng0);

LAB50:    xsi_set_current_line(46, ng0);
    t98 = ((char*)((ng6)));
    t99 = (t0 + 1928);
    xsi_vlogvar_assign_value(t99, t98, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB49;

LAB53:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(49, ng0);

LAB58:    xsi_set_current_line(50, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB57;

LAB62:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(58, ng0);

LAB67:    xsi_set_current_line(59, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng8)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t28);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t32);
    t43 = (t39 ^ t40);
    t44 = (t38 | t43);
    t45 = *((unsigned int *)t31);
    t54 = *((unsigned int *)t32);
    t55 = (t45 | t54);
    t56 = (~(t55));
    t57 = (t44 & t56);
    if (t57 != 0)
        goto LAB71;

LAB68:    if (t55 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t30) = 1;

LAB71:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t58 = *((unsigned int *)t35);
    t61 = (~(t58));
    t62 = *((unsigned int *)t30);
    t63 = (t62 & t61);
    t67 = (t63 & 1U);
    if (t67 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t35) != 0)
        goto LAB74;

LAB75:    t42 = (t34 + 4);
    t68 = *((unsigned int *)t34);
    t69 = (!(t68));
    t70 = *((unsigned int *)t42);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB76;

LAB77:    memcpy(t60, t34, 8);

LAB78:    t92 = (t60 + 4);
    t116 = *((unsigned int *)t92);
    t117 = (~(t116));
    t118 = *((unsigned int *)t60);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(63, ng0);

LAB94:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB92:    goto LAB66;

LAB70:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t34) = 1;
    goto LAB75;

LAB74:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB75;

LAB76:    t46 = (t0 + 1368U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng9)));
    memset(t48, 0, 8);
    t49 = (t47 + 4);
    t50 = (t46 + 4);
    t72 = *((unsigned int *)t47);
    t73 = *((unsigned int *)t46);
    t76 = (t72 ^ t73);
    t77 = *((unsigned int *)t49);
    t78 = *((unsigned int *)t50);
    t79 = (t77 ^ t78);
    t80 = (t76 | t79);
    t81 = *((unsigned int *)t49);
    t82 = *((unsigned int *)t50);
    t83 = (t81 | t82);
    t86 = (~(t83));
    t87 = (t80 & t86);
    if (t87 != 0)
        goto LAB82;

LAB79:    if (t83 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t48) = 1;

LAB82:    memset(t52, 0, 8);
    t53 = (t48 + 4);
    t88 = *((unsigned int *)t53);
    t89 = (~(t88));
    t90 = *((unsigned int *)t48);
    t91 = (t90 & t89);
    t93 = (t91 & 1U);
    if (t93 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t53) != 0)
        goto LAB85;

LAB86:    t94 = *((unsigned int *)t34);
    t95 = *((unsigned int *)t52);
    t96 = (t94 | t95);
    *((unsigned int *)t60) = t96;
    t64 = (t34 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t97 = *((unsigned int *)t64);
    t100 = *((unsigned int *)t65);
    t101 = (t97 | t100);
    *((unsigned int *)t66) = t101;
    t102 = *((unsigned int *)t66);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB87;

LAB88:
LAB89:    goto LAB78;

LAB81:    t51 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB82;

LAB83:    *((unsigned int *)t52) = 1;
    goto LAB86;

LAB85:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB86;

LAB87:    t104 = *((unsigned int *)t60);
    t105 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t104 | t105);
    t74 = (t34 + 4);
    t75 = (t52 + 4);
    t106 = *((unsigned int *)t74);
    t107 = (~(t106));
    t108 = *((unsigned int *)t34);
    t84 = (t108 & t107);
    t109 = *((unsigned int *)t75);
    t110 = (~(t109));
    t111 = *((unsigned int *)t52);
    t85 = (t111 & t110);
    t112 = (~(t84));
    t113 = (~(t85));
    t114 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t114 & t112);
    t115 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t115 & t113);
    goto LAB89;

LAB90:    xsi_set_current_line(59, ng0);

LAB93:    xsi_set_current_line(60, ng0);
    t98 = ((char*)((ng10)));
    t99 = (t0 + 1928);
    xsi_vlogvar_assign_value(t99, t98, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB92;

LAB97:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(68, ng0);

LAB102:    xsi_set_current_line(69, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB104;

LAB103:    t32 = (t28 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB104;

LAB107:    if (*((unsigned int *)t29) < *((unsigned int *)t28))
        goto LAB106;

LAB105:    *((unsigned int *)t30) = 1;

LAB106:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t35) != 0)
        goto LAB110;

LAB111:    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB112;

LAB113:    memcpy(t60, t34, 8);

LAB114:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(73, ng0);

LAB131:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB129:    goto LAB101;

LAB104:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB106;

LAB108:    *((unsigned int *)t34) = 1;
    goto LAB111;

LAB110:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB111;

LAB112:    t46 = (t0 + 1368U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng5)));
    memset(t48, 0, 8);
    t49 = (t47 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB116;

LAB115:    t50 = (t46 + 4);
    if (*((unsigned int *)t50) != 0)
        goto LAB116;

LAB119:    if (*((unsigned int *)t47) > *((unsigned int *)t46))
        goto LAB118;

LAB117:    *((unsigned int *)t48) = 1;

LAB118:    memset(t52, 0, 8);
    t53 = (t48 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t48);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t53) != 0)
        goto LAB122;

LAB123:    t61 = *((unsigned int *)t34);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t34 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB124;

LAB125:
LAB126:    goto LAB114;

LAB116:    t51 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB118;

LAB120:    *((unsigned int *)t52) = 1;
    goto LAB123;

LAB122:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB123;

LAB124:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t34 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t34);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB126;

LAB127:    xsi_set_current_line(69, ng0);

LAB130:    xsi_set_current_line(70, ng0);
    t98 = ((char*)((ng11)));
    t99 = (t0 + 1928);
    xsi_vlogvar_assign_value(t99, t98, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB129;

LAB134:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(78, ng0);

LAB139:    xsi_set_current_line(79, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng8)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t28);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t32);
    t43 = (t39 ^ t40);
    t44 = (t38 | t43);
    t45 = *((unsigned int *)t31);
    t54 = *((unsigned int *)t32);
    t55 = (t45 | t54);
    t56 = (~(t55));
    t57 = (t44 & t56);
    if (t57 != 0)
        goto LAB143;

LAB140:    if (t55 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t30) = 1;

LAB143:    memset(t34, 0, 8);
    t35 = (t30 + 4);
    t58 = *((unsigned int *)t35);
    t61 = (~(t58));
    t62 = *((unsigned int *)t30);
    t63 = (t62 & t61);
    t67 = (t63 & 1U);
    if (t67 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t35) != 0)
        goto LAB146;

LAB147:    t42 = (t34 + 4);
    t68 = *((unsigned int *)t34);
    t69 = (!(t68));
    t70 = *((unsigned int *)t42);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB148;

LAB149:    memcpy(t60, t34, 8);

LAB150:    t92 = (t60 + 4);
    t116 = *((unsigned int *)t92);
    t117 = (~(t116));
    t118 = *((unsigned int *)t60);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB162;

LAB163:    xsi_set_current_line(83, ng0);

LAB166:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB164:    goto LAB138;

LAB142:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB143;

LAB144:    *((unsigned int *)t34) = 1;
    goto LAB147;

LAB146:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB147;

LAB148:    t46 = (t0 + 1368U);
    t47 = *((char **)t46);
    t46 = ((char*)((ng9)));
    memset(t48, 0, 8);
    t49 = (t47 + 4);
    t50 = (t46 + 4);
    t72 = *((unsigned int *)t47);
    t73 = *((unsigned int *)t46);
    t76 = (t72 ^ t73);
    t77 = *((unsigned int *)t49);
    t78 = *((unsigned int *)t50);
    t79 = (t77 ^ t78);
    t80 = (t76 | t79);
    t81 = *((unsigned int *)t49);
    t82 = *((unsigned int *)t50);
    t83 = (t81 | t82);
    t86 = (~(t83));
    t87 = (t80 & t86);
    if (t87 != 0)
        goto LAB154;

LAB151:    if (t83 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t48) = 1;

LAB154:    memset(t52, 0, 8);
    t53 = (t48 + 4);
    t88 = *((unsigned int *)t53);
    t89 = (~(t88));
    t90 = *((unsigned int *)t48);
    t91 = (t90 & t89);
    t93 = (t91 & 1U);
    if (t93 != 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t53) != 0)
        goto LAB157;

LAB158:    t94 = *((unsigned int *)t34);
    t95 = *((unsigned int *)t52);
    t96 = (t94 | t95);
    *((unsigned int *)t60) = t96;
    t64 = (t34 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t97 = *((unsigned int *)t64);
    t100 = *((unsigned int *)t65);
    t101 = (t97 | t100);
    *((unsigned int *)t66) = t101;
    t102 = *((unsigned int *)t66);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB159;

LAB160:
LAB161:    goto LAB150;

LAB153:    t51 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB154;

LAB155:    *((unsigned int *)t52) = 1;
    goto LAB158;

LAB157:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB158;

LAB159:    t104 = *((unsigned int *)t60);
    t105 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t104 | t105);
    t74 = (t34 + 4);
    t75 = (t52 + 4);
    t106 = *((unsigned int *)t74);
    t107 = (~(t106));
    t108 = *((unsigned int *)t34);
    t84 = (t108 & t107);
    t109 = *((unsigned int *)t75);
    t110 = (~(t109));
    t111 = *((unsigned int *)t52);
    t85 = (t111 & t110);
    t112 = (~(t84));
    t113 = (~(t85));
    t114 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t114 & t112);
    t115 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t115 & t113);
    goto LAB161;

LAB162:    xsi_set_current_line(79, ng0);

LAB165:    xsi_set_current_line(80, ng0);
    t98 = ((char*)((ng10)));
    t99 = (t0 + 1928);
    xsi_vlogvar_assign_value(t99, t98, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB164;

}


extern void work_m_00000000003874702205_4180013079_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Initial_30_1,(void *)Always_34_2,(void *)Always_38_3};
	xsi_register_didat("work_m_00000000003874702205_4180013079", "isim/test_isim_beh.exe.sim/work/m_00000000003874702205_4180013079.didat");
	xsi_register_executes(pe);
}
