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
static const char *ng0 = "E:/CPU Project/Single_Turn_CPU/DataMemory.v";
static int ng1[] = {0, 0};
static int ng2[] = {1024, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {0U, 0U};
static const char *ng7 = "@%h: *%h <= %h";



static void Initial_40_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB6:    xsi_set_current_line(43, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3528);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3528);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Cont_47_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 5624);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 5512);
    *((int *)t48) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 3048);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t40 = (t0 + 2888);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_49_2(char *t0)
{
    char t10[8];
    char t19[8];
    char t28[8];
    char t29[8];
    char t31[8];
    char t32[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    char *t30;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5528);
    *((int *)t2) = 1;
    t3 = (t0 + 4976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2728);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 1528U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng4)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_rshift(t19, 12, t18, 12, t17, 32);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t13, t16, 2, 1, t19, 12, 2);
    t20 = (t0 + 3048);
    xsi_vlogvar_assign_value(t20, t10, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(54, ng0);

LAB14:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (t21 >> 0);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 0);
    *((unsigned int *)t3) = t24;
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 3U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 3U);
    xsi_vlogtype_concat(t10, 32, 2, 1U, t19, 2);

LAB15:    t8 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t10, 32, t8, 32);
    if (t27 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 32, t2, 32);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 32, t2, 32);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 32, t2, 32);
    if (t6 == 1)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng6)));
    xsi_vlogtype_concat(t19, 32, 32, 2U, t7, 24, t4, 8);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t19, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(68, ng0);

LAB25:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (t21 >> 0);
    *((unsigned int *)t28) = t22;
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 0);
    *((unsigned int *)t3) = t24;
    t25 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t25 & 3U);
    t26 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t26 & 3U);
    xsi_vlogtype_concat(t19, 32, 2, 1U, t28, 2);

LAB26:    t8 = ((char*)((ng1)));
    t27 = xsi_vlog_unsigned_case_compare(t19, 32, t8, 32);
    if (t27 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t19, 32, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng6)));
    xsi_vlogtype_concat(t28, 32, 32, 2U, t7, 16, t4, 16);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t28, 0, 0, 32);
    goto LAB13;

LAB16:    xsi_set_current_line(57, ng0);
    t9 = (t0 + 2728);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 2728);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2728);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 1528U);
    t30 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 12, t30, 12, t20, 32);
    xsi_vlog_generic_get_array_select_value(t29, 32, t12, t15, t18, 2, 1, t31, 12, 2);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t29);
    t36 = (t35 >> 0);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 255U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 255U);
    xsi_vlogtype_concat(t28, 8, 8, 1U, t32, 8);
    t41 = (t0 + 3208);
    xsi_vlogvar_assign_value(t41, t28, 0, 0, 8);
    goto LAB24;

LAB18:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = (t0 + 2728);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_rshift(t29, 12, t16, 12, t15, 32);
    xsi_vlog_generic_get_array_select_value(t28, 32, t7, t11, t14, 2, 1, t29, 12, 2);
    memset(t31, 0, 8);
    t17 = (t31 + 4);
    t18 = (t28 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (t21 >> 8);
    *((unsigned int *)t31) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 8);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t25 & 255U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 255U);
    xsi_vlogtype_concat(t19, 8, 8, 1U, t31, 8);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 8);
    goto LAB24;

LAB20:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = (t0 + 2728);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_rshift(t29, 12, t16, 12, t15, 32);
    xsi_vlog_generic_get_array_select_value(t28, 32, t7, t11, t14, 2, 1, t29, 12, 2);
    memset(t31, 0, 8);
    t17 = (t31 + 4);
    t18 = (t28 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (t21 >> 16);
    *((unsigned int *)t31) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 16);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t25 & 255U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 255U);
    xsi_vlogtype_concat(t19, 8, 8, 1U, t31, 8);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 8);
    goto LAB24;

