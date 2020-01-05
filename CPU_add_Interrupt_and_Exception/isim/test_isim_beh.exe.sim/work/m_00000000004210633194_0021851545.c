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
static const char *ng0 = "E:/CPU Project/CPU_add_Interrupt_and_Exception/Reg_D_to_E.v";
static int ng1[] = {10, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {13U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {14U, 0U};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {10U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {15U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {1U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {35U, 0U};
static int ng19[] = {2, 0};
static unsigned int ng20[] = {32U, 0U};
static unsigned int ng21[] = {36U, 0U};
static unsigned int ng22[] = {33U, 0U};
static unsigned int ng23[] = {37U, 0U};
static unsigned int ng24[] = {43U, 0U};
static unsigned int ng25[] = {40U, 0U};
static unsigned int ng26[] = {41U, 0U};
static unsigned int ng27[] = {3U, 0U};
static unsigned int ng28[] = {2U, 0U};
static unsigned int ng29[] = {16U, 0U};
static unsigned int ng30[] = {24U, 0U};
static unsigned int ng31[] = {18U, 0U};
static unsigned int ng32[] = {17U, 0U};
static unsigned int ng33[] = {19U, 0U};
static unsigned int ng34[] = {42U, 0U};
static unsigned int ng35[] = {34U, 0U};
static unsigned int ng36[] = {38U, 0U};
static unsigned int ng37[] = {39U, 0U};
static unsigned int ng38[] = {25U, 0U};
static unsigned int ng39[] = {26U, 0U};
static unsigned int ng40[] = {27U, 0U};



static void Cont_52_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
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

LAB0:    t1 = (t0 + 7648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6728);
    t5 = (t2 + 56U);
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
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 11200);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 10944);
    *((int *)t48) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = (t0 + 5128);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_53_1(char *t0)
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

LAB0:    t1 = (t0 + 7896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11264);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 10960);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_54_2(char *t0)
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

LAB0:    t1 = (t0 + 8144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11328);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 10976);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_55_3(char *t0)
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

LAB0:    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 10992);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_56_4(char *t0)
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

LAB0:    t1 = (t0 + 8640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 11008);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_57_5(char *t0)
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

LAB0:    t1 = (t0 + 8888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 11024);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_58_6(char *t0)
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

LAB0:    t1 = (t0 + 9136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 11040);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_59_7(char *t0)
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

LAB0:    t1 = (t0 + 9384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 11056);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_60_8(char *t0)
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

LAB0:    t1 = (t0 + 9632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 11072);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_61_9(char *t0)
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

LAB0:    t1 = (t0 + 9880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 11088);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_62_10(char *t0)
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

LAB0:    t1 = (t0 + 10128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 11104);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_64_11(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(64, ng0);

LAB2:    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5128);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 6088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 6248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 6568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 6728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_69_12(char *t0)
{
    char t13[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char t39[8];
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
    int t15;
    char *t19;
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
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    int t42;

LAB0:    t1 = (t0 + 10624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 11120);
    *((int *)t2) = 1;
    t3 = (t0 + 10656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(74, ng0);

LAB10:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);

LAB9:    xsi_set_current_line(71, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 5128);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB8;

LAB11:    xsi_set_current_line(75, ng0);

LAB14:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 5288);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 5448);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 5928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 6088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 6248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 6408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 6728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 26);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 26);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);

LAB15:    t5 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t5, 6);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng26)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng27)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng29)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 6, t2, 6);
    if (t15 == 1)
        goto LAB64;

LAB65:
LAB67:
LAB66:    xsi_set_current_line(309, ng0);

LAB202:    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t2, 32);
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t17, 0, 0, 5);

LAB68:    goto LAB13;

LAB16:    xsi_set_current_line(86, ng0);

