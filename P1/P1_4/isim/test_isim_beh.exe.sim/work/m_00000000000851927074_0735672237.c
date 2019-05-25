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
static const char *ng0 = "E:/Verilog/P1_4/gray.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Always_29_0(char *t0)
{
    char t13[8];
    char t21[8];
    char t33[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t93[8];
    char t109[8];
    char t118[8];
    char t133[8];
    char t142[8];
    char t150[8];
    char t182[8];
    char t190[8];
    char t219[8];
    char t227[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    int t174;
    int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t220;
    char *t221;
    char *t222;
    char *t223;
    char *t224;
    unsigned int t225;
    int t226;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
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

LAB7:    xsi_set_current_line(34, ng0);
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

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);

LAB9:    xsi_set_current_line(31, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t13 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t12) = t20;
    memset(t21, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t22) != 0)
        goto LAB16;

LAB17:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB18;

LAB19:    memcpy(t61, t21, 8);

LAB20:    memset(t93, 0, 8);
    t94 = (t61 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t94) != 0)
        goto LAB34;

LAB35:    t101 = (t93 + 4);
    t102 = *((unsigned int *)t93);
    t103 = (!(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB36;

LAB37:    memcpy(t190, t93, 8);

LAB38:    t218 = (t0 + 1768);
    t220 = (t0 + 1768);
    t221 = (t220 + 72U);
    t222 = *((char **)t221);
    t223 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t219, t222, 2, t223, 32, 1);
    t224 = (t219 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (!(t225));
    if (t226 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    memset(t13, 0, 8);
    t12 = (t21 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t21);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t12) == 0)
        goto LAB62;

LAB64:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;

LAB65:    memset(t33, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t22) != 0)
        goto LAB68;

LAB69:    t29 = (t33 + 4);
    t30 = *((unsigned int *)t33);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB70;

LAB71:    memcpy(t61, t33, 8);

LAB72:    memset(t93, 0, 8);
    t75 = (t61 + 4);
    t88 = *((unsigned int *)t75);
    t89 = (~(t88));
    t90 = *((unsigned int *)t61);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t75) != 0)
        goto LAB82;

LAB83:    t94 = (t93 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (!(t95));
    t97 = *((unsigned int *)t94);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB84;

LAB85:    memcpy(t219, t93, 8);

LAB86:    t218 = (t0 + 1768);
    t220 = (t0 + 1768);
    t221 = (t220 + 72U);
    t222 = *((char **)t221);
    t223 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t227, t222, 2, t223, 32, 1);
    t224 = (t227 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (!(t225));
    if (t226 == 1)
        goto LAB112;

LAB113:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t21, 0, 8);
    t5 = (t21 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    memset(t13, 0, 8);
    t12 = (t21 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t21);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB117;

LAB115:    if (*((unsigned int *)t12) == 0)
        goto LAB114;

LAB116:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;

LAB117:    memset(t33, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t22) != 0)
        goto LAB120;

LAB121:    t29 = (t33 + 4);
    t30 = *((unsigned int *)t33);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB122;

LAB123:    memcpy(t93, t33, 8);

LAB124:    memset(t109, 0, 8);
    t94 = (t93 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t94) != 0)
        goto LAB138;

LAB139:    t101 = (t109 + 4);
    t102 = *((unsigned int *)t109);
    t103 = (!(t102));
    t104 = *((unsigned int *)t101);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB140;

LAB141:    memcpy(t219, t109, 8);

LAB142:    t218 = (t0 + 1768);
    t220 = (t0 + 1768);
    t221 = (t220 + 72U);
    t222 = *((char **)t221);
    t223 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t227, t222, 2, t223, 32, 1);
    t224 = (t227 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (!(t225));
    if (t226 == 1)
        goto LAB164;

LAB165:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t23 = (t16 & t20);
    if (t23 != 0)
        goto LAB169;

LAB166:    if (t19 != 0)
        goto LAB168;

LAB167:    *((unsigned int *)t13) = 1;

LAB169:    t22 = (t13 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t30 = (t27 != 0);
    if (t30 > 0)
        goto LAB170;

LAB171:
LAB172:    goto LAB12;

LAB14:    *((unsigned int *)t21) = 1;
    goto LAB17;

LAB16:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    t34 = (t0 + 1768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 0);
    t42 = (t41 & 1);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 0);
    t45 = (t44 & 1);
    *((unsigned int *)t38) = t45;
    memset(t33, 0, 8);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t46) == 0)
        goto LAB21;

