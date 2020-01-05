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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/ISE_project/P7_S/P7_S/Timer.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {538382885U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static int ng8[] = {1, 0};



static void Cont_66_0(char *t0)
{
    char t5[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
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
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 1932);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t16);
    t20 = (t18 & t19);
    *((unsigned int *)t17) = t20;
    t21 = (t5 + 4);
    t22 = (t16 + 4);
    t23 = (t17 + 4);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB4;

LAB5:
LAB6:    t49 = (t0 + 3752);
    t50 = (t49 + 32U);
    t51 = *((char **)t50);
    t52 = (t51 + 40U);
    t53 = *((char **)t52);
    memset(t53, 0, 8);
    t54 = 1U;
    t55 = t54;
    t56 = (t17 + 4);
    t57 = *((unsigned int *)t17);
    t54 = (t54 & t57);
    t58 = *((unsigned int *)t56);
    t55 = (t55 & t58);
    t59 = (t53 + 4);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 | t54);
    t61 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t61 | t55);
    xsi_driver_vfirst_trans(t49, 0, 0);
    t62 = (t0 + 3660);
    *((int *)t62) = 1;

LAB1:    return;
LAB4:    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t17) = (t29 | t30);
    t31 = (t5 + 4);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t5);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t16);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = (t34 & t36);
    t42 = (t38 & t40);
    t43 = (~(t41));
    t44 = (~(t42));
    t45 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t45 & t43);
    t46 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t46 & t44);
    t47 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t47 & t43);
    t48 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t48 & t44);
    goto LAB6;

}

static void Cont_70_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t20[8];
    char t21[8];
    char t22[8];
    char t39[8];
    char t40[8];
    char t43[8];
    char t64[8];
    char t65[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 784U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t2))
        goto LAB6;

LAB4:    t7 = (t5 + 4);
    t8 = (t2 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB6:    memset(t4, 0, 8);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t9) != 0)
        goto LAB9;

LAB10:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB11;

LAB12:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t16);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t16) > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t4) > 0)
        goto LAB17;

LAB18:    memcpy(t3, t39, 8);

LAB19:    t90 = (t0 + 3788);
    t91 = (t90 + 32U);
    t92 = *((char **)t91);
    t93 = (t92 + 40U);
    t94 = *((char **)t93);
    memcpy(t94, t3, 8);
    xsi_driver_vfirst_trans(t90, 0, 31);
    t95 = (t0 + 3668);
    *((int *)t95) = 1;

LAB1:    return;
LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB9:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB10;

LAB11:    t23 = (t0 + 1380);
    t24 = (t23 + 36U);
    t25 = *((char **)t24);
    memset(t22, 0, 8);
    t26 = (t22 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t22) = t29;
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t32 & 15U);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 & 15U);
    xsi_vlogtype_concat(t21, 4, 4, 1U, t22, 4);
    t34 = ((char*)((ng1)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t34, 28, t21, 4);
    goto LAB12;

LAB13:    t41 = (t0 + 784U);
    t42 = *((char **)t41);
    t41 = ((char*)((ng2)));
    memset(t43, 0, 8);
    if (*((unsigned int *)t42) != *((unsigned int *)t41))
        goto LAB22;

LAB20:    t44 = (t42 + 4);
    t45 = (t41 + 4);
    if (*((unsigned int *)t44) != *((unsigned int *)t45))
        goto LAB22;

LAB21:    *((unsigned int *)t43) = 1;

LAB22:    memset(t40, 0, 8);
    t46 = (t43 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t43);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t46) != 0)
        goto LAB25;

LAB26:    t53 = (t40 + 4);
    t54 = *((unsigned int *)t40);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB27;

LAB28:    t60 = *((unsigned int *)t40);
    t61 = (~(t60));
    t62 = *((unsigned int *)t53);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t53) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t40) > 0)
        goto LAB33;

LAB34:    memcpy(t39, t64, 8);

LAB35:    goto LAB14;

LAB15:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t39, 32);
    goto LAB19;

LAB17:    memcpy(t3, t20, 8);
    goto LAB19;

LAB23:    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB25:    t52 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB26;

LAB27:    t57 = (t0 + 1472);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    goto LAB28;

LAB29:    t66 = (t0 + 784U);
    t67 = *((char **)t66);
    t66 = ((char*)((ng3)));
    memset(t68, 0, 8);
    if (*((unsigned int *)t67) != *((unsigned int *)t66))
        goto LAB38;

LAB36:    t69 = (t67 + 4);
    t70 = (t66 + 4);
    if (*((unsigned int *)t69) != *((unsigned int *)t70))
        goto LAB38;

LAB37:    *((unsigned int *)t68) = 1;

LAB38:    memset(t65, 0, 8);
    t71 = (t68 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t68);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t71) != 0)
        goto LAB41;