LAB22:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = (t0 + 2728);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_rshift(t29, 12, t16, 12, t15, 32);
    xsi_vlog_generic_get_array_select_value(t28, 32, t7, t11, t14, 2, 1, t29, 12, 2);
    memset(t31, 0, 8);
    t17 = (t31 + 4);
    t18 = (t28 + 4);
    t21 = *((unsigned int *)t28);
    t22 = (t21 >> 24);
    *((unsigned int *)t31) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 24);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t25 & 255U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 255U);
    xsi_vlogtype_concat(t19, 8, 8, 1U, t31, 8);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 8);
    goto LAB24;

LAB27:    xsi_set_current_line(71, ng0);
    t9 = (t0 + 2728);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 2728);
    t14 = (t13 + 72U);
    t15 = *((char **)t14);
    t16 = (t0 + 2728);
    t17 = (t16 + 64U);
    t18 = *((char **)t17);
    t20 = (t0 + 1528U);
    t30 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_rshift(t32, 12, t30, 12, t20, 32);
    xsi_vlog_generic_get_array_select_value(t31, 32, t12, t15, t18, 2, 1, t32, 12, 2);
    memset(t42, 0, 8);
    t33 = (t42 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 0);
    *((unsigned int *)t42) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t39 & 65535U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 65535U);
    xsi_vlogtype_concat(t29, 16, 16, 1U, t42, 16);
    t41 = (t0 + 3368);
    xsi_vlogvar_assign_value(t41, t29, 0, 0, 16);
    goto LAB31;

LAB29:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = (t0 + 2728);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 12, t16, 12, t15, 32);
    xsi_vlog_generic_get_array_select_value(t29, 32, t7, t11, t14, 2, 1, t31, 12, 2);
    memset(t32, 0, 8);
    t17 = (t32 + 4);
    t18 = (t29 + 4);
    t21 = *((unsigned int *)t29);
    t22 = (t21 >> 16);
    *((unsigned int *)t32) = t22;
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 16);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t25 & 65535U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 65535U);
    xsi_vlogtype_concat(t28, 16, 16, 1U, t32, 16);
    t20 = (t0 + 3368);
    xsi_vlogvar_assign_value(t20, t28, 0, 0, 16);
    goto LAB31;

}

static void Always_80_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t37[8];
    char t41[8];
    char t42[8];
    char t45[8];
    char t46[8];
    char t56[8];
    char t57[8];
    char t66[8];
    char t75[8];
    char t76[8];
    char t84[8];
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
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t44;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(87, ng0);

LAB16:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(81, ng0);

LAB9:    xsi_set_current_line(82, ng0);
    xsi_set_current_line(82, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(83, ng0);

LAB13:    xsi_set_current_line(84, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2728);
    t17 = (t0 + 2728);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3528);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3528);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB15;

LAB17:    xsi_set_current_line(88, ng0);

LAB20:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);

LAB21:    t4 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t28 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t28 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB19;

LAB22:    xsi_set_current_line(91, ng0);

LAB29:    xsi_set_current_line(92, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memcpy(t13, t12, 8);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2728);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1528U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_rshift(t16, 12, t20, 12, t19, 32);
    xsi_vlog_generic_convert_array_indices(t13, t15, t12, t18, 2, 1, t16, 12, 2);
    t21 = (t13 + 4);
    t6 = *((unsigned int *)t21);
    t28 = (!(t6));
    t22 = (t15 + 4);
    t7 = *((unsigned int *)t22);
    t31 = (!(t7));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 1688U);
    t14 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t3, 32, (char)118, t11, 32, (char)118, t14, 32);
    goto LAB28;

LAB24:    xsi_set_current_line(97, ng0);

LAB32:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 3U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 3U);
    xsi_vlogtype_concat(t13, 32, 2, 1U, t15, 2);

LAB33:    t12 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t13, 32, t12, 32);
    if (t31 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 32, t2, 32);
    if (t28 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 32, t2, 32);
    if (t28 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 32, t2, 32);
    if (t28 == 1)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memcpy(t15, t3, 8);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t15, 0, 0, 32);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t11 = *((char **)t4);
    memset(t15, 0, 8);
    t12 = (t15 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 2);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1073741823U);
    t17 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_lshift(t16, 30, t15, 30, t17, 32);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2728);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2728);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t29 = (t0 + 1528U);
    t43 = *((char **)t29);
    t29 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_rshift(t41, 12, t43, 12, t29, 32);
    xsi_vlog_generic_get_array_select_value(t37, 32, t20, t23, t26, 2, 1, t41, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t3, 32, (char)118, t16, 30, (char)118, t37, 32);
    goto LAB28;