LAB23:    t52 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t52) = 1;

LAB24:    memset(t53, 0, 8);
    t54 = (t33 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t33);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t54) != 0)
        goto LAB27;

LAB28:    t62 = *((unsigned int *)t21);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t21 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB21:    *((unsigned int *)t33) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t53) = 1;
    goto LAB28;

LAB27:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB28;

LAB29:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t21 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t21);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB31;

LAB32:    *((unsigned int *)t93) = 1;
    goto LAB35;

LAB34:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB35;

LAB36:    t106 = (t0 + 1768);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    memset(t109, 0, 8);
    t110 = (t109 + 4);
    t111 = (t108 + 4);
    t112 = *((unsigned int *)t108);
    t113 = (t112 >> 2);
    t114 = (t113 & 1);
    *((unsigned int *)t109) = t114;
    t115 = *((unsigned int *)t111);
    t116 = (t115 >> 2);
    t117 = (t116 & 1);
    *((unsigned int *)t110) = t117;
    memset(t118, 0, 8);
    t119 = (t109 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t109);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t119) != 0)
        goto LAB41;

LAB42:    t126 = (t118 + 4);
    t127 = *((unsigned int *)t118);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB43;

LAB44:    memcpy(t150, t118, 8);

LAB45:    memset(t182, 0, 8);
    t183 = (t150 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t150);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t183) != 0)
        goto LAB55;

LAB56:    t191 = *((unsigned int *)t93);
    t192 = *((unsigned int *)t182);
    t193 = (t191 | t192);
    *((unsigned int *)t190) = t193;
    t194 = (t93 + 4);
    t195 = (t182 + 4);
    t196 = (t190 + 4);
    t197 = *((unsigned int *)t194);
    t198 = *((unsigned int *)t195);
    t199 = (t197 | t198);
    *((unsigned int *)t196) = t199;
    t200 = *((unsigned int *)t196);
    t201 = (t200 != 0);
    if (t201 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB38;

LAB39:    *((unsigned int *)t118) = 1;
    goto LAB42;

LAB41:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB42;

LAB43:    t130 = (t0 + 1768);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    memset(t133, 0, 8);
    t134 = (t133 + 4);
    t135 = (t132 + 4);
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 0);
    t138 = (t137 & 1);
    *((unsigned int *)t133) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 0);
    t141 = (t140 & 1);
    *((unsigned int *)t134) = t141;
    memset(t142, 0, 8);
    t143 = (t133 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t133);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t143) != 0)
        goto LAB48;

LAB49:    t151 = *((unsigned int *)t118);
    t152 = *((unsigned int *)t142);
    t153 = (t151 & t152);
    *((unsigned int *)t150) = t153;
    t154 = (t118 + 4);
    t155 = (t142 + 4);
    t156 = (t150 + 4);
    t157 = *((unsigned int *)t154);
    t158 = *((unsigned int *)t155);
    t159 = (t157 | t158);
    *((unsigned int *)t156) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 != 0);
    if (t161 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB45;

LAB46:    *((unsigned int *)t142) = 1;
    goto LAB49;

LAB48:    t149 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB49;

LAB50:    t162 = *((unsigned int *)t150);
    t163 = *((unsigned int *)t156);
    *((unsigned int *)t150) = (t162 | t163);
    t164 = (t118 + 4);
    t165 = (t142 + 4);
    t166 = *((unsigned int *)t118);
    t167 = (~(t166));
    t168 = *((unsigned int *)t164);
    t169 = (~(t168));
    t170 = *((unsigned int *)t142);
    t171 = (~(t170));
    t172 = *((unsigned int *)t165);
    t173 = (~(t172));
    t174 = (t167 & t169);
    t175 = (t171 & t173);
    t176 = (~(t174));
    t177 = (~(t175));
    t178 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t178 & t176);
    t179 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t179 & t177);
    t180 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t180 & t176);
    t181 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t181 & t177);
    goto LAB52;

LAB53:    *((unsigned int *)t182) = 1;
    goto LAB56;

LAB55:    t189 = (t182 + 4);
    *((unsigned int *)t182) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB56;