LAB42:    t78 = (t65 + 4);
    t79 = *((unsigned int *)t65);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB43;

LAB44:    t85 = *((unsigned int *)t65);
    t86 = (~(t85));
    t87 = *((unsigned int *)t78);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t78) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t65) > 0)
        goto LAB49;

LAB50:    memcpy(t64, t89, 8);

LAB51:    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t39, 32, t59, 32, t64, 32);
    goto LAB35;

LAB33:    memcpy(t39, t59, 8);
    goto LAB35;

LAB39:    *((unsigned int *)t65) = 1;
    goto LAB42;

LAB41:    t77 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB42;

LAB43:    t82 = (t0 + 1564);
    t83 = (t82 + 36U);
    t84 = *((char **)t83);
    goto LAB44;

LAB45:    t89 = ((char*)((ng4)));
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t64, 32, t84, 32, t89, 32);
    goto LAB51;

LAB49:    memcpy(t64, t84, 8);
    goto LAB51;

}

static void Initial_75_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(75, ng0);

LAB2:    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 3, 0LL);
    xsi_set_current_line(80, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_85_3(char *t0)
{
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
    int t13;

LAB0:    t1 = (t0 + 2888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3676);
    *((int *)t2) = 1;
    t3 = (t0 + 2916);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(87, ng0);

LAB9:    xsi_set_current_line(88, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(99, ng0);

LAB13:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB15:    xsi_set_current_line(101, ng0);
    t11 = (t0 + 968U);
    t12 = *((char **)t11);
    t11 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB19;

LAB17:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 968U);
    t4 = *((char **)t3);
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB19;

}

static void Always_108_4(char *t0)
{
    char t4[8];
    char t27[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3684);
    *((int *)t2) = 1;
    t3 = (t0 + 3060);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB5:    xsi_set_current_line(109, ng0);
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(109, ng0);

LAB13:    xsi_set_current_line(110, ng0);
    t19 = (t0 + 1656);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);

LAB14:    t22 = ((char*)((ng1)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 3, t22, 3);
    if (t23 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t23 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t23 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t23 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t23 = xsi_vlog_unsigned_case_compare(t21, 3, t2, 3);
    if (t23 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(112, ng0);

LAB26:    xsi_set_current_line(113, ng0);
    t24 = (t0 + 1380);
    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 0);
    t32 = (t31 & 1);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 0);
    t35 = (t34 & 1);
    *((unsigned int *)t28) = t35;
    t36 = (t27 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t27);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(120, ng0);

LAB31:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB29:    goto LAB25;

LAB17:    xsi_set_current_line(125, ng0);

LAB32:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(132, ng0);

LAB33:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 1564);
    t5 = (t3 + 36U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB35;

LAB34:    t19 = (t12 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t6) > *((unsigned int *)t12))
        goto LAB37;

LAB36:    *((unsigned int *)t4) = 1;

LAB37:    t22 = (t4 + 4);
    t7 = *((unsigned int *)t22);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(149, ng0);

LAB57:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB41:    goto LAB25;

LAB21:    xsi_set_current_line(154, ng0);

LAB58:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    t5 = (t0 + 1380);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t23 = (!(t7));
    if (t23 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB23:    xsi_set_current_line(160, ng0);

LAB61:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(114, ng0);

LAB30:    xsi_set_current_line(115, ng0);
    t42 = ((char*)((ng2)));
    t43 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 3, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB35:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(134, ng0);

LAB42:    xsi_set_current_line(135, ng0);
    t24 = (t0 + 1380);
    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t28 = (t27 + 4);
    t29 = (t26 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (t14 >> 1);
    *((unsigned int *)t27) = t15;
    t16 = *((unsigned int *)t29);
    t17 = (t16 >> 1);
    *((unsigned int *)t28) = t17;
    t18 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t18 & 3U);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 & 3U);
    t36 = ((char*)((ng1)));
    memset(t44, 0, 8);
    if (*((unsigned int *)t27) != *((unsigned int *)t36))
        goto LAB45;

LAB43:    t42 = (t27 + 4);
    t43 = (t36 + 4);
    if (*((unsigned int *)t42) != *((unsigned int *)t43))
        goto LAB45;

LAB44:    *((unsigned int *)t44) = 1;

LAB45:    t45 = (t44 + 4);
    t31 = *((unsigned int *)t45);
    t32 = (~(t31));
    t33 = *((unsigned int *)t44);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 3U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 3U);
    t13 = ((char*)((ng2)));
    memset(t27, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t13))
        goto LAB52;

LAB50:    t19 = (t4 + 4);
    t20 = (t13 + 4);
    if (*((unsigned int *)t19) != *((unsigned int *)t20))
        goto LAB52;

LAB51:    *((unsigned int *)t27) = 1;

