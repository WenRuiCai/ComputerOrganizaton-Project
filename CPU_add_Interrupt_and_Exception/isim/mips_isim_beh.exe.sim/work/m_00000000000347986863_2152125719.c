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
static const char *ng0 = "E:/CPU Project/CPU_add_Interrupt_and_Exception/timer2.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Cont_39_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t8[8];
    char t18[8];
    char t48[8];
    char *t1;
    char *t2;
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
    char *t19;
    char *t20;
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
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2408);
    t6 = (t2 + 56U);
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
    xsi_vlogtype_concat(t5, 32, 1, 1U, t8, 1);
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t5 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB7;

LAB4:    if (t30 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t18) = 1;

LAB7:    memset(t4, 0, 8);
    t34 = (t18 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t34) != 0)
        goto LAB10;

LAB11:    t41 = (t4 + 4);
    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t41);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB12;

LAB13:    t49 = *((unsigned int *)t4);
    t50 = (~(t49));
    t51 = *((unsigned int *)t41);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t41) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t53, 8);

LAB20:    t54 = (t0 + 5480);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t54, 0, 0);
    t67 = (t0 + 5352);
    *((int *)t67) = 1;

LAB1:    return;
LAB6:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t40 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB11;

LAB12:    t45 = (t0 + 3208);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t48, t47, 8);
    goto LAB13;

LAB14:    t53 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t48, 32, t53, 32);
    goto LAB20;

LAB18:    memcpy(t3, t48, 8);
    goto LAB20;

}

static void Cont_40_1(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5368);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_42_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t7 = (t0 + 2408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3368);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB13;

}

static void Always_53_3(char *t0)
{
    char t14[8];
    char t15[8];
    char t26[8];
    char t32[8];
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
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
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

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5400);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
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

LAB7:    xsi_set_current_line(62, ng0);

LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(71, ng0);

LAB21:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 1);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 3U);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 3U);
    xsi_vlogtype_concat(t14, 32, 2, 1U, t15, 2);

LAB22:    t17 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 32, t17, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 32, t2, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:
LAB27:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(63, ng0);

LAB14:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB15:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB13;

LAB16:    xsi_set_current_line(66, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB20;

LAB18:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB20;

LAB23:    xsi_set_current_line(74, ng0);

LAB28:    xsi_set_current_line(75, ng0);
    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);

LAB29:    t21 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t20, 32, t21, 32);
    if (t22 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t20, 32, t2, 32);
    if (t13 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t20, 32, t2, 32);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t20, 32, t2, 32);
    if (t13 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB25:    xsi_set_current_line(114, ng0);

LAB77:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);

LAB78:    t12 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t11, 32, t12, 32);
    if (t22 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t13 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t13 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB27;

LAB30:    xsi_set_current_line(77, ng0);

LAB39:    xsi_set_current_line(78, ng0);
    t23 = (t0 + 2408);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t0 + 2408);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t26, 32, t25, t29, 2, t30, 32, 1);
    t31 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t33 = (t26 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t26);
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
        goto LAB43;

LAB40:    if (t44 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t32) = 1;

LAB43:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB46:    goto LAB38;

LAB32:    xsi_set_current_line(86, ng0);

LAB48:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB38;

LAB34:    xsi_set_current_line(91, ng0);

LAB49:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 2408);
    t17 = (t12 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t11, t18, 2, t19, 32, 1);
    t21 = ((char*)((ng1)));
    memset(t26, 0, 8);
    t23 = (t15 + 4);
    t24 = (t21 + 4);
    t6 = *((unsigned int *)t15);
    t7 = *((unsigned int *)t21);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t23);
    t10 = *((unsigned int *)t24);
    t16 = (t9 ^ t10);
    t35 = (t8 | t16);
    t36 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t24);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB53;

LAB50:    if (t38 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t26) = 1;

LAB53:    t27 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = (~(t41));
    t43 = *((unsigned int *)t26);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(101, ng0);

LAB68:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB56:    goto LAB38;

LAB36:    xsi_set_current_line(106, ng0);

LAB69:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    memset(t26, 0, 8);
    t12 = (t26 + 4);
    t17 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 1);
    *((unsigned int *)t26) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 1);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t10 & 3U);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t16 & 3U);
    xsi_vlogtype_concat(t15, 32, 2, 1U, t26, 2);
    t18 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t19 = (t15 + 4);
    t21 = (t18 + 4);
    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t18);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t21);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t19);
    t43 = *((unsigned int *)t21);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB71;

LAB70:    if (t44 != 0)
        goto LAB72;

LAB73:    t24 = (t32 + 4);
    t49 = *((unsigned int *)t24);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB74;

LAB75:
LAB76:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB38;

LAB42:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(78, ng0);

LAB47:    xsi_set_current_line(79, ng0);
    t54 = ((char*)((ng2)));
    t55 = (t0 + 3208);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB46;

LAB52:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(92, ng0);

LAB57:    xsi_set_current_line(93, ng0);
    t28 = (t0 + 2728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB59;

LAB58:    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t30) > *((unsigned int *)t31))
        goto LAB61;