LAB57:    t202 = *((unsigned int *)t190);
    t203 = *((unsigned int *)t196);
    *((unsigned int *)t190) = (t202 | t203);
    t204 = (t93 + 4);
    t205 = (t182 + 4);
    t206 = *((unsigned int *)t204);
    t207 = (~(t206));
    t208 = *((unsigned int *)t93);
    t209 = (t208 & t207);
    t210 = *((unsigned int *)t205);
    t211 = (~(t210));
    t212 = *((unsigned int *)t182);
    t213 = (t212 & t211);
    t214 = (~(t209));
    t215 = (~(t213));
    t216 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t216 & t214);
    t217 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t217 & t215);
    goto LAB59;

LAB60:    xsi_vlogvar_wait_assign_value(t218, t190, 0, *((unsigned int *)t219), 1, 0LL);
    goto LAB61;

LAB62:    *((unsigned int *)t13) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t33) = 1;
    goto LAB69;

LAB68:    t28 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB69;

LAB70:    t34 = (t0 + 1768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 0);
    t42 = (t41 & 1);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 0);
    t45 = (t44 & 1);
    *((unsigned int *)t38) = t45;
    memset(t53, 0, 8);
    t46 = (t37 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t46) != 0)
        goto LAB75;

LAB76:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t53);
    t57 = (t55 & t56);
    *((unsigned int *)t61) = t57;
    t54 = (t33 + 4);
    t60 = (t53 + 4);
    t65 = (t61 + 4);
    t58 = *((unsigned int *)t54);
    t59 = *((unsigned int *)t60);
    t62 = (t58 | t59);
    *((unsigned int *)t65) = t62;
    t63 = *((unsigned int *)t65);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB72;

LAB73:    *((unsigned int *)t53) = 1;
    goto LAB76;

LAB75:    t52 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB76;

LAB77:    t68 = *((unsigned int *)t61);
    t69 = *((unsigned int *)t65);
    *((unsigned int *)t61) = (t68 | t69);
    t66 = (t33 + 4);
    t67 = (t53 + 4);
    t70 = *((unsigned int *)t33);
    t71 = (~(t70));
    t72 = *((unsigned int *)t66);
    t73 = (~(t72));
    t74 = *((unsigned int *)t53);
    t77 = (~(t74));
    t78 = *((unsigned int *)t67);
    t79 = (~(t78));
    t85 = (t71 & t73);
    t86 = (t77 & t79);
    t80 = (~(t85));
    t81 = (~(t86));
    t82 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t82 & t80);
    t83 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t80);
    t87 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t87 & t81);
    goto LAB79;

LAB80:    *((unsigned int *)t93) = 1;
    goto LAB83;

LAB82:    t76 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB83;

LAB84:    t100 = (t0 + 1768);
    t101 = (t100 + 56U);
    t106 = *((char **)t101);
    memset(t109, 0, 8);
    t107 = (t109 + 4);
    t108 = (t106 + 4);
    t99 = *((unsigned int *)t106);
    t102 = (t99 >> 1);
    t103 = (t102 & 1);
    *((unsigned int *)t109) = t103;
    t104 = *((unsigned int *)t108);
    t105 = (t104 >> 1);
    t112 = (t105 & 1);
    *((unsigned int *)t107) = t112;
    memset(t118, 0, 8);
    t110 = (t109 + 4);
    t113 = *((unsigned int *)t110);
    t114 = (~(t113));
    t115 = *((unsigned int *)t109);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t110) != 0)
        goto LAB89;

LAB90:    t119 = (t118 + 4);
    t120 = *((unsigned int *)t118);
    t121 = *((unsigned int *)t119);
    t122 = (t120 || t121);
    if (t122 > 0)
        goto LAB91;

LAB92:    memcpy(t182, t118, 8);

LAB93:    memset(t190, 0, 8);
    t183 = (t182 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t182);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t183) != 0)
        goto LAB107;

LAB108:    t191 = *((unsigned int *)t93);
    t192 = *((unsigned int *)t190);
    t193 = (t191 | t192);
    *((unsigned int *)t219) = t193;
    t194 = (t93 + 4);
    t195 = (t190 + 4);
    t196 = (t219 + 4);
    t197 = *((unsigned int *)t194);
    t198 = *((unsigned int *)t195);
    t199 = (t197 | t198);
    *((unsigned int *)t196) = t199;
    t200 = *((unsigned int *)t196);
    t201 = (t200 != 0);
    if (t201 == 1)
        goto LAB109;

LAB110:
LAB111:    goto LAB86;

LAB87:    *((unsigned int *)t118) = 1;
    goto LAB90;