LAB26:    xsi_set_current_line(112, ng0);

LAB51:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 3U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 3U);
    xsi_vlogtype_concat(t15, 32, 2, 1U, t16, 2);

LAB52:    t12 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t15, 32, t12, 32);
    if (t31 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t15, 32, t2, 32);
    if (t28 == 1)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memcpy(t16, t3, 8);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t16, 0, 0, 32);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t11 = *((char **)t4);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 2);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t27 & 1073741823U);
    t17 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_lshift(t37, 30, t16, 30, t17, 32);
    t18 = (t0 + 2728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 2728);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2728);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t29 = (t0 + 1528U);
    t43 = *((char **)t29);
    t29 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_rshift(t42, 12, t43, 12, t29, 32);
    xsi_vlog_generic_get_array_select_value(t41, 32, t20, t23, t26, 2, 1, t42, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng7, 4, t0, (char)118, t3, 32, (char)118, t37, 30, (char)118, t41, 32);
    goto LAB28;

LAB30:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t15);
    t35 = (t8 - t9);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t15), t36);
    goto LAB31;

LAB34:    xsi_set_current_line(100, ng0);
    t14 = (t0 + 1688U);
    t17 = *((char **)t14);
    memset(t37, 0, 8);
    t14 = (t37 + 4);
    t18 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t33 = (t30 >> 0);
    *((unsigned int *)t37) = t33;
    t34 = *((unsigned int *)t18);
    t38 = (t34 >> 0);
    *((unsigned int *)t14) = t38;
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 & 255U);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & 255U);
    t19 = (t0 + 2728);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2728);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t43 = (t0 + 1528U);
    t44 = *((char **)t43);
    t43 = ((char*)((ng4)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_rshift(t45, 12, t44, 12, t43, 32);
    xsi_vlog_generic_get_array_select_value(t42, 32, t21, t24, t29, 2, 1, t45, 12, 2);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    t50 = (t49 >> 8);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 8);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 16777215U);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 16777215U);
    xsi_vlogtype_concat(t41, 24, 24, 1U, t46, 24);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t41, 24, t37, 8);
    t55 = (t0 + 2728);
    t58 = (t0 + 2728);
    t59 = (t58 + 72U);
    t60 = *((char **)t59);
    t61 = (t0 + 2728);
    t62 = (t61 + 64U);
    t63 = *((char **)t62);
    t64 = (t0 + 1528U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng4)));
    memset(t66, 0, 8);
    xsi_vlog_unsigned_rshift(t66, 12, t65, 12, t64, 32);
    xsi_vlog_generic_convert_array_indices(t56, t57, t60, t63, 2, 1, t66, 12, 2);
    t67 = (t56 + 4);
    t68 = *((unsigned int *)t67);
    t32 = (!(t68));
    t69 = (t57 + 4);
    t70 = *((unsigned int *)t69);
    t35 = (!(t70));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB43;

LAB44:    goto LAB42;