LAB60:    *((unsigned int *)t32) = 1;

LAB61:    t48 = (t32 + 4);
    t46 = *((unsigned int *)t48);
    t49 = (~(t46));
    t50 = *((unsigned int *)t32);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(97, ng0);

LAB67:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t11, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t15, 0, 0, 32);

LAB65:    goto LAB56;

LAB59:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(93, ng0);

LAB66:    xsi_set_current_line(94, ng0);
    t54 = ((char*)((ng4)));
    t55 = (t0 + 2888);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB65;

LAB71:    *((unsigned int *)t32) = 1;
    goto LAB73;

LAB72:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(108, ng0);
    t25 = ((char*)((ng2)));
    t27 = (t0 + 3208);
    xsi_vlogvar_assign_value(t27, t25, 0, 0, 1);
    goto LAB76;

LAB79:    xsi_set_current_line(117, ng0);

LAB86:    xsi_set_current_line(118, ng0);
    t17 = (t0 + 2408);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t0 + 2408);
    t23 = (t21 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t19, t24, 2, t25, 32, 1);
    t27 = ((char*)((ng1)));
    memset(t26, 0, 8);
    t28 = (t15 + 4);
    t29 = (t27 + 4);
    t6 = *((unsigned int *)t15);
    t7 = *((unsigned int *)t27);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t28);
    t10 = *((unsigned int *)t29);
    t16 = (t9 ^ t10);
    t35 = (t8 | t16);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t29);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB90;

LAB87:    if (t38 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t26) = 1;

LAB90:    t31 = (t26 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (~(t41));
    t43 = *((unsigned int *)t26);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB93:    goto LAB85;

LAB81:    xsi_set_current_line(125, ng0);

LAB95:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB85;

LAB83:    xsi_set_current_line(131, ng0);

LAB96:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t12 = *((char **)t4);
    memset(t26, 0, 8);
    t17 = (t26 + 4);
    t18 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 1);
    *((unsigned int *)t26) = t7;
    t8 = *((unsigned int *)t18);
    t9 = (t8 >> 1);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t10 & 3U);
    t16 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t16 & 3U);
    xsi_vlogtype_concat(t15, 32, 2, 1U, t26, 2);
    t19 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t21 = (t15 + 4);
    t23 = (t19 + 4);
    t35 = *((unsigned int *)t15);
    t36 = *((unsigned int *)t19);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t21);
    t39 = *((unsigned int *)t23);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t23);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB98;

LAB97:    if (t44 != 0)
        goto LAB99;

LAB100:    t25 = (t32 + 4);
    t49 = *((unsigned int *)t25);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(134, ng0);

LAB104:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t12 = (t0 + 2408);
    t17 = (t12 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t4, t18, 2, t19, 32, 1);
    t21 = ((char*)((ng1)));
    memset(t26, 0, 8);
    t23 = (t15 + 4);
    t24 = (t21 + 4);
    t6 = *((unsigned int *)t15);
    t7 = *((unsigned int *)t21);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t23);
    t10 = *((unsigned int *)t24);
    t16 = (t9 ^ t10);
    t35 = (t8 | t16);
    t36 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t24);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB108;

LAB105:    if (t38 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t26) = 1;

LAB108:    t27 = (t26 + 4);
    t41 = *((unsigned int *)t27);
    t42 = (~(t41));
    t43 = *((unsigned int *)t26);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(144, ng0);

LAB123:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB111:
LAB103:    goto LAB85;

LAB89:    t30 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(118, ng0);

LAB94:    xsi_set_current_line(119, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 3048);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 32);
    goto LAB93;

LAB98:    *((unsigned int *)t32) = 1;
    goto LAB100;

LAB99:    t24 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(133, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 3208);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 1);
    goto LAB103;

LAB107:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(135, ng0);

LAB112:    xsi_set_current_line(136, ng0);
    t28 = (t0 + 2728);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t33 = (t30 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB114;

LAB113:    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB114;

LAB117:    if (*((unsigned int *)t30) > *((unsigned int *)t31))
        goto LAB116;

LAB115:    *((unsigned int *)t32) = 1;

LAB116:    t48 = (t32 + 4);
    t46 = *((unsigned int *)t48);
    t49 = (~(t46));
    t50 = *((unsigned int *)t32);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(140, ng0);

LAB122:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t12 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t4, 32, t12, 32);
    t17 = (t0 + 2728);
    xsi_vlogvar_assign_value(t17, t15, 0, 0, 32);

LAB120:    goto LAB111;

LAB114:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB116;

LAB118:    xsi_set_current_line(136, ng0);

LAB121:    xsi_set_current_line(137, ng0);
    t54 = ((char*)((ng1)));
    t55 = (t0 + 3048);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 32);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB120;

}


extern void work_m_00000000000347986863_2152125719_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_40_1,(void *)Always_42_2,(void *)Always_53_3};
	xsi_register_didat("work_m_00000000000347986863_2152125719", "isim/mips_isim_beh.exe.sim/work/m_00000000000347986863_2152125719.didat");
	xsi_register_executes(pe);
}
