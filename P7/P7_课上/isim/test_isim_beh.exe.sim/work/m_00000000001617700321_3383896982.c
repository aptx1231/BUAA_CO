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
static const char *ng0 = "D:/P7/pc.v";
static unsigned int ng1[] = {12288U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {20476U, 0U};
static int ng4[] = {4, 0};
static int ng5[] = {0, 0};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t17[8];
    char t33[8];
    char t50[8];
    char t54[8];
    char t62[8];
    char t90[8];
    char t107[8];
    char t111[8];
    char t119[8];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t18;
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
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2088);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 3U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t18 = (t5 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB5;

LAB4:    if (t29 != 0)
        goto LAB6;

LAB7:    memset(t33, 0, 8);
    t34 = (t17 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t17);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t34) != 0)
        goto LAB10;

LAB11:    t41 = (t33 + 4);
    t42 = *((unsigned int *)t33);
    t43 = (!(t42));
    t44 = *((unsigned int *)t41);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB12;

LAB13:    memcpy(t62, t33, 8);

LAB14:    memset(t90, 0, 8);
    t91 = (t62 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t62);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t91) != 0)
        goto LAB29;

LAB30:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = (!(t99));
    t101 = *((unsigned int *)t98);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB31;

LAB32:    memcpy(t119, t90, 8);

LAB33:    memset(t4, 0, 8);
    t147 = (t119 + 4);
    t148 = *((unsigned int *)t147);
    t149 = (~(t148));
    t150 = *((unsigned int *)t119);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t147) != 0)
        goto LAB48;

LAB49:    t154 = (t4 + 4);
    t155 = *((unsigned int *)t4);
    t156 = *((unsigned int *)t154);
    t157 = (t155 || t156);
    if (t157 > 0)
        goto LAB50;

LAB51:    t159 = *((unsigned int *)t4);
    t160 = (~(t159));
    t161 = *((unsigned int *)t154);
    t162 = (t160 || t161);
    if (t162 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t154) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t4) > 0)
        goto LAB56;

LAB57:    memcpy(t3, t163, 8);

LAB58:    t164 = (t0 + 3920);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    memset(t168, 0, 8);
    t169 = 31U;
    t170 = t169;
    t171 = (t3 + 4);
    t172 = *((unsigned int *)t3);
    t169 = (t169 & t172);
    t173 = *((unsigned int *)t171);
    t170 = (t170 & t173);
    t174 = (t168 + 4);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t175 | t169);
    t176 = *((unsigned int *)t174);
    *((unsigned int *)t174) = (t176 | t170);
    xsi_driver_vfirst_trans(t164, 0, 4);
    t177 = (t0 + 3824);
    *((int *)t177) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t17) = 1;
    goto LAB7;

LAB6:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB10:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB11;

LAB12:    t46 = (t0 + 2088);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng1)));
    memset(t50, 0, 8);
    t51 = (t48 + 4);
    if (*((unsigned int *)t51) != 0)
        goto LAB16;

LAB15:    t52 = (t49 + 4);
    if (*((unsigned int *)t52) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t48) < *((unsigned int *)t49))
        goto LAB17;

LAB18:    memset(t54, 0, 8);
    t55 = (t50 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t50);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t55) != 0)
        goto LAB22;

LAB23:    t63 = *((unsigned int *)t33);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = (t33 + 4);
    t67 = (t54 + 4);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t66);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB14;

LAB16:    t53 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t50) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t54) = 1;
    goto LAB23;

LAB22:    t61 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB23;

LAB24:    t74 = *((unsigned int *)t62);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t62) = (t74 | t75);
    t76 = (t33 + 4);
    t77 = (t54 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (~(t78));
    t80 = *((unsigned int *)t33);
    t81 = (t80 & t79);
    t82 = *((unsigned int *)t77);
    t83 = (~(t82));
    t84 = *((unsigned int *)t54);
    t85 = (t84 & t83);
    t86 = (~(t81));
    t87 = (~(t85));
    t88 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t88 & t86);
    t89 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t89 & t87);
    goto LAB26;

LAB27:    *((unsigned int *)t90) = 1;
    goto LAB30;

LAB29:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB30;

LAB31:    t103 = (t0 + 2088);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = ((char*)((ng3)));
    memset(t107, 0, 8);
    t108 = (t105 + 4);
    if (*((unsigned int *)t108) != 0)
        goto LAB35;

LAB34:    t109 = (t106 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t105) > *((unsigned int *)t106))
        goto LAB36;

LAB37:    memset(t111, 0, 8);
    t112 = (t107 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t107);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t112) != 0)
        goto LAB41;

LAB42:    t120 = *((unsigned int *)t90);
    t121 = *((unsigned int *)t111);
    t122 = (t120 | t121);
    *((unsigned int *)t119) = t122;
    t123 = (t90 + 4);
    t124 = (t111 + 4);
    t125 = (t119 + 4);
    t126 = *((unsigned int *)t123);
    t127 = *((unsigned int *)t124);
    t128 = (t126 | t127);
    *((unsigned int *)t125) = t128;
    t129 = *((unsigned int *)t125);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t110 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t107) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t111) = 1;
    goto LAB42;

LAB41:    t118 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB42;

LAB43:    t131 = *((unsigned int *)t119);
    t132 = *((unsigned int *)t125);
    *((unsigned int *)t119) = (t131 | t132);
    t133 = (t90 + 4);
    t134 = (t111 + 4);
    t135 = *((unsigned int *)t133);
    t136 = (~(t135));
    t137 = *((unsigned int *)t90);
    t138 = (t137 & t136);
    t139 = *((unsigned int *)t134);
    t140 = (~(t139));
    t141 = *((unsigned int *)t111);
    t142 = (t141 & t140);
    t143 = (~(t138));
    t144 = (~(t142));
    t145 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t145 & t143);
    t146 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t146 & t144);
    goto LAB45;

LAB46:    *((unsigned int *)t4) = 1;
    goto LAB49;

LAB48:    t153 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB49;

LAB50:    t158 = ((char*)((ng4)));
    goto LAB51;

LAB52:    t163 = ((char*)((ng5)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t3, 32, t158, 32, t163, 32);
    goto LAB58;

LAB56:    memcpy(t3, t158, 8);
    goto LAB58;

}

static void Always_36_2(char *t0)
{
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

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3840);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
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

LAB7:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);

LAB9:    xsi_set_current_line(38, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB12;

}


extern void work_m_00000000001617700321_3383896982_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Cont_34_1,(void *)Always_36_2};
	xsi_register_didat("work_m_00000000001617700321_3383896982", "isim/test_isim_beh.exe.sim/work/m_00000000001617700321_3383896982.didat");
	xsi_register_executes(pe);
}
