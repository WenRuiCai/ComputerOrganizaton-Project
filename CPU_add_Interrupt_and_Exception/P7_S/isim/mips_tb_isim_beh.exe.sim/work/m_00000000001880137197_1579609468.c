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
static const char *ng0 = "E:/CPU Project/P7_S/P7_S/CMP.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};



static void Cont_38_0(char *t0)
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

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4464);
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
    t18 = (t0 + 4368);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_39_1(char *t0)
{
    char t7[8];
    char t8[8];
    char t12[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4384);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t9 = (t0 + 2000U);
    t10 = *((char **)t9);
    t9 = (t0 + 2160U);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB24;

LAB22:    t9 = (t10 + 4);
    t13 = (t11 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t13))
        goto LAB24;

LAB23:    *((unsigned int *)t12) = 1;

LAB24:    memset(t8, 0, 8);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t12);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t14) != 0)
        goto LAB27;

LAB28:    t21 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB29;

LAB30:    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t21) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t8) > 0)
        goto LAB35;

LAB36:    memcpy(t7, t30, 8);

LAB37:    t31 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t31, t7, 0, 0, 1, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = (t0 + 2160U);
    t9 = *((char **)t3);
    memset(t12, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t9))
        goto LAB39;

LAB38:    t3 = (t4 + 4);
    t10 = (t9 + 4);
    if (*((unsigned int *)t3) != *((unsigned int *)t10))
        goto LAB39;

LAB40:    memset(t8, 0, 8);
    t11 = (t12 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    t17 = *((unsigned int *)t12);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t11) != 0)
        goto LAB43;

LAB44:    t14 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB45;

LAB46:    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t14) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t8) > 0)
        goto LAB51;

LAB52:    memcpy(t7, t21, 8);

LAB53:    t25 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t25, t7, 0, 0, 1, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_signed_leq(t32, 32, t4, 32, t3, 32);
    memset(t8, 0, 8);
    t9 = (t32 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t32);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t9) != 0)
        goto LAB56;

LAB57:    t11 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB58;

LAB59:    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t11) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t8) > 0)
        goto LAB64;

LAB65:    memcpy(t7, t14, 8);

LAB66:    t20 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t20, t7, 0, 0, 1, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_signed_greater(t32, 32, t4, 32, t3, 32);
    memset(t8, 0, 8);
    t9 = (t32 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t32);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t9) != 0)
        goto LAB69;

LAB70:    t11 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB71;

LAB72:    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t11) > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t8) > 0)
        goto LAB77;

LAB78:    memcpy(t7, t14, 8);

LAB79:    t20 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t20, t7, 0, 0, 1, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_signed_less(t32, 32, t4, 32, t3, 32);
    memset(t8, 0, 8);
    t9 = (t32 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t32);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t9) != 0)
        goto LAB82;

LAB83:    t11 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB84;

LAB85:    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t11) > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t8) > 0)
        goto LAB90;

LAB91:    memcpy(t7, t14, 8);

LAB92:    t20 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t20, t7, 0, 0, 1, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2000U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_signed_greatereq(t32, 32, t4, 32, t3, 32);
    memset(t8, 0, 8);
    t9 = (t32 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (~(t15));
    t17 = *((unsigned int *)t32);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t9) != 0)
        goto LAB95;

LAB96:    t11 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB97;

LAB98:    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t11) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t8) > 0)
        goto LAB103;

LAB104:    memcpy(t7, t14, 8);

LAB105:    t20 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t20, t7, 0, 0, 1, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t12, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t3))
        goto LAB108;

LAB106:    t9 = (t4 + 4);
    t10 = (t3 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB108;

LAB107:    *((unsigned int *)t12) = 1;

LAB108:    memset(t8, 0, 8);
    t11 = (t12 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (~(t15));
    t17 = *((unsigned int *)t12);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t11) != 0)
        goto LAB111;

LAB112:    t14 = (t8 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB113;

LAB114:    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t14) > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t8) > 0)
        goto LAB119;

LAB120:    memcpy(t7, t21, 8);

LAB121:    t25 = (t0 + 2880);
    xsi_vlogvar_wait_assign_value(t25, t7, 0, 0, 1, 0LL);
    goto LAB21;

LAB25:    *((unsigned int *)t8) = 1;
    goto LAB28;

LAB27:    t20 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB28;

LAB29:    t25 = ((char*)((ng2)));
    goto LAB30;

LAB31:    t30 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t7, 1, t25, 1, t30, 1);
    goto LAB37;

LAB35:    memcpy(t7, t25, 8);
    goto LAB37;

LAB39:    *((unsigned int *)t12) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t8) = 1;
    goto LAB44;

LAB43:    t13 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB44;

LAB45:    t20 = ((char*)((ng2)));
    goto LAB46;

LAB47:    t21 = ((char*)((ng1)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t7, 1, t20, 1, t21, 1);
    goto LAB53;

LAB51:    memcpy(t7, t20, 8);
    goto LAB53;

LAB54:    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB56:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB57;

LAB58:    t13 = ((char*)((ng2)));
    goto LAB59;

LAB60:    t14 = ((char*)((ng1)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t7, 1, t13, 1, t14, 1);
    goto LAB66;

LAB64:    memcpy(t7, t13, 8);
    goto LAB66;

LAB67:    *((unsigned int *)t8) = 1;
    goto LAB70;

LAB69:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB70;

LAB71:    t13 = ((char*)((ng2)));
    goto LAB72;

LAB73:    t14 = ((char*)((ng1)));
    goto LAB74;

LAB75:    xsi_vlog_unsigned_bit_combine(t7, 1, t13, 1, t14, 1);
    goto LAB79;

LAB77:    memcpy(t7, t13, 8);
    goto LAB79;

LAB80:    *((unsigned int *)t8) = 1;
    goto LAB83;

LAB82:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB83;

LAB84:    t13 = ((char*)((ng2)));
    goto LAB85;

LAB86:    t14 = ((char*)((ng1)));
    goto LAB87;

LAB88:    xsi_vlog_unsigned_bit_combine(t7, 1, t13, 1, t14, 1);
    goto LAB92;

LAB90:    memcpy(t7, t13, 8);
    goto LAB92;

LAB93:    *((unsigned int *)t8) = 1;
    goto LAB96;

LAB95:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB96;

LAB97:    t13 = ((char*)((ng2)));
    goto LAB98;

LAB99:    t14 = ((char*)((ng1)));
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t7, 1, t13, 1, t14, 1);
    goto LAB105;

LAB103:    memcpy(t7, t13, 8);
    goto LAB105;

LAB109:    *((unsigned int *)t8) = 1;
    goto LAB112;

LAB111:    t13 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB112;

LAB113:    t20 = ((char*)((ng2)));
    goto LAB114;

LAB115:    t21 = ((char*)((ng1)));
    goto LAB116;

LAB117:    xsi_vlog_unsigned_bit_combine(t7, 1, t20, 1, t21, 1);
    goto LAB121;

LAB119:    memcpy(t7, t20, 8);
    goto LAB121;

}


extern void work_m_00000000001880137197_1579609468_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Always_39_1};
	xsi_register_didat("work_m_00000000001880137197_1579609468", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000001880137197_1579609468.didat");
	xsi_register_executes(pe);
}
