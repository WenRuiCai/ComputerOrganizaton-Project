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
static const char *ng0 = "E:/CPU Project/PipeLine_CPU/EXT.v";
static int ng1[] = {15, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Cont_39_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5352);
    *((int *)t10) = 1;

LAB1:    return;
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
    t2 = (t0 + 3048);
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

static void Cont_41_2(char *t0)
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

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5384);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_43_3(char *t0)
{
    char t6[8];
    char t11[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5400);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1328U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB9;

LAB6:    if (t23 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t5, 16, t3, 16);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB12:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1528U);
    t7 = *((char **)t5);
    t5 = (t0 + 1048U);
    t8 = *((char **)t5);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t9 = (t8 + 4);
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 28);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 28);
    *((unsigned int *)t5) = t17;
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t11, 4, t7, 26, t4, 2);
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t5, 32, t7, 32);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t3, 32, t6, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t11, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB13:    t2 = ((char*)((ng2)));
    t39 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t39 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng3)));
    t39 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t39 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t39 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t39 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB2;

LAB8:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);
    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    t34 = (t0 + 2568);
    t36 = (t34 + 56U);
    t37 = *((char **)t36);
    xsi_vlogtype_concat(t33, 32, 32, 2U, t37, 16, t35, 16);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t33, 0, 0, 32);
    goto LAB12;

LAB14:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB20;

LAB16:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t9, 16, t7, 16);
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB20;

LAB18:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t8, 16, t5, 16);
    t9 = (t0 + 3368);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB20;

}


extern void work_m_00000000002285640708_1785967555_init()
{
	static char *pe[] = {(void *)Cont_39_0,(void *)Cont_40_1,(void *)Cont_41_2,(void *)Always_43_3};
	xsi_register_didat("work_m_00000000002285640708_1785967555", "isim/test_isim_beh.exe.sim/work/m_00000000002285640708_1785967555.didat");
	xsi_register_executes(pe);
}
