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
static const char *ng0 = "D:/P7/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static int ng12[] = {0, 0};



static void Cont_31_0(char *t0)
{
    char t5[8];
    char t18[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 8);
    t8 = (t4 + 12);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t27, 0, 8);
    t28 = (t5 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t18);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB5;

LAB4:    if (t39 != 0)
        goto LAB6;

LAB7:    t43 = (t0 + 3672);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t27);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 3576);
    *((int *)t56) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t27) = 1;
    goto LAB7;

LAB6:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB7;

}

static void Always_33_1(char *t0)
{
    char t10[8];
    char t42[16];
    char t43[8];
    char t44[16];
    char t45[8];
    char t47[8];
    char t49[16];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t46;
    char *t48;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(70, ng0);

LAB88:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB32:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB33;

LAB34:
LAB35:    t41 = (t0 + 1928);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB31;

LAB9:    xsi_set_current_line(38, ng0);

LAB36:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB37;

LAB38:
LAB39:    t23 = (t0 + 1928);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB31;

LAB11:    xsi_set_current_line(41, ng0);

LAB40:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 4294967295U);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t43, 0, 8);
    t8 = (t43 + 4);
    t14 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t43) = t21;
    t22 = *((unsigned int *)t14);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t8) = t26;
    xsi_vlogtype_concat(t42, 33, 33, 2U, t43, 1, t10, 32);
    t15 = (t0 + 1208U);
    t23 = *((char **)t15);
    memset(t45, 0, 8);
    t15 = (t45 + 4);
    t24 = (t23 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 0);
    *((unsigned int *)t45) = t28;
    t29 = *((unsigned int *)t24);
    t30 = (t29 >> 0);
    *((unsigned int *)t15) = t30;
    t31 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t31 & 4294967295U);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 4294967295U);
    t41 = (t0 + 1208U);
    t46 = *((char **)t41);
    memset(t47, 0, 8);
    t41 = (t47 + 4);
    t48 = (t46 + 4);
    t35 = *((unsigned int *)t46);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t47) = t37;
    t38 = *((unsigned int *)t48);
    t39 = (t38 >> 31);
    t40 = (t39 & 1);
    *((unsigned int *)t41) = t40;
    xsi_vlogtype_concat(t44, 33, 33, 2U, t47, 1, t45, 32);
    xsi_vlog_unsigned_add(t49, 33, t42, 33, t44, 33);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 33);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t3, 32, t4, 32);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);
    goto LAB31;

LAB13:    xsi_set_current_line(45, ng0);

LAB41:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 4294967295U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 4294967295U);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t43, 0, 8);
    t8 = (t43 + 4);
    t14 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t43) = t21;
    t22 = *((unsigned int *)t14);
    t25 = (t22 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t8) = t26;
    xsi_vlogtype_concat(t42, 33, 33, 2U, t43, 1, t10, 32);
    t15 = (t0 + 1208U);
    t23 = *((char **)t15);
    memset(t45, 0, 8);
    t15 = (t45 + 4);
    t24 = (t23 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 0);
    *((unsigned int *)t45) = t28;
    t29 = *((unsigned int *)t24);
    t30 = (t29 >> 0);
    *((unsigned int *)t15) = t30;
    t31 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t31 & 4294967295U);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 4294967295U);
    t41 = (t0 + 1208U);
    t46 = *((char **)t41);
    memset(t47, 0, 8);
    t41 = (t47 + 4);
    t48 = (t46 + 4);
    t35 = *((unsigned int *)t46);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t47) = t37;
    t38 = *((unsigned int *)t48);
    t39 = (t38 >> 31);
    t40 = (t39 & 1);
    *((unsigned int *)t41) = t40;
    xsi_vlogtype_concat(t44, 33, 33, 2U, t47, 1, t45, 32);
    xsi_vlog_unsigned_minus(t49, 33, t42, 33, t44, 33);
    t50 = (t0 + 2088);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 33);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t3, 32, t4, 32);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);
    goto LAB31;

LAB15:    xsi_set_current_line(49, ng0);

LAB42:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB43;

LAB44:
LAB45:    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    goto LAB31;

LAB17:    xsi_set_current_line(52, ng0);

LAB46:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t43) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t43 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB47;

LAB48:
LAB49:    memset(t10, 0, 8);
    t23 = (t10 + 4);
    t24 = (t43 + 4);
    t37 = *((unsigned int *)t43);
    t38 = (~(t37));
    *((unsigned int *)t10) = t38;
    *((unsigned int *)t23) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB51;

