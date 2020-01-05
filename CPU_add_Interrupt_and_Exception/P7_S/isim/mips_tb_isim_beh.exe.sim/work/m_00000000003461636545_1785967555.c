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
static const char *ng0 = "E:/CPU Project/P7_S/P7_S/EXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {2U, 0U};



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
    char *t10;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3256);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t7[8];
    char t8[8];
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3272);
    *((int *)t2) = 1;
    t3 = (t0 + 2968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t10, 16);
    t9 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t9, 16, t8, 16);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 32, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t4, 16);
    t3 = ((char*)((ng3)));
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    memset(t13, 0, 8);
    t9 = (t13 + 4);
    t11 = (t10 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t9) = t19;
    xsi_vlog_mul_concat(t12, 16, 1, t3, 1U, t13, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t12, 16, t8, 16);
    t20 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t20, t7, 0, 0, 32, 0LL);
    goto LAB13;

LAB11:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    xsi_vlogtype_concat(t8, 16, 16, 1U, t9, 16);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t3, 16);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB13;

}


extern void work_m_00000000003461636545_1785967555_init()
{
	static char *pe[] = {(void *)Cont_32_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000003461636545_1785967555", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003461636545_1785967555.didat");
	xsi_register_executes(pe);
}