LAB89:    t111 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB90;

LAB91:    t125 = (t0 + 1768);
    t126 = (t125 + 56U);
    t130 = *((char **)t126);
    memset(t142, 0, 8);
    t131 = (t142 + 4);
    t132 = (t130 + 4);
    t123 = *((unsigned int *)t130);
    t124 = (t123 >> 0);
    t127 = (t124 & 1);
    *((unsigned int *)t142) = t127;
    t128 = *((unsigned int *)t132);
    t129 = (t128 >> 0);
    t136 = (t129 & 1);
    *((unsigned int *)t131) = t136;
    memset(t133, 0, 8);
    t134 = (t142 + 4);
    t137 = *((unsigned int *)t134);
    t138 = (~(t137));
    t139 = *((unsigned int *)t142);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB97;

LAB95:    if (*((unsigned int *)t134) == 0)
        goto LAB94;

LAB96:    t135 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t135) = 1;

LAB97:    memset(t150, 0, 8);
    t143 = (t133 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t133);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t143) != 0)
        goto LAB100;

LAB101:    t151 = *((unsigned int *)t118);
    t152 = *((unsigned int *)t150);
    t153 = (t151 & t152);
    *((unsigned int *)t182) = t153;
    t154 = (t118 + 4);
    t155 = (t150 + 4);
    t156 = (t182 + 4);
    t157 = *((unsigned int *)t154);
    t158 = *((unsigned int *)t155);
    t159 = (t157 | t158);
    *((unsigned int *)t156) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 != 0);
    if (t161 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB94:    *((unsigned int *)t133) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t150) = 1;
    goto LAB101;

LAB100:    t149 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB101;

LAB102:    t162 = *((unsigned int *)t182);
    t163 = *((unsigned int *)t156);
    *((unsigned int *)t182) = (t162 | t163);
    t164 = (t118 + 4);
    t165 = (t150 + 4);
    t166 = *((unsigned int *)t118);
    t167 = (~(t166));
    t168 = *((unsigned int *)t164);
    t169 = (~(t168));
    t170 = *((unsigned int *)t150);
    t171 = (~(t170));
    t172 = *((unsigned int *)t165);
    t173 = (~(t172));
    t174 = (t167 & t169);
    t175 = (t171 & t173);
    t176 = (~(t174));
    t177 = (~(t175));
    t178 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t178 & t176);
    t179 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t179 & t177);
    t180 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t180 & t176);
    t181 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t181 & t177);
    goto LAB104;

LAB105:    *((unsigned int *)t190) = 1;
    goto LAB108;

LAB107:    t189 = (t190 + 4);
    *((unsigned int *)t190) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB108;

LAB109:    t202 = *((unsigned int *)t219);
    t203 = *((unsigned int *)t196);
    *((unsigned int *)t219) = (t202 | t203);
    t204 = (t93 + 4);
    t205 = (t190 + 4);
    t206 = *((unsigned int *)t204);
    t207 = (~(t206));
    t208 = *((unsigned int *)t93);
    t209 = (t208 & t207);
    t210 = *((unsigned int *)t205);
    t211 = (~(t210));
    t212 = *((unsigned int *)t190);
    t213 = (t212 & t211);
    t214 = (~(t209));
    t215 = (~(t213));
    t216 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t216 & t214);
    t217 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t217 & t215);
    goto LAB111;

LAB112:    xsi_vlogvar_wait_assign_value(t218, t219, 0, *((unsigned int *)t227), 1, 0LL);
    goto LAB113;

LAB114:    *((unsigned int *)t13) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t33) = 1;
    goto LAB121;

LAB120:    t28 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB121;

LAB122:    t34 = (t0 + 1768);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t53, 0, 8);
    t38 = (t53 + 4);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 1);
    t42 = (t41 & 1);
    *((unsigned int *)t53) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 1);
    t45 = (t44 & 1);
    *((unsigned int *)t38) = t45;
    memset(t37, 0, 8);
    t46 = (t53 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t53);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB128;

LAB126:    if (*((unsigned int *)t46) == 0)
        goto LAB125;

LAB127:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;

LAB128:    memset(t61, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t54) != 0)
        goto LAB131;