LAB52:    t22 = (t27 + 4);
    t15 = *((unsigned int *)t22);
    t16 = (~(t15));
    t17 = *((unsigned int *)t27);
    t18 = (t17 & t16);
    t30 = (t18 != 0);
    if (t30 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB48:    goto LAB41;

LAB46:    xsi_set_current_line(136, ng0);

LAB49:    xsi_set_current_line(137, ng0);
    t46 = ((char*)((ng6)));
    t47 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t47, t46, 0, 0, 3, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB53:    xsi_set_current_line(142, ng0);

LAB56:    xsi_set_current_line(143, ng0);
    t24 = ((char*)((ng7)));
    t25 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 3, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB59:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB60;

}

static void Always_171_5(char *t0)
{
    char t4[8];
    char t32[8];
    char t59[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;

LAB0:    t1 = (t0 + 3176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3692);
    *((int *)t2) = 1;
    t3 = (t0 + 3204);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(171, ng0);

LAB5:    xsi_set_current_line(172, ng0);
    t5 = (t0 + 876U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(172, ng0);

LAB13:    xsi_set_current_line(173, ng0);
    t19 = (t0 + 1748);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(178, ng0);

LAB18:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 1840);
    t19 = (t13 + 36U);
    t20 = *((char **)t19);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t20);
    t17 = (t15 & t16);
    *((unsigned int *)t32) = t17;
    t21 = (t4 + 4);
    t22 = (t20 + 4);
    t28 = (t32 + 4);
    t18 = *((unsigned int *)t21);
    t23 = *((unsigned int *)t22);
    t24 = (t18 | t23);
    *((unsigned int *)t28) = t24;
    t25 = *((unsigned int *)t28);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB19;

LAB20:
LAB21:    t31 = (t32 + 4);
    t50 = *((unsigned int *)t31);
    t51 = (~(t50));
    t52 = *((unsigned int *)t32);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB22;

LAB23:
LAB24:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(174, ng0);

LAB17:    xsi_set_current_line(175, ng0);
    t28 = (t0 + 1472);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 32, 0LL);
    goto LAB16;

LAB19:    t27 = *((unsigned int *)t32);
    t33 = *((unsigned int *)t28);
    *((unsigned int *)t32) = (t27 | t33);
    t29 = (t4 + 4);
    t30 = (t20 + 4);
    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (~(t38));
    t40 = *((unsigned int *)t30);
    t41 = (~(t40));
    t42 = (t35 & t37);
    t43 = (t39 & t41);
    t44 = (~(t42));
    t45 = (~(t43));
    t46 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t46 & t44);
    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & t45);
    t48 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t48 & t44);
    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & t45);
    goto LAB21;

LAB22:    xsi_set_current_line(180, ng0);

LAB25:    xsi_set_current_line(181, ng0);
    t55 = (t0 + 1564);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = ((char*)((ng5)));
    memset(t59, 0, 8);
    t60 = (t57 + 4);
    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB26:    t61 = (t58 + 4);
    if (*((unsigned int *)t61) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t57) > *((unsigned int *)t58))
        goto LAB28;

LAB29:    t63 = (t59 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB24;

LAB27:    t62 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t59) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(182, ng0);
    t69 = (t0 + 1564);
    t70 = (t69 + 36U);
    t71 = *((char **)t70);
    t72 = ((char*)((ng8)));
    memset(t73, 0, 8);
    xsi_vlog_unsigned_minus(t73, 32, t71, 32, t72, 32);
    t74 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t74, t73, 0, 0, 32, 0LL);
    goto LAB33;

}

static void Always_189_6(char *t0)
{
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
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

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3700);
    *((int *)t2) = 1;
    t3 = (t0 + 3348);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(189, ng0);

LAB5:    xsi_set_current_line(190, ng0);
    t5 = (t0 + 1380);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    memset(t4, 0, 8);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t8);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t17) == 0)
        goto LAB6;

LAB8:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;

LAB9:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(191, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_195_7(char *t0)
{
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
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

LAB0:    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(195, ng0);
    t2 = (t0 + 3708);
    *((int *)t2) = 1;
    t3 = (t0 + 3492);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(195, ng0);

LAB5:    xsi_set_current_line(196, ng0);
    t5 = (t0 + 1380);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    memset(t4, 0, 8);
    t17 = (t8 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t8);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t17) == 0)
        goto LAB6;

LAB8:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;

LAB9:    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(197, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

}


extern void work_m_00000000002330046691_2782103923_init()
{
	static char *pe[] = {(void *)Cont_66_0,(void *)Cont_70_1,(void *)Initial_75_2,(void *)Always_85_3,(void *)Always_108_4,(void *)Always_171_5,(void *)Always_189_6,(void *)Always_195_7};
	xsi_register_didat("work_m_00000000002330046691_2782103923", "isim/MIPS_System_tb_isim_beh.exe.sim/work/m_00000000002330046691_2782103923.didat");
	xsi_register_executes(pe);
}
