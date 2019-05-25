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
static const char *ng0 = "D:/P7/Mult_Div.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {5, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {10, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {1, 0};



static void Cont_36_0(char *t0)
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

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5624);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5512);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_37_1(char *t0)
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

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5528);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_41_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_48_3(char *t0)
{
    char t13[8];
    char t29[16];
    char t32[16];
    char t34[16];
    char t35[8];
    char t36[8];
    char t39[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t30;
    char *t31;
    char *t33;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
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

LAB7:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB13:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:
LAB46:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(55, ng0);

LAB17:    xsi_set_current_line(56, ng0);
    t19 = (t0 + 1848U);
    t20 = *((char **)t19);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB16;

LAB18:    xsi_set_current_line(56, ng0);

LAB21:    xsi_set_current_line(57, ng0);
    t26 = (t0 + 1688U);
    t27 = *((char **)t26);

LAB22:    t26 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t26, 2);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t2, 2);
    if (t28 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t2, 2);
    if (t28 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 2, t2, 2);
    if (t28 == 1)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB23:    xsi_set_current_line(58, ng0);

LAB32:    xsi_set_current_line(59, ng0);
    t30 = (t0 + 1368U);
    t31 = *((char **)t30);
    xsi_vlogtype_sign_extend(t29, 64, t31, 32);
    t30 = (t0 + 1528U);
    t33 = *((char **)t30);
    xsi_vlogtype_sign_extend(t32, 64, t33, 32);
    xsi_vlog_signed_multiply(t34, 64, t29, 64, t32, 64);
    t30 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t30, t34, 0, 0, 64, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB31;

LAB25:    xsi_set_current_line(62, ng0);

LAB33:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    xsi_vlog_unsigned_multiply(t29, 64, t4, 32, t5, 32);
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t29, 0, 0, 64, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB31;

LAB27:    xsi_set_current_line(66, ng0);

LAB34:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t36, 0, 8);
    xsi_vlog_signed_divide(t36, 32, t4, 32, t5, 32);
    t3 = (t0 + 1368U);
    t11 = *((char **)t3);
    t3 = (t0 + 1528U);
    t12 = *((char **)t3);
    memset(t39, 0, 8);
    xsi_vlog_signed_mod(t39, 32, t11, 32, t12, 32);
    xsi_vlogtype_concat(t29, 64, 64, 2U, t39, 32, t36, 32);
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t29, 0, 0, 64, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB31;

LAB29:    xsi_set_current_line(70, ng0);

LAB35:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t4, 32, t5, 32);
    t3 = (t0 + 1368U);
    t11 = *((char **)t3);
    t3 = (t0 + 1528U);
    t12 = *((char **)t3);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_mod(t35, 32, t11, 32, t12, 32);
    xsi_vlogtype_concat(t29, 64, 64, 2U, t35, 32, t13, 32);
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t29, 0, 0, 64, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB31;

LAB36:    xsi_set_current_line(77, ng0);

LAB39:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB38;

LAB40:    xsi_set_current_line(80, ng0);

LAB43:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB42;

LAB44:    xsi_set_current_line(84, ng0);

LAB47:    xsi_set_current_line(85, ng0);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t26 = (t19 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB49;

LAB48:    t30 = (t20 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t19) > *((unsigned int *)t20))
        goto LAB50;

LAB51:    t33 = (t13 + 4);
    t14 = *((unsigned int *)t33);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB46;

LAB49:    t31 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(85, ng0);

LAB56:    xsi_set_current_line(86, ng0);
    t40 = (t0 + 3368);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng8)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 32, t42, 32, t43, 32);
    t44 = (t0 + 3368);
    xsi_vlogvar_assign_value(t44, t35, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t13) = 1;

LAB60:    t20 = (t13 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t45 = (t25 & t24);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB61;

LAB62:
LAB63:    goto LAB55;

LAB59:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(87, ng0);

LAB64:    xsi_set_current_line(88, ng0);
    t26 = (t0 + 3528);
    t30 = (t26 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t33, t31, 0, 0, 32, 0LL);
    t40 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t40, t31, 32, 0, 32, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB63;

}


extern void work_m_00000000002968706047_1173193764_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Cont_37_1,(void *)Initial_41_2,(void *)Always_48_3};
	xsi_register_didat("work_m_00000000002968706047_1173193764", "isim/test_isim_beh.exe.sim/work/m_00000000002968706047_1173193764.didat");
	xsi_register_executes(pe);
}