LAB132:    t62 = *((unsigned int *)t33);
    t63 = *((unsigned int *)t61);
    t64 = (t62 & t63);
    *((unsigned int *)t93) = t64;
    t65 = (t33 + 4);
    t66 = (t61 + 4);
    t67 = (t93 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB124;

LAB125:    *((unsigned int *)t37) = 1;
    goto LAB128;

LAB129:    *((unsigned int *)t61) = 1;
    goto LAB132;

LAB131:    t60 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB132;

LAB133:    t73 = *((unsigned int *)t93);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t93) = (t73 | t74);
    t75 = (t33 + 4);
    t76 = (t61 + 4);
    t77 = *((unsigned int *)t33);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t61);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t91 & t87);
    t92 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t92 & t88);
    goto LAB135;

LAB136:    *((unsigned int *)t109) = 1;
    goto LAB139;

LAB138:    t100 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB139;

LAB140:    t106 = (t0 + 1768);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    memset(t118, 0, 8);
    t110 = (t118 + 4);
    t111 = (t108 + 4);
    t112 = *((unsigned int *)t108);
    t113 = (t112 >> 2);
    t114 = (t113 & 1);
    *((unsigned int *)t118) = t114;
    t115 = *((unsigned int *)t111);
    t116 = (t115 >> 2);
    t117 = (t116 & 1);
    *((unsigned int *)t110) = t117;
    memset(t133, 0, 8);
    t119 = (t118 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t119) != 0)
        goto LAB145;

LAB146:    t126 = (t133 + 4);
    t127 = *((unsigned int *)t133);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB147;

LAB148:    memcpy(t182, t133, 8);

LAB149:    memset(t190, 0, 8);
    t183 = (t182 + 4);
    t184 = *((unsigned int *)t183);
    t185 = (~(t184));
    t186 = *((unsigned int *)t182);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t183) != 0)
        goto LAB159;

LAB160:    t191 = *((unsigned int *)t109);
    t192 = *((unsigned int *)t190);
    t193 = (t191 | t192);
    *((unsigned int *)t219) = t193;
    t194 = (t109 + 4);
    t195 = (t190 + 4);
    t196 = (t219 + 4);
    t197 = *((unsigned int *)t194);
    t198 = *((unsigned int *)t195);
    t199 = (t197 | t198);
    *((unsigned int *)t196) = t199;
    t200 = *((unsigned int *)t196);
    t201 = (t200 != 0);
    if (t201 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB142;

LAB143:    *((unsigned int *)t133) = 1;
    goto LAB146;

LAB145:    t125 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB146;

LAB147:    t130 = (t0 + 1768);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    memset(t142, 0, 8);
    t134 = (t142 + 4);
    t135 = (t132 + 4);
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 1);
    t138 = (t137 & 1);
    *((unsigned int *)t142) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 1);
    t141 = (t140 & 1);
    *((unsigned int *)t134) = t141;
    memset(t150, 0, 8);
    t143 = (t142 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t143) != 0)
        goto LAB152;

LAB153:    t151 = *((unsigned int *)t133);
    t152 = *((unsigned int *)t150);
    t153 = (t151 & t152);
    *((unsigned int *)t182) = t153;
    t154 = (t133 + 4);
    t155 = (t150 + 4);
    t156 = (t182 + 4);
    t157 = *((unsigned int *)t154);
    t158 = *((unsigned int *)t155);
    t159 = (t157 | t158);
    *((unsigned int *)t156) = t159;
    t160 = *((unsigned int *)t156);
    t161 = (t160 != 0);
    if (t161 == 1)
        goto LAB154;

LAB155:
LAB156:    goto LAB149;

LAB150:    *((unsigned int *)t150) = 1;
    goto LAB153;

LAB152:    t149 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB153;

LAB154:    t162 = *((unsigned int *)t182);
    t163 = *((unsigned int *)t156);
    *((unsigned int *)t182) = (t162 | t163);
    t164 = (t133 + 4);
    t165 = (t150 + 4);
    t166 = *((unsigned int *)t133);
    t167 = (~(t166));
    t168 = *((unsigned int *)t164);
    t169 = (~(t168));
    t170 = *((unsigned int *)t150);
    t171 = (~(t170));
    t172 = *((unsigned int *)t165);
    t173 = (~(t172));
    t174 = (t167 & t169);
    t175 = (t171 & t173);
    t176 = (~(t174));
    t177 = (~(t175));
    t178 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t178 & t176);
    t179 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t179 & t177);
    t180 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t180 & t176);
    t181 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t181 & t177);
    goto LAB156;

