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
static const char *ng0 = "D:/P7/mux.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {31U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {4U, 0U};



static void Always_47_0(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 6048);
    *((int *)t2) = 1;
    t3 = (t0 + 5760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2968U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);

LAB12:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3608U);
    t4 = *((char **)t2);

LAB18:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3768U);
    t7 = *((char **)t2);

LAB28:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 3);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3288U);
    t8 = *((char **)t2);
    t2 = (t8 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3448U);
    t8 = *((char **)t2);
    t2 = (t8 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t8 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 32, 0LL);

LAB45:
LAB42:    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 2328U);
    t8 = *((char **)t7);
    t7 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB11;

LAB9:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 6);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t8, 27, t10, 5);
    t17 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t17, t9, 0, 0, 32, 0LL);
    goto LAB11;

LAB13:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2488U);
    t7 = *((char **)t4);
    t4 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB17;

LAB15:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1048U);
    t7 = *((char **)t4);
    t4 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(59, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t17 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 16);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t17);
    t14 = (t13 >> 16);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    t18 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t18, t9, 0, 0, 5, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t17 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 11);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t17);
    t14 = (t13 >> 11);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 31U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 31U);
    t18 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t18, t9, 0, 0, 5, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(61, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 5, 0LL);
    goto LAB27;

LAB25:    xsi_set_current_line(62, ng0);
    t7 = ((char*)((ng6)));
    t8 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 5, 0LL);
    goto LAB27;

LAB29:    xsi_set_current_line(66, ng0);
    t8 = (t0 + 1688U);
    t17 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t17, 0, 0, 32, 0LL);
    goto LAB39;

LAB31:    xsi_set_current_line(67, ng0);
    t8 = (t0 + 1528U);
    t17 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t17, 0, 0, 32, 0LL);
    goto LAB39;

LAB33:    xsi_set_current_line(68, ng0);
    t8 = (t0 + 2008U);
    t17 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t17, 0, 0, 32, 0LL);
    goto LAB39;

LAB35:    xsi_set_current_line(69, ng0);
    t8 = (t0 + 1848U);
    t17 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t17, 0, 0, 32, 0LL);
    goto LAB39;

LAB37:    xsi_set_current_line(70, ng0);
    t8 = (t0 + 2168U);
    t17 = *((char **)t8);
    t8 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t8, t17, 0, 0, 32, 0LL);
    goto LAB39;

LAB40:    xsi_set_current_line(73, ng0);
    t17 = (t0 + 2648U);
    t18 = *((char **)t17);
    t17 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t17, t18, 0, 0, 32, 0LL);
    goto LAB42;

LAB43:    xsi_set_current_line(74, ng0);
    t17 = (t0 + 2808U);
    t18 = *((char **)t17);
    t17 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t17, t18, 0, 0, 32, 0LL);
    goto LAB45;

}


extern void work_m_00000000003203020336_1323274903_init()
{
	static char *pe[] = {(void *)Always_47_0};
	xsi_register_didat("work_m_00000000003203020336_1323274903", "isim/test_isim_beh.exe.sim/work/m_00000000003203020336_1323274903.didat");
	xsi_register_executes(pe);
}
