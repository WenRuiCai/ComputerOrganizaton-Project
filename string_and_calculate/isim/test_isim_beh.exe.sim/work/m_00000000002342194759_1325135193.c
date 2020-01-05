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
static const char *ng0 = "E:/CPU Project/string_and_calculate/string_and_calculate.v";
static int ng1[] = {0, 0};
static int ng2[] = {49, 0};
static int ng3[] = {57, 0};
static int ng4[] = {48, 0};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static int ng7[] = {7, 0};
static int ng8[] = {10, 0};
static int ng9[] = {43, 0};
static int ng10[] = {3, 0};
static int ng11[] = {42, 0};
static int ng12[] = {4, 0};
static int ng13[] = {6, 0};
static int ng14[] = {5, 0};
static const char *ng15 = "Now into 4";
static int ng16[] = {9, 0};
static int ng17[] = {8, 0};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2728);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 5088);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t3, 8);
    xsi_driver_vfirst_trans(t26, 0, 31);
    t31 = (t0 + 4960);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 2568);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_36_1(char *t0)
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

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5152);
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
    t18 = (t0 + 4976);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_38_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_46_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4992);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}

static void Always_54_4(char *t0)
{
    char t14[8];
    char t18[8];
    char t27[8];
    char t31[8];
    char t39[8];
    char t79[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
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
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 4640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5008);
    *((int *)t2) = 1;
    t3 = (t0 + 4672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1368U);
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
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 32);
    if (t13 == 1)
        goto LAB30;

LAB31:
LAB32:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB12:    xsi_set_current_line(64, ng0);

LAB33:    xsi_set_current_line(65, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB35;

LAB34:    t16 = (t11 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB37;

LAB36:    *((unsigned int *)t14) = 1;

LAB37:    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t19) != 0)
        goto LAB41;

LAB42:    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB43;

LAB44:    memcpy(t39, t18, 8);

LAB45:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB65;

LAB62:    if (t34 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t14) = 1;

LAB65:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB73;

LAB70:    if (t34 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t14) = 1;

LAB73:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(80, ng0);

LAB78:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB76:
LAB68:
LAB60:    goto LAB32;

LAB14:    xsi_set_current_line(84, ng0);

LAB79:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB81;

LAB80:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB83;

LAB82:    *((unsigned int *)t14) = 1;

LAB83:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t16) != 0)
        goto LAB87;

LAB88:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB89;

LAB90:    memcpy(t39, t18, 8);

LAB91:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB111;

LAB108:    if (t34 != 0)
        goto LAB110;

LAB109:    *((unsigned int *)t14) = 1;

LAB111:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB119;

LAB116:    if (t34 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t14) = 1;

LAB119:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(101, ng0);

LAB124:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB122:
LAB114:
LAB106:    goto LAB32;

LAB16:    xsi_set_current_line(106, ng0);

LAB125:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB129;

LAB126:    if (t34 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t14) = 1;

LAB129:    t16 = (t14 + 4);
    t37 = *((unsigned int *)t16);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB137;

LAB134:    if (t34 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t14) = 1;

LAB137:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB138;

LAB139:    xsi_set_current_line(116, ng0);

LAB142:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB140:
LAB132:    goto LAB32;

LAB18:    xsi_set_current_line(121, ng0);

LAB143:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB147;

LAB144:    if (t34 != 0)
        goto LAB146;

LAB145:    *((unsigned int *)t14) = 1;

LAB147:    t16 = (t14 + 4);
    t37 = *((unsigned int *)t16);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB148;

LAB149:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB153;

LAB152:    t11 = (t2 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB153;

LAB156:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB155;

LAB154:    *((unsigned int *)t14) = 1;

LAB155:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t15) != 0)
        goto LAB159;

LAB160:    t17 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB161;

LAB162:    memcpy(t39, t18, 8);

LAB163:    t45 = (t39 + 4);
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB176;

LAB177:    xsi_set_current_line(134, ng0);

LAB180:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB178:
LAB150:    goto LAB32;