LAB157:    *((unsigned int *)t190) = 1;
    goto LAB160;

LAB159:    t189 = (t190 + 4);
    *((unsigned int *)t190) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB160;

LAB161:    t202 = *((unsigned int *)t219);
    t203 = *((unsigned int *)t196);
    *((unsigned int *)t219) = (t202 | t203);
    t204 = (t109 + 4);
    t205 = (t190 + 4);
    t206 = *((unsigned int *)t204);
    t207 = (~(t206));
    t208 = *((unsigned int *)t109);
    t209 = (t208 & t207);
    t210 = *((unsigned int *)t205);
    t211 = (~(t210));
    t212 = *((unsigned int *)t190);
    t213 = (t212 & t211);
    t214 = (~(t209));
    t215 = (~(t213));
    t216 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t216 & t214);
    t217 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t217 & t215);
    goto LAB163;

LAB164:    xsi_vlogvar_wait_assign_value(t218, t219, 0, *((unsigned int *)t227), 1, 0LL);
    goto LAB165;

LAB168:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB169;

LAB170:    xsi_set_current_line(38, ng0);

LAB173:    xsi_set_current_line(39, ng0);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t34 = *((char **)t29);
    memset(t21, 0, 8);
    t35 = (t21 + 4);
    t36 = (t34 + 4);
    t31 = *((unsigned int *)t34);
    t32 = (t31 >> 2);
    t40 = (t32 & 1);
    *((unsigned int *)t21) = t40;
    t41 = *((unsigned int *)t36);
    t42 = (t41 >> 2);
    t43 = (t42 & 1);
    *((unsigned int *)t35) = t43;
    memset(t33, 0, 8);
    t38 = (t21 + 4);
    t44 = *((unsigned int *)t38);
    t45 = (~(t44));
    t47 = *((unsigned int *)t21);
    t48 = (t47 & t45);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t38) != 0)
        goto LAB176;

LAB177:    t46 = (t33 + 4);
    t50 = *((unsigned int *)t33);
    t51 = *((unsigned int *)t46);
    t55 = (t50 || t51);
    if (t55 > 0)
        goto LAB178;

LAB179:    memcpy(t93, t33, 8);

LAB180:    memset(t109, 0, 8);
    t110 = (t93 + 4);
    t115 = *((unsigned int *)t110);
    t116 = (~(t115));
    t117 = *((unsigned int *)t93);
    t120 = (t117 & t116);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t110) != 0)
        goto LAB194;

LAB195:    t119 = (t109 + 4);
    t122 = *((unsigned int *)t109);
    t123 = *((unsigned int *)t119);
    t124 = (t122 || t123);
    if (t124 > 0)
        goto LAB196;

LAB197:    memcpy(t150, t109, 8);

LAB198:    t183 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t183, t150, 0, 0, 1, 0LL);
    goto LAB172;

LAB174:    *((unsigned int *)t33) = 1;
    goto LAB177;

LAB176:    t39 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB177;

LAB178:    t52 = (t0 + 1768);
    t54 = (t52 + 56U);
    t60 = *((char **)t54);
    memset(t53, 0, 8);
    t65 = (t53 + 4);
    t66 = (t60 + 4);
    t56 = *((unsigned int *)t60);
    t57 = (t56 >> 1);
    t58 = (t57 & 1);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t66);
    t62 = (t59 >> 1);
    t63 = (t62 & 1);
    *((unsigned int *)t65) = t63;
    memset(t37, 0, 8);
    t67 = (t53 + 4);
    t64 = *((unsigned int *)t67);
    t68 = (~(t64));
    t69 = *((unsigned int *)t53);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB184;

LAB182:    if (*((unsigned int *)t67) == 0)
        goto LAB181;

LAB183:    t75 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t75) = 1;

LAB184:    memset(t61, 0, 8);
    t76 = (t37 + 4);
    t72 = *((unsigned int *)t76);
    t73 = (~(t72));
    t74 = *((unsigned int *)t37);
    t77 = (t74 & t73);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB185;

LAB186:    if (*((unsigned int *)t76) != 0)
        goto LAB187;

LAB188:    t79 = *((unsigned int *)t33);
    t80 = *((unsigned int *)t61);
    t81 = (t79 & t80);
    *((unsigned int *)t93) = t81;
    t100 = (t33 + 4);
    t101 = (t61 + 4);
    t106 = (t93 + 4);
    t82 = *((unsigned int *)t100);
    t83 = *((unsigned int *)t101);
    t84 = (t82 | t83);
    *((unsigned int *)t106) = t84;
    t87 = *((unsigned int *)t106);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB189;