LAB69:    xsi_set_current_line(87, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 6568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    goto LAB68;

LAB18:    xsi_set_current_line(90, ng0);

LAB70:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB20:    xsi_set_current_line(94, ng0);

LAB71:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB22:    xsi_set_current_line(98, ng0);

LAB72:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB24:    xsi_set_current_line(102, ng0);

LAB73:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB26:    xsi_set_current_line(106, ng0);

LAB74:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB28:    xsi_set_current_line(110, ng0);

LAB75:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB30:    xsi_set_current_line(114, ng0);

LAB76:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB32:    xsi_set_current_line(118, ng0);

LAB77:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB34:    xsi_set_current_line(122, ng0);

LAB78:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB36:    xsi_set_current_line(126, ng0);

LAB79:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB38:    xsi_set_current_line(130, ng0);

LAB80:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB40:    xsi_set_current_line(134, ng0);

LAB81:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB42:    xsi_set_current_line(138, ng0);

LAB82:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB44:    xsi_set_current_line(142, ng0);

LAB83:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB46:    xsi_set_current_line(146, ng0);

LAB84:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB48:    xsi_set_current_line(150, ng0);

LAB85:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB50:    xsi_set_current_line(154, ng0);

LAB86:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB52:    xsi_set_current_line(158, ng0);

LAB87:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB54:    xsi_set_current_line(162, ng0);

LAB88:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB56:    xsi_set_current_line(166, ng0);

LAB89:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB58:    xsi_set_current_line(170, ng0);

LAB90:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB68;

LAB60:    xsi_set_current_line(174, ng0);

LAB91:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t16, 0, 0, 5);
    goto LAB68;

LAB62:    xsi_set_current_line(178, ng0);

LAB92:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 63U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 63U);
    xsi_vlogtype_concat(t16, 6, 6, 1U, t17, 6);
    t11 = ((char*)((ng30)));
    memset(t18, 0, 8);
    t12 = (t16 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t11);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB96;

LAB93:    if (t29 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t18) = 1;

LAB96:    t33 = (t18 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t18);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(182, ng0);

LAB101:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 21);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 21);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    xsi_vlogtype_concat(t16, 5, 5, 1U, t17, 5);
    t5 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t11 = (t16 + 4);
    t12 = (t5 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t5);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t12);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t12);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB105;

LAB102:    if (t29 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t18) = 1;

LAB105:    t32 = (t18 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t18);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_signed_unary_minus(t16, 32, t2, 32);
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t16, 0, 0, 5);

LAB108:
LAB99:    goto LAB68;

LAB64:    xsi_set_current_line(190, ng0);

LAB109:    xsi_set_current_line(191, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 63U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 63U);

LAB110:    t11 = ((char*)((ng29)));
    t42 = xsi_vlog_unsigned_case_compare(t16, 6, t11, 6);
    if (t42 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng31)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng32)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng33)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng27)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng28)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng34)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB135;

LAB136:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB137;