LAB36:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_rshift(t41, 12, t22, 12, t21, 32);
    xsi_vlog_generic_get_array_select_value(t37, 32, t11, t17, t20, 2, 1, t41, 12, 2);
    memset(t42, 0, 8);
    t23 = (t42 + 4);
    t24 = (t37 + 4);
    t6 = *((unsigned int *)t37);
    t7 = (t6 >> 0);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t24);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 255U);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t27 & 255U);
    xsi_vlogtype_concat(t16, 8, 8, 1U, t42, 8);
    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    memset(t45, 0, 8);
    t25 = (t45 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t33 = (t30 >> 0);
    *((unsigned int *)t45) = t33;
    t34 = *((unsigned int *)t29);
    t38 = (t34 >> 0);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t43 = (t0 + 2728);
    t44 = (t43 + 56U);
    t47 = *((char **)t44);
    t48 = (t0 + 2728);
    t55 = (t48 + 72U);
    t58 = *((char **)t55);
    t59 = (t0 + 2728);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 1528U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng4)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_rshift(t57, 12, t63, 12, t62, 32);
    xsi_vlog_generic_get_array_select_value(t56, 32, t47, t58, t61, 2, 1, t57, 12, 2);
    memset(t66, 0, 8);
    t64 = (t66 + 4);
    t65 = (t56 + 4);
    t49 = *((unsigned int *)t56);
    t50 = (t49 >> 16);
    *((unsigned int *)t66) = t50;
    t51 = *((unsigned int *)t65);
    t52 = (t51 >> 16);
    *((unsigned int *)t64) = t52;
    t53 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t53 & 65535U);
    t54 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t54 & 65535U);
    xsi_vlogtype_concat(t46, 16, 16, 1U, t66, 16);
    xsi_vlogtype_concat(t15, 32, 32, 3U, t46, 16, t45, 8, t16, 8);
    t67 = (t0 + 2728);
    t69 = (t0 + 2728);
    t77 = (t69 + 72U);
    t78 = *((char **)t77);
    t79 = (t0 + 2728);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = (t0 + 1528U);
    t83 = *((char **)t82);
    t82 = ((char*)((ng4)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_rshift(t84, 12, t83, 12, t82, 32);
    xsi_vlog_generic_convert_array_indices(t75, t76, t78, t81, 2, 1, t84, 12, 2);
    t85 = (t75 + 4);
    t68 = *((unsigned int *)t85);
    t31 = (!(t68));
    t86 = (t76 + 4);
    t70 = *((unsigned int *)t86);
    t32 = (!(t70));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB45;

LAB46:    goto LAB42;

LAB38:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_rshift(t41, 12, t22, 12, t21, 32);
    xsi_vlog_generic_get_array_select_value(t37, 32, t11, t17, t20, 2, 1, t41, 12, 2);
    memset(t42, 0, 8);
    t23 = (t42 + 4);
    t24 = (t37 + 4);
    t6 = *((unsigned int *)t37);
    t7 = (t6 >> 0);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t24);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 65535U);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t27 & 65535U);
    xsi_vlogtype_concat(t16, 16, 16, 1U, t42, 16);
    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    memset(t45, 0, 8);
    t25 = (t45 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t33 = (t30 >> 0);
    *((unsigned int *)t45) = t33;
    t34 = *((unsigned int *)t29);
    t38 = (t34 >> 0);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    t43 = (t0 + 2728);
    t44 = (t43 + 56U);
    t47 = *((char **)t44);
    t48 = (t0 + 2728);
    t55 = (t48 + 72U);
    t58 = *((char **)t55);
    t59 = (t0 + 2728);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t0 + 1528U);
    t63 = *((char **)t62);
    t62 = ((char*)((ng4)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_rshift(t57, 12, t63, 12, t62, 32);
    xsi_vlog_generic_get_array_select_value(t56, 32, t47, t58, t61, 2, 1, t57, 12, 2);
    memset(t66, 0, 8);
    t64 = (t66 + 4);
    t65 = (t56 + 4);
    t49 = *((unsigned int *)t56);
    t50 = (t49 >> 24);
    *((unsigned int *)t66) = t50;
    t51 = *((unsigned int *)t65);
    t52 = (t51 >> 24);
    *((unsigned int *)t64) = t52;
    t53 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t53 & 255U);
    t54 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t54 & 255U);
    xsi_vlogtype_concat(t46, 8, 8, 1U, t66, 8);
    xsi_vlogtype_concat(t15, 32, 32, 3U, t46, 8, t45, 8, t16, 16);
    t67 = (t0 + 2728);
    t69 = (t0 + 2728);
    t77 = (t69 + 72U);
    t78 = *((char **)t77);
    t79 = (t0 + 2728);
    t80 = (t79 + 64U);
    t81 = *((char **)t80);
    t82 = (t0 + 1528U);
    t83 = *((char **)t82);
    t82 = ((char*)((ng4)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_rshift(t84, 12, t83, 12, t82, 32);
    xsi_vlog_generic_convert_array_indices(t75, t76, t78, t81, 2, 1, t84, 12, 2);
    t85 = (t75 + 4);
    t68 = *((unsigned int *)t85);
    t31 = (!(t68));
    t86 = (t76 + 4);
    t70 = *((unsigned int *)t86);
    t32 = (!(t70));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB47;

LAB48:    goto LAB42;

LAB40:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_rshift(t41, 12, t22, 12, t21, 32);
    xsi_vlog_generic_get_array_select_value(t37, 32, t11, t17, t20, 2, 1, t41, 12, 2);
    memset(t42, 0, 8);
    t23 = (t42 + 4);
    t24 = (t37 + 4);
    t6 = *((unsigned int *)t37);
    t7 = (t6 >> 0);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t24);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 16777215U);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t27 & 16777215U);
    xsi_vlogtype_concat(t16, 24, 24, 1U, t42, 24);
    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    memset(t45, 0, 8);
    t25 = (t45 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t33 = (t30 >> 0);
    *((unsigned int *)t45) = t33;
    t34 = *((unsigned int *)t29);
    t38 = (t34 >> 0);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t39 & 255U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 255U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t45, 8, t16, 24);
    t43 = (t0 + 2728);
    t44 = (t0 + 2728);
    t47 = (t44 + 72U);
    t48 = *((char **)t47);
    t55 = (t0 + 2728);
    t58 = (t55 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 1528U);
    t61 = *((char **)t60);
    t60 = ((char*)((ng4)));
    memset(t57, 0, 8);
    xsi_vlog_unsigned_rshift(t57, 12, t61, 12, t60, 32);
    xsi_vlog_generic_convert_array_indices(t46, t56, t48, t59, 2, 1, t57, 12, 2);
    t62 = (t46 + 4);
    t49 = *((unsigned int *)t62);
    t31 = (!(t49));
    t63 = (t56 + 4);
    t50 = *((unsigned int *)t63);
    t32 = (!(t50));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB49;

