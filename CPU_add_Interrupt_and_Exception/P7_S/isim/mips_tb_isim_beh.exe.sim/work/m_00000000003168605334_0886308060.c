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
static const char *ng0 = "E:/CPU Project/P7_S/P7_S/ALU.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {9U, 0U};
static unsigned int ng5[] = {10U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};



static void Cont_50_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3184U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 6336);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t3, 8);
    xsi_driver_vfirst_trans(t26, 0, 31);
    t31 = (t0 + 6208);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 4224);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 3904);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t18, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_52_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
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
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;

LAB0:    t1 = (t0 + 5392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4064);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3904);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t11) = t18;
    memset(t19, 0, 8);
    t20 = (t6 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t10);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB5;

LAB4:    if (t31 != 0)
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t35 = (t19 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t19);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t35) != 0)
        goto LAB10;

LAB11:    t42 = (t4 + 4);
    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB12;

LAB13:    t47 = *((unsigned int *)t4);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t42) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t51, 8);

LAB20:    t52 = (t0 + 6400);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t56, 0, 8);
    t57 = 1U;
    t58 = t57;
    t59 = (t3 + 4);
    t60 = *((unsigned int *)t3);
    t57 = (t57 & t60);
    t61 = *((unsigned int *)t59);
    t58 = (t58 & t61);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 | t57);
    t64 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t64 | t58);
    xsi_driver_vfirst_trans(t52, 0, 0);
    t65 = (t0 + 6224);
    *((int *)t65) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB6:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t41 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t46 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t51 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t46, 1, t51, 1);
    goto LAB20;

LAB18:    memcpy(t3, t46, 8);
    goto LAB20;

}

static void Always_55_2(char *t0)
{
    char t10[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 5640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6240);
    *((int *)t2) = 1;
    t3 = (t0 + 5672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3024U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(57, ng0);
    t7 = (t0 + 2704U);
    t8 = *((char **)t7);
    t7 = (t0 + 2864U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t8, 32, t9, 5);
    t7 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2704U);
    t4 = *((char **)t3);
    t3 = (t0 + 2864U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 32, 0LL);
    goto LAB13;

LAB11:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2704U);
    t4 = *((char **)t3);
    t3 = (t0 + 2864U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_signed_arith_rshift(t11, 32, t4, 32, t7, 5);
    t3 = (t0 + 4224);
    xsi_vlogvar_wait_assign_value(t3, t11, 0, 0, 32, 0LL);
    goto LAB13;

}

static void Always_63_3(char *t0)
{
    char t7[16];
    char t10[8];
    char t12[8];
    char t20[16];
    char t23[8];
    char t25[8];
    char t33[16];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
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

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6256);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 3024U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);
    t8 = (t0 + 2544U);
    t9 = *((char **)t8);
    t8 = (t0 + 2544U);
    t11 = *((char **)t8);
    memset(t12, 0, 8);
    t8 = (t12 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t8) = t19;
    xsi_vlogtype_concat(t10, 1, 1, 1U, t12, 1);
    xsi_vlogtype_concat(t7, 33, 33, 2U, t10, 1, t9, 32);
    t21 = (t0 + 2704U);
    t22 = *((char **)t21);
    t21 = (t0 + 2704U);
    t24 = *((char **)t21);
    memset(t25, 0, 8);
    t21 = (t25 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t21) = t32;
    xsi_vlogtype_concat(t23, 1, 1, 1U, t25, 1);
    xsi_vlogtype_concat(t20, 33, 33, 2U, t23, 1, t22, 32);
    xsi_vlog_unsigned_add(t33, 33, t7, 33, t20, 33);
    t34 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 32, 0LL);
    t35 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t35, t33, 32, 0, 1, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2544U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t9 = (t8 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t3) = t19;
    xsi_vlogtype_concat(t10, 1, 1, 1U, t12, 1);
    xsi_vlogtype_concat(t7, 33, 33, 2U, t10, 1, t4, 32);
    t11 = (t0 + 2704U);
    t13 = *((char **)t11);
    t11 = (t0 + 2704U);
    t21 = *((char **)t11);
    memset(t25, 0, 8);
    t11 = (t25 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t22);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t11) = t32;
    xsi_vlogtype_concat(t23, 1, 1, 1U, t25, 1);
    xsi_vlogtype_concat(t20, 33, 33, 2U, t23, 1, t13, 32);
    xsi_vlog_unsigned_minus(t33, 33, t7, 33, t20, 33);
    t24 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t24, t33, 0, 0, 32, 0LL);
    t26 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t26, t33, 32, 0, 1, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    *((unsigned int *)t11) = t19;
    t27 = *((unsigned int *)t11);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB30;

LAB31:
LAB32:    t22 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t22, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t8);
    t16 = (t14 & t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    *((unsigned int *)t11) = t19;
    t27 = *((unsigned int *)t11);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB33;

LAB34:
LAB35:    t22 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t22, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    *((unsigned int *)t10) = t16;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    *((unsigned int *)t11) = t19;
    t27 = *((unsigned int *)t11);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB36;

LAB37:
LAB38:    t13 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t13, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t12) = t16;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t11 = (t12 + 4);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    *((unsigned int *)t11) = t19;
    t27 = *((unsigned int *)t11);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB39;

LAB40:
LAB41:    memset(t10, 0, 8);
    t22 = (t10 + 4);
    t24 = (t12 + 4);
    t46 = *((unsigned int *)t12);
    t47 = (~(t46));
    *((unsigned int *)t10) = t47;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB43;