LAB20:    xsi_set_current_line(138, ng0);

LAB181:    xsi_set_current_line(139, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB185;

LAB182:    if (t34 != 0)
        goto LAB184;

LAB183:    *((unsigned int *)t14) = 1;

LAB185:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB186;

LAB187:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB191;

LAB190:    t11 = (t2 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB191;

LAB194:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB193;

LAB192:    *((unsigned int *)t14) = 1;

LAB193:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t15) != 0)
        goto LAB197;

LAB198:    t17 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB199;

LAB200:    memcpy(t39, t18, 8);

LAB201:    t45 = (t39 + 4);
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB214;

LAB215:    xsi_set_current_line(156, ng0);

LAB218:    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB216:
LAB188:    goto LAB32;

LAB22:    xsi_set_current_line(160, ng0);

LAB219:    xsi_set_current_line(161, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB221;

LAB220:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB221;

LAB224:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB223;

LAB222:    *((unsigned int *)t14) = 1;

LAB223:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB225;

LAB226:    if (*((unsigned int *)t16) != 0)
        goto LAB227;

LAB228:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB229;

LAB230:    memcpy(t39, t18, 8);

LAB231:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB244;

LAB245:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB251;

LAB248:    if (t34 != 0)
        goto LAB250;

LAB249:    *((unsigned int *)t14) = 1;

LAB251:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB252;

LAB253:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB259;

LAB256:    if (t34 != 0)
        goto LAB258;

LAB257:    *((unsigned int *)t14) = 1;

LAB259:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB260;

LAB261:    xsi_set_current_line(176, ng0);

LAB264:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB262:
LAB254:
LAB246:    goto LAB32;

LAB24:    xsi_set_current_line(181, ng0);

LAB265:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB269;

LAB266:    if (t34 != 0)
        goto LAB268;

LAB267:    *((unsigned int *)t14) = 1;

LAB269:    t16 = (t14 + 4);
    t37 = *((unsigned int *)t16);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB270;

LAB271:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB277;

LAB274:    if (t34 != 0)
        goto LAB276;

LAB275:    *((unsigned int *)t14) = 1;

LAB277:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB278;

LAB279:    xsi_set_current_line(191, ng0);

LAB282:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB280:
LAB272:    goto LAB32;

LAB26:    xsi_set_current_line(196, ng0);

LAB283:    xsi_set_current_line(197, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB285;

LAB284:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB285;

LAB288:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB287;

LAB286:    *((unsigned int *)t14) = 1;

LAB287:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB289;

LAB290:    if (*((unsigned int *)t16) != 0)
        goto LAB291;

LAB292:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB293;

LAB294:    memcpy(t39, t18, 8);

LAB295:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB308;

LAB309:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB315;

LAB312:    if (t34 != 0)
        goto LAB314;

LAB313:    *((unsigned int *)t14) = 1;

LAB315:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB316;

LAB317:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB323;

LAB320:    if (t34 != 0)
        goto LAB322;

LAB321:    *((unsigned int *)t14) = 1;

LAB323:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB324;

LAB325:    xsi_set_current_line(211, ng0);

LAB328:    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB326:
LAB318:
LAB310:    goto LAB32;

LAB28:    xsi_set_current_line(216, ng0);

LAB329:    xsi_set_current_line(217, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng9)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB333;

LAB330:    if (t34 != 0)
        goto LAB332;

LAB331:    *((unsigned int *)t14) = 1;

LAB333:    t16 = (t14 + 4);
    t37 = *((unsigned int *)t16);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB334;

LAB335:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB341;

LAB338:    if (t34 != 0)
        goto LAB340;

LAB339:    *((unsigned int *)t14) = 1;

LAB341:    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB342;

LAB343:    xsi_set_current_line(225, ng0);

LAB346:    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB344:
LAB336:    goto LAB32;

LAB30:    xsi_set_current_line(230, ng0);

LAB347:    xsi_set_current_line(231, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB32;

LAB35:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t18) = 1;
    goto LAB42;

LAB41:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB42;

LAB43:    t25 = (t0 + 1048U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB47;

LAB46:    t29 = (t25 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t26) > *((unsigned int *)t25))
        goto LAB49;

LAB48:    *((unsigned int *)t27) = 1;

LAB49:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t32) != 0)
        goto LAB53;