LAB50:    goto LAB42;

LAB43:    t71 = *((unsigned int *)t56);
    t72 = *((unsigned int *)t57);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(t55, t16, 0, *((unsigned int *)t57), t74);
    goto LAB44;

LAB45:    t71 = *((unsigned int *)t75);
    t72 = *((unsigned int *)t76);
    t36 = (t71 - t72);
    t73 = (t36 + 1);
    xsi_vlogvar_assign_value(t67, t15, 0, *((unsigned int *)t76), t73);
    goto LAB46;

LAB47:    t71 = *((unsigned int *)t75);
    t72 = *((unsigned int *)t76);
    t36 = (t71 - t72);
    t73 = (t36 + 1);
    xsi_vlogvar_assign_value(t67, t15, 0, *((unsigned int *)t76), t73);
    goto LAB48;

LAB49:    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t56);
    t36 = (t51 - t52);
    t73 = (t36 + 1);
    xsi_vlogvar_assign_value(t43, t15, 0, *((unsigned int *)t56), t73);
    goto LAB50;

LAB53:    xsi_set_current_line(115, ng0);
    t14 = (t0 + 1688U);
    t17 = *((char **)t14);
    memset(t41, 0, 8);
    t14 = (t41 + 4);
    t18 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t33 = (t30 >> 0);
    *((unsigned int *)t41) = t33;
    t34 = *((unsigned int *)t18);
    t38 = (t34 >> 0);
    *((unsigned int *)t14) = t38;
    t39 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t39 & 65535U);
    t40 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t40 & 65535U);
    t19 = (t0 + 2728);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2728);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t43 = (t0 + 1528U);
    t44 = *((char **)t43);
    t43 = ((char*)((ng4)));
    memset(t45, 0, 8);
    xsi_vlog_unsigned_rshift(t45, 12, t44, 12, t43, 32);
    xsi_vlog_generic_get_array_select_value(t42, 32, t21, t24, t29, 2, 1, t45, 12, 2);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    t50 = (t49 >> 16);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 16);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 & 65535U);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 & 65535U);
    xsi_vlogtype_concat(t37, 32, 32, 2U, t46, 16, t41, 16);
    t55 = (t0 + 2728);
    t58 = (t0 + 2728);
    t59 = (t58 + 72U);
    t60 = *((char **)t59);
    t61 = (t0 + 2728);
    t62 = (t61 + 64U);
    t63 = *((char **)t62);
    t64 = (t0 + 1528U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng4)));
    memset(t66, 0, 8);
    xsi_vlog_unsigned_rshift(t66, 12, t65, 12, t64, 32);
    xsi_vlog_generic_convert_array_indices(t56, t57, t60, t63, 2, 1, t66, 12, 2);
    t67 = (t56 + 4);
    t68 = *((unsigned int *)t67);
    t32 = (!(t68));
    t69 = (t57 + 4);
    t70 = *((unsigned int *)t69);
    t35 = (!(t70));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB58;