LAB138:    t2 = ((char*)((ng35)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB139;

LAB140:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB141;

LAB142:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng36)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB145;

LAB146:    t2 = ((char*)((ng37)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB147;

LAB148:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB149;

LAB150:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB151;

LAB152:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB153;

LAB154:    t2 = ((char*)((ng30)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB155;

LAB156:    t2 = ((char*)((ng38)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB157;

LAB158:    t2 = ((char*)((ng39)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB159;

LAB160:    t2 = ((char*)((ng40)));
    t15 = xsi_vlog_unsigned_case_compare(t16, 6, t2, 6);
    if (t15 == 1)
        goto LAB161;

LAB162:
LAB164:
LAB163:    xsi_set_current_line(303, ng0);

LAB201:    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t2, 32);
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t17, 0, 0, 5);

LAB165:    goto LAB68;

LAB95:    t32 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(179, ng0);

LAB100:    xsi_set_current_line(180, ng0);
    t40 = ((char*)((ng5)));
    memset(t39, 0, 8);
    xsi_vlog_signed_unary_minus(t39, 32, t40, 32);
    t41 = (t0 + 6568);
    xsi_vlogvar_assign_value(t41, t39, 0, 0, 5);
    goto LAB99;

LAB104:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(184, ng0);
    t33 = ((char*)((ng5)));
    t40 = (t0 + 6568);
    xsi_vlogvar_assign_value(t40, t33, 0, 0, 5);
    goto LAB108;

LAB111:    xsi_set_current_line(193, ng0);

LAB166:    xsi_set_current_line(194, ng0);
    t12 = ((char*)((ng5)));
    t19 = (t0 + 6568);
    xsi_vlogvar_assign_value(t19, t12, 0, 0, 5);
    goto LAB165;

LAB113:    xsi_set_current_line(197, ng0);

LAB167:    xsi_set_current_line(198, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB115:    xsi_set_current_line(201, ng0);

LAB168:    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t17, 0, 0, 5);
    goto LAB165;

LAB117:    xsi_set_current_line(205, ng0);

LAB169:    xsi_set_current_line(206, ng0);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t17, 0, 0, 5);
    goto LAB165;

LAB119:    xsi_set_current_line(209, ng0);

LAB170:    xsi_set_current_line(210, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB121:    xsi_set_current_line(213, ng0);

LAB171:    xsi_set_current_line(214, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB123:    xsi_set_current_line(217, ng0);

LAB172:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB125:    xsi_set_current_line(221, ng0);

LAB173:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB127:    xsi_set_current_line(225, ng0);

LAB174:    xsi_set_current_line(226, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB129:    xsi_set_current_line(229, ng0);

LAB175:    xsi_set_current_line(230, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB131:    xsi_set_current_line(233, ng0);

LAB176:    xsi_set_current_line(234, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB133:    xsi_set_current_line(237, ng0);

LAB177:    xsi_set_current_line(238, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB135:    xsi_set_current_line(241, ng0);

LAB178:    xsi_set_current_line(242, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB137:    xsi_set_current_line(245, ng0);

LAB179:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB139:    xsi_set_current_line(249, ng0);

LAB180:    xsi_set_current_line(250, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB141:    xsi_set_current_line(253, ng0);

LAB181:    xsi_set_current_line(254, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB143:    xsi_set_current_line(257, ng0);

LAB182:    xsi_set_current_line(258, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB145:    xsi_set_current_line(261, ng0);

LAB183:    xsi_set_current_line(262, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB147:    xsi_set_current_line(265, ng0);

LAB184:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB149:    xsi_set_current_line(269, ng0);

LAB185:    xsi_set_current_line(270, ng0);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t17, 0, 0, 5);
    goto LAB165;

LAB151:    xsi_set_current_line(273, ng0);

LAB186:    xsi_set_current_line(274, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 5);
    goto LAB165;

LAB153:    xsi_set_current_line(277, ng0);

LAB187:    xsi_set_current_line(278, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t5 = (t4 + 4);
    t11 = (t3 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t14 = (t9 ^ t10);
    t20 = (t8 | t14);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t11);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB191;

LAB188:    if (t23 != 0)
        goto LAB190;

LAB189:    *((unsigned int *)t17) = 1;

LAB191:    t19 = (t17 + 4);
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = *((unsigned int *)t17);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB192;

LAB193:    xsi_set_current_line(282, ng0);

LAB196:    xsi_set_current_line(283, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB194:    goto LAB165;

LAB155:    xsi_set_current_line(287, ng0);

LAB197:    xsi_set_current_line(288, ng0);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t17, 0, 0, 5);
    goto LAB165;

LAB157:    xsi_set_current_line(291, ng0);

LAB198:    xsi_set_current_line(292, ng0);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t17, 0, 0, 5);
    goto LAB165;

LAB159:    xsi_set_current_line(295, ng0);

LAB199:    xsi_set_current_line(296, ng0);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t17, 0, 0, 5);
    goto LAB165;

LAB161:    xsi_set_current_line(299, ng0);

LAB200:    xsi_set_current_line(300, ng0);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_signed_unary_minus(t17, 32, t3, 32);
    t4 = (t0 + 6568);
    xsi_vlogvar_assign_value(t4, t17, 0, 0, 5);
    goto LAB165;

LAB190:    t12 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB191;

LAB192:    xsi_set_current_line(279, ng0);

LAB195:    xsi_set_current_line(280, ng0);
    t32 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_signed_unary_minus(t18, 32, t32, 32);
    t33 = (t0 + 6568);
    xsi_vlogvar_assign_value(t33, t18, 0, 0, 5);
    goto LAB194;

}


extern void work_m_00000000004210633194_0021851545_init()
{
	static char *pe[] = {(void *)Cont_52_0,(void *)Cont_53_1,(void *)Cont_54_2,(void *)Cont_55_3,(void *)Cont_56_4,(void *)Cont_57_5,(void *)Cont_58_6,(void *)Cont_59_7,(void *)Cont_60_8,(void *)Cont_61_9,(void *)Cont_62_10,(void *)Initial_64_11,(void *)Always_69_12};
	xsi_register_didat("work_m_00000000004210633194_0021851545", "isim/test_isim_beh.exe.sim/work/m_00000000004210633194_0021851545.didat");
	xsi_register_executes(pe);
}