LAB42:    t52 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & 4294967295U);
    t26 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t26, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    memset(t54, 0, 8);
    xsi_vlog_signed_less(t54, 32, t4, 32, t8, 32);
    memset(t12, 0, 8);
    t3 = (t54 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t54);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t3) != 0)
        goto LAB46;

LAB47:    t11 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    t27 = *((unsigned int *)t11);
    t28 = (t19 || t27);
    if (t28 > 0)
        goto LAB48;

LAB49:    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t11) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t12) > 0)
        goto LAB54;

LAB55:    memcpy(t10, t21, 8);

LAB56:    t22 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t22, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2544U);
    t4 = *((char **)t3);
    t3 = (t0 + 2704U);
    t8 = *((char **)t3);
    memset(t54, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB58;

LAB57:    t9 = (t8 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB58;

LAB61:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB59;

LAB60:    memset(t12, 0, 8);
    t13 = (t54 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t54);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t13) != 0)
        goto LAB64;

LAB65:    t22 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    t27 = *((unsigned int *)t22);
    t28 = (t19 || t27);
    if (t28 > 0)
        goto LAB66;

LAB67:    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t22);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t22) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t12) > 0)
        goto LAB72;

LAB73:    memcpy(t10, t26, 8);

LAB74:    t34 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t34, t10, 0, 0, 32, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2704U);
    t4 = *((char **)t3);
    t3 = (t0 + 2544U);
    t8 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t9 = (t8 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 31U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 31U);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t4, 32, t10, 5);
    t11 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2704U);
    t4 = *((char **)t3);
    t3 = (t0 + 2544U);
    t8 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t9 = (t8 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 31U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 31U);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 32, t4, 32, t10, 5);
    t11 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 32, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2704U);
    t4 = *((char **)t3);
    t3 = (t0 + 2544U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t9 = (t8 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t3) = t17;
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t18 & 31U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 31U);
    memset(t23, 0, 8);
    xsi_vlog_signed_arith_rshift(t23, 32, t4, 32, t12, 5);
    t11 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t11, t23, 0, 0, 32, 0LL);
    goto LAB29;

LAB30:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t29 | t30);
    t13 = (t4 + 4);
    t21 = (t8 + 4);
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t36 = *((unsigned int *)t4);
    t37 = (t36 & t32);
    t38 = *((unsigned int *)t21);
    t39 = (~(t38));
    t40 = *((unsigned int *)t8);
    t41 = (t40 & t39);
    t42 = (~(t37));
    t43 = (~(t41));
    t44 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t44 & t42);
    t45 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t45 & t43);
    goto LAB32;

LAB33:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t29 | t30);
    t13 = (t4 + 4);
    t21 = (t8 + 4);
    t31 = *((unsigned int *)t4);
    t32 = (~(t31));
    t36 = *((unsigned int *)t13);
    t38 = (~(t36));
    t39 = *((unsigned int *)t8);
    t40 = (~(t39));
    t42 = *((unsigned int *)t21);
    t43 = (~(t42));
    t37 = (t32 & t38);
    t41 = (t40 & t43);
    t44 = (~(t37));
    t45 = (~(t41));
    t46 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t46 & t44);
    t47 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t47 & t45);
    t48 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t48 & t44);
    t49 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t49 & t45);
    goto LAB35;

LAB36:    t29 = *((unsigned int *)t10);
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t29 | t30);
    goto LAB38;

LAB39:    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t12) = (t29 | t30);
    t13 = (t4 + 4);
    t21 = (t8 + 4);
    t31 = *((unsigned int *)t13);
    t32 = (~(t31));
    t36 = *((unsigned int *)t4);
    t37 = (t36 & t32);
    t38 = *((unsigned int *)t21);
    t39 = (~(t38));
    t40 = *((unsigned int *)t8);
    t41 = (t40 & t39);
    t42 = (~(t37));
    t43 = (~(t41));
    t44 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t44 & t42);
    t45 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t45 & t43);
    goto LAB41;

LAB43:    t48 = *((unsigned int *)t10);
    t49 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t48 | t49);
    t50 = *((unsigned int *)t22);
    t51 = *((unsigned int *)t24);
    *((unsigned int *)t22) = (t50 | t51);
    goto LAB42;

LAB44:    *((unsigned int *)t12) = 1;
    goto LAB47;

LAB46:    t9 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB47;

LAB48:    t13 = ((char*)((ng1)));
    goto LAB49;

LAB50:    t21 = ((char*)((ng2)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t10, 32, t13, 32, t21, 32);
    goto LAB56;

LAB54:    memcpy(t10, t13, 8);
    goto LAB56;

LAB58:    t11 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB60;

LAB59:    *((unsigned int *)t54) = 1;
    goto LAB60;

LAB62:    *((unsigned int *)t12) = 1;
    goto LAB65;

LAB64:    t21 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB65;

LAB66:    t24 = ((char*)((ng1)));
    goto LAB67;

LAB68:    t26 = ((char*)((ng2)));
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t26, 32);
    goto LAB74;

LAB72:    memcpy(t10, t24, 8);
    goto LAB74;

}


extern void work_m_00000000003168605334_0886308060_init()
{
	static char *pe[] = {(void *)Cont_50_0,(void *)Cont_52_1,(void *)Always_55_2,(void *)Always_63_3};
	xsi_register_didat("work_m_00000000003168605334_0886308060", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003168605334_0886308060.didat");
	xsi_register_executes(pe);
}