LAB59:    goto LAB57;

LAB55:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_rshift(t42, 12, t22, 12, t21, 32);
    xsi_vlog_generic_get_array_select_value(t41, 32, t11, t17, t20, 2, 1, t42, 12, 2);
    memset(t45, 0, 8);
    t23 = (t45 + 4);
    t24 = (t41 + 4);
    t6 = *((unsigned int *)t41);
    t7 = (t6 >> 0);
    *((unsigned int *)t45) = t7;
    t8 = *((unsigned int *)t24);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t10 & 65535U);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t27 & 65535U);
    xsi_vlogtype_concat(t37, 16, 16, 1U, t45, 16);
    t25 = (t0 + 1688U);
    t26 = *((char **)t25);
    memset(t46, 0, 8);
    t25 = (t46 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t33 = (t30 >> 0);
    *((unsigned int *)t46) = t33;
    t34 = *((unsigned int *)t29);
    t38 = (t34 >> 0);
    *((unsigned int *)t25) = t38;
    t39 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t39 & 65535U);
    t40 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t40 & 65535U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t46, 16, t37, 16);
    t43 = (t0 + 2728);
    t44 = (t0 + 2728);
    t47 = (t44 + 72U);
    t48 = *((char **)t47);
    t55 = (t0 + 2728);
    t58 = (t55 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 1528U);
    t61 = *((char **)t60);
    t60 = ((char*)((ng4)));
    memset(t66, 0, 8);
    xsi_vlog_unsigned_rshift(t66, 12, t61, 12, t60, 32);
    xsi_vlog_generic_convert_array_indices(t56, t57, t48, t59, 2, 1, t66, 12, 2);
    t62 = (t56 + 4);
    t49 = *((unsigned int *)t62);
    t31 = (!(t49));
    t63 = (t57 + 4);
    t50 = *((unsigned int *)t63);
    t32 = (!(t50));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB60;

LAB61:    goto LAB57;

LAB58:    t71 = *((unsigned int *)t56);
    t72 = *((unsigned int *)t57);
    t73 = (t71 - t72);
    t74 = (t73 + 1);
    xsi_vlogvar_assign_value(t55, t37, 0, *((unsigned int *)t57), t74);
    goto LAB59;

LAB60:    t51 = *((unsigned int *)t56);
    t52 = *((unsigned int *)t57);
    t36 = (t51 - t52);
    t73 = (t36 + 1);
    xsi_vlogvar_assign_value(t43, t16, 0, *((unsigned int *)t57), t73);
    goto LAB61;

}


extern void work_m_00000000001107475570_2461264495_init()
{
	static char *pe[] = {(void *)Initial_40_0,(void *)Cont_47_1,(void *)Always_49_2,(void *)Always_80_3};
	xsi_register_didat("work_m_00000000001107475570_2461264495", "isim/test_cpu_isim_beh.exe.sim/work/m_00000000001107475570_2461264495.didat");
	xsi_register_executes(pe);
}