LAB54:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB45;

LAB47:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB49;

LAB51:    *((unsigned int *)t31) = 1;
    goto LAB54;

LAB53:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB54;

LAB55:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t18 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB57;

LAB58:    xsi_set_current_line(65, ng0);

LAB61:    xsi_set_current_line(66, ng0);
    t77 = (t0 + 1048U);
    t78 = *((char **)t77);
    t77 = ((char*)((ng4)));
    memset(t79, 0, 8);
    xsi_vlog_unsigned_minus(t79, 32, t78, 8, t77, 32);
    t80 = (t0 + 2568);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t3, 8, t2, 32);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t14, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB60;

LAB64:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(71, ng0);

LAB69:    xsi_set_current_line(72, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t17, 8, t16, 32);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t3, 8, t2, 32);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t14, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB68;

LAB72:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(77, ng0);

LAB77:    xsi_set_current_line(78, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 2408);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    goto LAB76;

LAB81:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB83;

LAB85:    *((unsigned int *)t18) = 1;
    goto LAB88;

LAB87:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB88;

LAB89:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB93;

LAB92:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB93;

LAB96:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB95;

LAB94:    *((unsigned int *)t27) = 1;

LAB95:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t29) != 0)
        goto LAB99;

LAB100:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB91;

LAB93:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB95;

LAB97:    *((unsigned int *)t31) = 1;
    goto LAB100;

LAB99:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB100;

LAB101:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB103;

LAB104:    xsi_set_current_line(85, ng0);

LAB107:    xsi_set_current_line(86, ng0);
    t54 = (t0 + 2568);
    t71 = (t54 + 56U);
    t77 = *((char **)t71);
    t78 = (t0 + 2088);
    t80 = (t78 + 56U);
    t81 = *((char **)t80);
    memset(t79, 0, 8);
    xsi_vlog_unsigned_minus(t79, 32, t77, 32, t81, 32);
    t82 = (t0 + 2568);
    xsi_vlogvar_assign_value(t82, t79, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng8)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t5, 32, t11, 32);
    t12 = (t0 + 1048U);
    t15 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t14, 32, t15, 8);
    t12 = ((char*)((ng4)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t18, 32, t12, 32);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t27, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB106;

LAB110:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(92, ng0);

LAB115:    xsi_set_current_line(93, ng0);
    t16 = ((char*)((ng10)));
    t17 = (t0 + 2408);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB114;

LAB118:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(96, ng0);

LAB123:    xsi_set_current_line(97, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB122;

LAB128:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(107, ng0);

LAB133:    xsi_set_current_line(108, ng0);
    t17 = ((char*)((ng10)));
    t19 = (t0 + 2408);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 8);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB132;

LAB136:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB137;

LAB138:    xsi_set_current_line(111, ng0);

LAB141:    xsi_set_current_line(112, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB140;

LAB146:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB147;

LAB148:    xsi_set_current_line(122, ng0);

LAB151:    xsi_set_current_line(123, ng0);
    t17 = (t0 + 1048U);
    t19 = *((char **)t17);
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_minus(t18, 32, t19, 8, t17, 32);
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t18, 0, 0, 32);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB150;

LAB153:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB155;

LAB157:    *((unsigned int *)t18) = 1;
    goto LAB160;

LAB159:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB160;

LAB161:    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB165;

LAB164:    t25 = (t19 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB165;

LAB168:    if (*((unsigned int *)t20) > *((unsigned int *)t19))
        goto LAB167;

LAB166:    *((unsigned int *)t27) = 1;

LAB167:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t28) != 0)
        goto LAB171;

LAB172:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t32);
    t48 = (t46 | t47);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t38);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB163;

