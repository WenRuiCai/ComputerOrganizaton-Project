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
static const char *ng0 = "E:/CPU Project/P7_S/P7_S/DataExtend.v";
static int ng1[] = {16, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {24, 0};



static void Cont_42_0(char *t0)
{
    char t3[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 1688U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 16, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 16, t4, 16);
    t16 = (t0 + 4840);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 4712);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t2, 16, t4, 16);
    t5 = (t0 + 4904);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4728);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_44_2(char *t0)
{
    char t3[8];
    char t5[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    t6 = (t0 + 2168U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t6) = t15;
    xsi_vlog_mul_concat(t5, 24, 1, t2, 1U, t8, 1);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 24, t4, 8);
    t16 = (t0 + 4968);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 4744);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Cont_45_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t2, 24, t4, 8);
    t5 = (t0 + 5032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4760);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002528032899_1130862454_init()
{
	static char *pe[] = {(void *)Cont_42_0,(void *)Cont_43_1,(void *)Cont_44_2,(void *)Cont_45_3};
	xsi_register_didat("work_m_00000000002528032899_1130862454", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002528032899_1130862454.didat");
	xsi_register_executes(pe);
}
