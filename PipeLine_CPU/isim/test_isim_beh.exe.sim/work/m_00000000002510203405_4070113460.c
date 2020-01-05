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
static const char *ng0 = "E:/CPU Project/PipeLine_CPU/Level_Memory.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {13U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {24U, 0U};
static unsigned int ng6[] = {35U, 0U};
static unsigned int ng7[] = {43U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {0U, 0U};
static unsigned int ng12[] = {33U, 0U};
static unsigned int ng13[] = {8U, 0U};



static void Cont_41_0(char *t0)
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

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5480);
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
    t18 = (t0 + 5352);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t6[8];
    char t16[8];
    char t48[8];
    char t49[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
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
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
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
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 16);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    xsi_vlogtype_concat(t5, 32, 5, 1U, t6, 5);
    t15 = ((char*)((ng1)));
    memset(t16, 0, 8);
    t17 = (t5 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t18);
    t24 = (t22 ^ t23);
    t25 = (t21 | t24);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB7;

LAB4:    if (t28 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t16) = 1;

LAB7:    memset(t4, 0, 8);
    t32 = (t16 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t16);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t32) != 0)
        goto LAB10;

LAB11:    t39 = (t4 + 4);
    t40 = *((unsigned int *)t4);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB12;

LAB13:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t39) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t48, 8);

LAB20:    t79 = (t0 + 5544);
    t86 = (t79 + 56U);
    t87 = *((char **)t86);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    memcpy(t89, t3, 8);
    xsi_driver_vfirst_trans(t79, 0, 31);
    t90 = (t0 + 5368);
    *((int *)t90) = 1;

LAB1:    return;
LAB6:    t31 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t38 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB11;

LAB12:    t43 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t50 = (t0 + 2328U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng1)));
    memset(t52, 0, 8);
    t53 = (t51 + 4);
    t54 = (t50 + 4);
    t55 = *((unsigned int *)t51);
    t56 = *((unsigned int *)t50);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB24;

LAB21:    if (t64 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t52) = 1;

LAB24:    memset(t49, 0, 8);
    t68 = (t52 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t68) != 0)
        goto LAB27;

LAB28:    t75 = (t49 + 4);
    t76 = *((unsigned int *)t49);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB29;

LAB30:    t81 = *((unsigned int *)t49);
    t82 = (~(t81));
    t83 = *((unsigned int *)t75);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t75) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t49) > 0)
        goto LAB35;

LAB36:    memcpy(t48, t85, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t43, 32, t48, 32);
    goto LAB20;

LAB18:    memcpy(t3, t43, 8);
    goto LAB20;

LAB23:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t49) = 1;
    goto LAB28;

LAB27:    t74 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB29:    t79 = (t0 + 2008U);
    t80 = *((char **)t79);
    goto LAB30;

LAB31:    t79 = (t0 + 2168U);
    t85 = *((char **)t79);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t48, 32, t80, 32, t85, 32);
    goto LAB37;

LAB35:    memcpy(t48, t80, 8);
    goto LAB37;

}

static void Cont_44_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 5384);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_48_3(char *t0)
{
    char t4[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t19;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5400);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);

LAB6:    t14 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t14, 6);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t15 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);

LAB26:    xsi_set_current_line(53, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3368);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 1);
    goto LAB25;

LAB9:    xsi_set_current_line(56, ng0);

LAB27:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB25;

LAB11:    xsi_set_current_line(60, ng0);

LAB28:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB25;

LAB13:    xsi_set_current_line(64, ng0);

LAB29:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB25;

LAB15:    xsi_set_current_line(68, ng0);

LAB30:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB25;

LAB17:    xsi_set_current_line(72, ng0);

LAB31:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB25;

LAB19:    xsi_set_current_line(76, ng0);

LAB32:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB25;

LAB21:    xsi_set_current_line(80, ng0);

LAB33:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB25;

LAB23:    xsi_set_current_line(84, ng0);

LAB34:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 63U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 63U);

LAB35:    t7 = ((char*)((ng12)));
    t19 = xsi_vlog_unsigned_case_compare(t18, 6, t7, 6);
    if (t19 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 6, t2, 6);
    if (t15 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 6, t2, 6);
    if (t15 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t18, 6, t2, 6);
    if (t15 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB25;

LAB36:    xsi_set_current_line(87, ng0);

LAB45:    xsi_set_current_line(88, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 3368);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 1);
    goto LAB44;

LAB38:    xsi_set_current_line(91, ng0);

LAB46:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB44;

LAB40:    xsi_set_current_line(95, ng0);

LAB47:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB44;

LAB42:    xsi_set_current_line(99, ng0);

LAB48:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB44;

}


extern void work_m_00000000002510203405_4070113460_init()
{
	static char *pe[] = {(void *)Cont_41_0,(void *)Cont_43_1,(void *)Cont_44_2,(void *)Always_48_3};
	xsi_register_didat("work_m_00000000002510203405_4070113460", "isim/test_isim_beh.exe.sim/work/m_00000000002510203405_4070113460.didat");
	xsi_register_executes(pe);
}