LAB165:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB167;

LAB169:    *((unsigned int *)t31) = 1;
    goto LAB172;

LAB171:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB172;

LAB173:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t51 | t52);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (~(t61));
    t13 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t13));
    t66 = (~(t63));
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB175;

LAB176:    xsi_set_current_line(128, ng0);

LAB179:    xsi_set_current_line(129, ng0);
    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    t53 = ((char*)((ng4)));
    memset(t79, 0, 8);
    xsi_vlog_unsigned_minus(t79, 32, t54, 8, t53, 32);
    t71 = (t0 + 2088);
    xsi_vlogvar_assign_value(t71, t79, 0, 0, 32);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB178;

LAB184:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB185;

LAB186:    xsi_set_current_line(140, ng0);

LAB189:    xsi_set_current_line(141, ng0);
    t16 = (t0 + 2248);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t12, 8, t11, 32);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t5, 32, t14, 32);
    t15 = (t0 + 2248);
    xsi_vlogvar_assign_value(t15, t18, 0, 0, 32);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB188;

LAB191:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB193;

LAB195:    *((unsigned int *)t18) = 1;
    goto LAB198;

LAB197:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB198;

LAB199:    t19 = (t0 + 1048U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB203;

LAB202:    t25 = (t19 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB203;

LAB206:    if (*((unsigned int *)t20) > *((unsigned int *)t19))
        goto LAB205;

LAB204:    *((unsigned int *)t27) = 1;

LAB205:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t28) != 0)
        goto LAB209;

LAB210:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t32);
    t48 = (t46 | t47);
    *((unsigned int *)t38) = t48;
    t49 = *((unsigned int *)t38);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB211;

LAB212:
LAB213:    goto LAB201;

LAB203:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB205;

LAB207:    *((unsigned int *)t31) = 1;
    goto LAB210;

LAB209:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB210;

LAB211:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t51 | t52);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t44);
    t62 = (~(t61));
    t13 = (t56 & t58);
    t63 = (t60 & t62);
    t65 = (~(t13));
    t66 = (~(t63));
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB213;

LAB214:    xsi_set_current_line(148, ng0);

LAB217:    xsi_set_current_line(149, ng0);
    t53 = (t0 + 2248);
    t54 = (t53 + 56U);
    t71 = *((char **)t54);
    t77 = (t0 + 2088);
    xsi_vlogvar_assign_value(t77, t71, 0, 0, 32);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t12, 8, t11, 32);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t5, 32, t14, 32);
    t15 = (t0 + 2248);
    xsi_vlogvar_assign_value(t15, t18, 0, 0, 32);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB216;

LAB221:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB223;

LAB225:    *((unsigned int *)t18) = 1;
    goto LAB228;

LAB227:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB228;

LAB229:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB233;

LAB232:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB233;

LAB236:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB235;

LAB234:    *((unsigned int *)t27) = 1;

LAB235:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB237;

LAB238:    if (*((unsigned int *)t29) != 0)
        goto LAB239;

LAB240:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB241;

LAB242:
LAB243:    goto LAB231;

LAB233:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB235;

LAB237:    *((unsigned int *)t31) = 1;
    goto LAB240;

LAB239:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB240;

LAB241:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB243;

LAB244:    xsi_set_current_line(161, ng0);

