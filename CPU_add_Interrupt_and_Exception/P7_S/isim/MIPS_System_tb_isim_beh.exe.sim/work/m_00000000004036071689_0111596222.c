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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/ISE_project/P7_S/P7_S/EXC_DT_IF.v";
static unsigned int ng1[] = {20479U, 0U};
static unsigned int ng2[] = {12288U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {31U, 0U};



static void Cont_32_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t12[8];
    char t16[8];
    char t44[8];
    char t55[8];
    char t58[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
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
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB4:    t8 = (t2 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t5) > *((unsigned int *)t2))
        goto LAB6;

LAB7:    t10 = (t0 + 600U);
    t11 = *((char **)t10);
    t10 = ((char*)((ng2)));
    memset(t12, 0, 8);
    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB9:    t14 = (t10 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB13:    if (*((unsigned int *)t11) < *((unsigned int *)t10))
        goto LAB11;

LAB12:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = (t6 + 4);
    t21 = (t12 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB14;

LAB15:
LAB16:    t45 = (t0 + 600U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 0);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 3U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 3U);
    t54 = ((char*)((ng3)));
    memset(t55, 0, 8);
    if (*((unsigned int *)t44) != *((unsigned int *)t54))
        goto LAB18;

LAB17:    t56 = (t44 + 4);
    t57 = (t54 + 4);
    if (*((unsigned int *)t56) != *((unsigned int *)t57))
        goto LAB18;

LAB19:    t59 = *((unsigned int *)t16);
    t60 = *((unsigned int *)t55);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = (t16 + 4);
    t63 = (t55 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB20;

LAB21:
LAB22:    memset(t4, 0, 8);
    t86 = (t58 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t58);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t86) != 0)
        goto LAB25;

LAB26:    t93 = (t4 + 4);
    t94 = *((unsigned int *)t4);
    t95 = *((unsigned int *)t93);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB27;

LAB28:    t98 = *((unsigned int *)t4);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (t99 || t100);
    if (t101 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t93) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t4) > 0)
        goto LAB33;

LAB34:    memcpy(t3, t102, 8);

LAB35:    t103 = (t0 + 1592);
    t104 = (t103 + 32U);
    t105 = *((char **)t104);
    t106 = (t105 + 40U);
    t107 = *((char **)t106);
    memset(t107, 0, 8);
    t108 = 31U;
    t109 = t108;
    t110 = (t3 + 4);
    t111 = *((unsigned int *)t3);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t110);
    t109 = (t109 & t112);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t114 | t108);
    t115 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t115 | t109);
    xsi_driver_vfirst_trans(t103, 0, 4);
    t116 = (t0 + 1548);
    *((int *)t116) = 1;

LAB1:    return;
LAB5:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB10:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB12;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB14:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t6 + 4);
    t31 = (t12 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t12);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    goto LAB16;

LAB18:    *((unsigned int *)t55) = 1;
    goto LAB19;

LAB20:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t16 + 4);
    t73 = (t55 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (~(t74));
    t76 = *((unsigned int *)t16);
    t77 = (t76 & t75);
    t78 = *((unsigned int *)t73);
    t79 = (~(t78));
    t80 = *((unsigned int *)t55);
    t81 = (t80 & t79);
    t82 = (~(t77));
    t83 = (~(t81));
    t84 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t84 & t82);
    t85 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t85 & t83);
    goto LAB22;

LAB23:    *((unsigned int *)t4) = 1;
    goto LAB26;

LAB25:    t92 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB26;

LAB27:    t97 = ((char*)((ng4)));
    goto LAB28;

LAB29:    t102 = ((char*)((ng5)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t3, 5, t97, 5, t102, 5);
    goto LAB35;

LAB33:    memcpy(t3, t97, 8);
    goto LAB35;

}


extern void work_m_00000000004036071689_0111596222_init()
{
	static char *pe[] = {(void *)Cont_32_0};
	xsi_register_didat("work_m_00000000004036071689_0111596222", "isim/MIPS_System_tb_isim_beh.exe.sim/work/m_00000000004036071689_0111596222.didat");
	xsi_register_executes(pe);
}