LAB190:
LAB191:    goto LAB180;

LAB181:    *((unsigned int *)t37) = 1;
    goto LAB184;

LAB185:    *((unsigned int *)t61) = 1;
    goto LAB188;

LAB187:    t94 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB188;

LAB189:    t89 = *((unsigned int *)t93);
    t90 = *((unsigned int *)t106);
    *((unsigned int *)t93) = (t89 | t90);
    t107 = (t33 + 4);
    t108 = (t61 + 4);
    t91 = *((unsigned int *)t33);
    t92 = (~(t91));
    t95 = *((unsigned int *)t107);
    t96 = (~(t95));
    t97 = *((unsigned int *)t61);
    t98 = (~(t97));
    t99 = *((unsigned int *)t108);
    t102 = (~(t99));
    t85 = (t92 & t96);
    t86 = (t98 & t102);
    t103 = (~(t85));
    t104 = (~(t86));
    t105 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t105 & t103);
    t112 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t112 & t104);
    t113 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t113 & t103);
    t114 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t114 & t104);
    goto LAB191;

LAB192:    *((unsigned int *)t109) = 1;
    goto LAB195;

LAB194:    t111 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB195;

LAB196:    t125 = (t0 + 1768);
    t126 = (t125 + 56U);
    t130 = *((char **)t126);
    memset(t133, 0, 8);
    t131 = (t133 + 4);
    t132 = (t130 + 4);
    t127 = *((unsigned int *)t130);
    t128 = (t127 >> 0);
    t129 = (t128 & 1);
    *((unsigned int *)t133) = t129;
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 0);
    t138 = (t137 & 1);
    *((unsigned int *)t131) = t138;
    memset(t118, 0, 8);
    t134 = (t133 + 4);
    t139 = *((unsigned int *)t134);
    t140 = (~(t139));
    t141 = *((unsigned int *)t133);
    t144 = (t141 & t140);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB202;

LAB200:    if (*((unsigned int *)t134) == 0)
        goto LAB199;

LAB201:    t135 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t135) = 1;

LAB202:    memset(t142, 0, 8);
    t143 = (t118 + 4);
    t146 = *((unsigned int *)t143);
    t147 = (~(t146));
    t148 = *((unsigned int *)t118);
    t151 = (t148 & t147);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t143) != 0)
        goto LAB205;

LAB206:    t153 = *((unsigned int *)t109);
    t157 = *((unsigned int *)t142);
    t158 = (t153 & t157);
    *((unsigned int *)t150) = t158;
    t154 = (t109 + 4);
    t155 = (t142 + 4);
    t156 = (t150 + 4);
    t159 = *((unsigned int *)t154);
    t160 = *((unsigned int *)t155);
    t161 = (t159 | t160);
    *((unsigned int *)t156) = t161;
    t162 = *((unsigned int *)t156);
    t163 = (t162 != 0);
    if (t163 == 1)
        goto LAB207;

LAB208:
LAB209:    goto LAB198;

LAB199:    *((unsigned int *)t118) = 1;
    goto LAB202;

LAB203:    *((unsigned int *)t142) = 1;
    goto LAB206;

LAB205:    t149 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB206;

LAB207:    t166 = *((unsigned int *)t150);
    t167 = *((unsigned int *)t156);
    *((unsigned int *)t150) = (t166 | t167);
    t164 = (t109 + 4);
    t165 = (t142 + 4);
    t168 = *((unsigned int *)t109);
    t169 = (~(t168));
    t170 = *((unsigned int *)t164);
    t171 = (~(t170));
    t172 = *((unsigned int *)t142);
    t173 = (~(t172));
    t176 = *((unsigned int *)t165);
    t177 = (~(t176));
    t174 = (t169 & t171);
    t175 = (t173 & t177);
    t178 = (~(t174));
    t179 = (~(t175));
    t180 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t180 & t178);
    t181 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t181 & t179);
    t184 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t184 & t178);
    t185 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t185 & t179);
    goto LAB209;

}


extern void work_m_00000000000851927074_0735672237_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000000851927074_0735672237", "isim/test_isim_beh.exe.sim/work/m_00000000000851927074_0735672237.didat");
	xsi_register_executes(pe);
}