LAB247:    xsi_set_current_line(162, ng0);
    t54 = (t0 + 2568);
    t71 = (t54 + 56U);
    t77 = *((char **)t71);
    t78 = (t0 + 2088);
    t80 = (t78 + 56U);
    t81 = *((char **)t80);
    memset(t79, 0, 8);
    xsi_vlog_unsigned_minus(t79, 32, t77, 32, t81, 32);
    t82 = (t0 + 2568);
    xsi_vlogvar_assign_value(t82, t79, 0, 0, 32);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng8)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t5, 32, t11, 32);
    t12 = (t0 + 1048U);
    t15 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t14, 32, t15, 8);
    t12 = ((char*)((ng4)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t18, 32, t12, 32);
    t16 = (t0 + 2088);
    xsi_vlogvar_assign_value(t16, t27, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB246;

LAB250:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB251;

LAB252:    xsi_set_current_line(167, ng0);

LAB255:    xsi_set_current_line(168, ng0);
    t16 = ((char*)((ng10)));
    t17 = (t0 + 2408);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB254;

LAB258:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB259;

LAB260:    xsi_set_current_line(171, ng0);

LAB263:    xsi_set_current_line(172, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB262;

LAB268:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB269;

LAB270:    xsi_set_current_line(182, ng0);

LAB273:    xsi_set_current_line(183, ng0);
    t17 = ((char*)((ng10)));
    t19 = (t0 + 2408);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 8);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB272;

LAB276:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB277;

LAB278:    xsi_set_current_line(186, ng0);

LAB281:    xsi_set_current_line(187, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB280;

LAB285:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB287;

LAB289:    *((unsigned int *)t18) = 1;
    goto LAB292;

LAB291:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB292;

LAB293:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB297;

LAB296:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB297;

LAB300:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB299;

LAB298:    *((unsigned int *)t27) = 1;

LAB299:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB301;

LAB302:    if (*((unsigned int *)t29) != 0)
        goto LAB303;

LAB304:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB305;

LAB306:
LAB307:    goto LAB295;

LAB297:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB299;

LAB301:    *((unsigned int *)t31) = 1;
    goto LAB304;

LAB303:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB304;

LAB305:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB307;

LAB308:    xsi_set_current_line(197, ng0);

LAB311:    xsi_set_current_line(198, ng0);
    t54 = (t0 + 2568);
    t71 = (t54 + 56U);
    t77 = *((char **)t71);
    t78 = (t0 + 2248);
    t80 = (t78 + 56U);
    t81 = *((char **)t80);
    memset(t79, 0, 8);
    xsi_vlog_unsigned_minus(t79, 32, t77, 32, t81, 32);
    t82 = (t0 + 2568);
    xsi_vlogvar_assign_value(t82, t79, 0, 0, 32);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_divide(t14, 32, t15, 32, t19, 32);
    t20 = ((char*)((ng8)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t14, 32, t20, 32);
    t21 = (t0 + 1048U);
    t25 = *((char **)t21);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t18, 32, t25, 8);
    t21 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t27, 32, t21, 32);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 32, t5, 32, t31, 32);
    t26 = (t0 + 2248);
    xsi_vlogvar_assign_value(t26, t39, 0, 0, 32);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t15, 32);
    t16 = (t0 + 2568);
    xsi_vlogvar_assign_value(t16, t14, 0, 0, 32);
    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB310;

LAB314:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB315;

LAB316:    xsi_set_current_line(203, ng0);

LAB319:    xsi_set_current_line(204, ng0);
    t16 = ((char*)((ng10)));
    t17 = (t0 + 2408);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB318;

LAB322:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB323;

LAB324:    xsi_set_current_line(207, ng0);

LAB327:    xsi_set_current_line(208, ng0);
    t16 = ((char*)((ng12)));
    t17 = (t0 + 2408);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB326;

LAB332:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB333;

LAB334:    xsi_set_current_line(217, ng0);

LAB337:    xsi_set_current_line(218, ng0);
    t17 = ((char*)((ng10)));
    t19 = (t0 + 2408);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 8);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB336;

LAB340:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB341;

LAB342:    xsi_set_current_line(221, ng0);

LAB345:    xsi_set_current_line(222, ng0);
    t16 = ((char*)((ng12)));
    t17 = (t0 + 2408);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 8);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB344;

}


extern void work_m_00000000002342194759_1325135193_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Initial_38_2,(void *)Always_46_3,(void *)Always_54_4};
	xsi_register_didat("work_m_00000000002342194759_1325135193", "isim/test_isim_beh.exe.sim/work/m_00000000002342194759_1325135193.didat");
	xsi_register_executes(pe);
}