LAB50:    t53 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t53 & 4294967295U);
    t54 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t54 & 4294967295U);
    t41 = (t0 + 1928);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB31;

LAB19:    xsi_set_current_line(55, ng0);

LAB52:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_lshift(t43, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t43, 0, 0, 32);
    goto LAB31;

LAB21:    xsi_set_current_line(58, ng0);

LAB53:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_rshift(t43, 32, t4, 32, t10, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t43, 0, 0, 32);
    goto LAB31;

LAB23:    xsi_set_current_line(61, ng0);

LAB54:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    memset(t45, 0, 8);
    t3 = (t45 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t45) = t12;
    t13 = *((unsigned int *)t8);
    t16 = (t13 >> 0);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t17 & 31U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 31U);
    memset(t47, 0, 8);
    xsi_vlog_signed_arith_rshift(t47, 32, t4, 32, t45, 5);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t47, 0, 0, 32);
    goto LAB31;

LAB25:    xsi_set_current_line(64, ng0);

LAB55:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t55, 0, 8);
    xsi_vlog_signed_less(t55, 32, t4, 32, t7, 32);
    memset(t43, 0, 8);
    t3 = (t55 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t55);
    t16 = (t13 & t12);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t3) != 0)
        goto LAB58;

LAB59:    t9 = (t43 + 4);
    t18 = *((unsigned int *)t43);
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB60;

LAB61:    t21 = *((unsigned int *)t43);
    t22 = (~(t21));
    t25 = *((unsigned int *)t9);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t9) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t43) > 0)
        goto LAB66;

LAB67:    memcpy(t10, t15, 8);

LAB68:    t23 = (t0 + 1928);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB31;

LAB27:    xsi_set_current_line(67, ng0);

LAB69:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t45, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB71;

LAB70:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB72;

LAB73:    memset(t43, 0, 8);
    t14 = (t45 + 4);
    t11 = *((unsigned int *)t14);
    t12 = (~(t11));
    t13 = *((unsigned int *)t45);
    t16 = (t13 & t12);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t14) != 0)
        goto LAB77;

LAB78:    t23 = (t43 + 4);
    t18 = *((unsigned int *)t43);
    t19 = *((unsigned int *)t23);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB79;

LAB80:    t21 = *((unsigned int *)t43);
    t22 = (~(t21));
    t25 = *((unsigned int *)t23);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t23) > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t43) > 0)
        goto LAB85;

LAB86:    memcpy(t10, t41, 8);

LAB87:    t46 = (t0 + 1928);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 32);
    goto LAB31;

LAB33:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB35;

LAB37:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB39;

LAB43:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    goto LAB45;

LAB47:    t21 = *((unsigned int *)t43);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t43) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB49;

LAB51:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t24);
    *((unsigned int *)t10) = (t39 | t40);
    t51 = *((unsigned int *)t23);
    t52 = *((unsigned int *)t24);
    *((unsigned int *)t23) = (t51 | t52);
    goto LAB50;

LAB56:    *((unsigned int *)t43) = 1;
    goto LAB59;

LAB58:    t8 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB59;

LAB60:    t14 = ((char*)((ng2)));
    goto LAB61;

LAB62:    t15 = ((char*)((ng1)));
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t10, 32, t14, 32, t15, 32);
    goto LAB68;

LAB66:    memcpy(t10, t14, 8);
    goto LAB68;

LAB71:    t9 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t45) = 1;
    goto LAB73;

LAB75:    *((unsigned int *)t43) = 1;
    goto LAB78;

LAB77:    t15 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB78;

LAB79:    t24 = ((char*)((ng2)));
    goto LAB80;

LAB81:    t41 = ((char*)((ng1)));
    goto LAB82;

LAB83:    xsi_vlog_unsigned_bit_combine(t10, 32, t24, 32, t41, 32);
    goto LAB87;

LAB85:    memcpy(t10, t24, 8);
    goto LAB87;

}


extern void work_m_00000000004023349595_2725559894_init()
{
	static char *pe[] = {(void *)Cont_31_0,(void *)Always_33_1};
	xsi_register_didat("work_m_00000000004023349595_2725559894", "isim/test_isim_beh.exe.sim/work/m_00000000004023349595_2725559894.didat");
	xsi_register_executes(pe);
}
