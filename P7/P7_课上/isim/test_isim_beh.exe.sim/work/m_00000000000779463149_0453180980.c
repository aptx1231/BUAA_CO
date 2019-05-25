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
static const char *ng0 = "D:/P7/forward_mux.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {0, 0};
static int ng10[] = {1, 0};
static int ng11[] = {2, 0};
static int ng12[] = {3, 0};
static int ng13[] = {4, 0};
static int ng14[] = {5, 0};
static int ng15[] = {6, 0};
static int ng16[] = {7, 0};



static void Always_50_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 6208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6528);
    *((int *)t2) = 1;
    t3 = (t0 + 6240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 3288U);
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

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB25:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);

LAB26:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB45:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3608U);
    t4 = *((char **)t2);

LAB46:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB61;

LAB62:
LAB64:
LAB63:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng9)));
    t7 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 32, 0LL);

LAB65:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3768U);
    t7 = *((char **)t2);

LAB66:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 3, t2, 32);
    if (t6 == 1)
        goto LAB81;

LAB82:
LAB84:
LAB83:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng9)));
    t8 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t8, t2, 0, 0, 32, 0LL);

LAB85:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3928U);
    t8 = *((char **)t2);

LAB86:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 3, t2, 32);
    if (t6 == 1)
        goto LAB101;

LAB102:
LAB104:
LAB103:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng9)));
    t9 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t9, t2, 0, 0, 32, 0LL);

LAB105:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4088U);
    t9 = *((char **)t2);

LAB106:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 3, t2, 32);
    if (t6 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 3, t2, 32);
    if (t6 == 1)
        goto LAB109;

LAB110:
LAB112:
LAB111:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng9)));
    t10 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t10, t2, 0, 0, 32, 0LL);

LAB113:    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 2808U);
    t8 = *((char **)t7);
    t7 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2488U);
    t4 = *((char **)t3);
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB25;

LAB27:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 2968U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB29:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1688U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB31:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1528U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB33:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 2328U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB35:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2488U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB37:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2008U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB39:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2168U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB41:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1848U);
    t7 = *((char **)t4);
    t4 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    goto LAB45;

LAB47:    xsi_set_current_line(76, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB65;

LAB49:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 1688U);
    t8 = *((char **)t7);
    t7 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB65;

LAB51:    xsi_set_current_line(78, ng0);
    t7 = (t0 + 1528U);
    t8 = *((char **)t7);
    t7 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB65;

LAB53:    xsi_set_current_line(79, ng0);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB65;

LAB55:    xsi_set_current_line(80, ng0);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB65;

LAB57:    xsi_set_current_line(81, ng0);
    t7 = (t0 + 2008U);
    t8 = *((char **)t7);
    t7 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB65;

LAB59:    xsi_set_current_line(82, ng0);
    t7 = ((char*)((ng9)));
    t8 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 32, 0LL);
    goto LAB65;

LAB61:    xsi_set_current_line(83, ng0);
    t7 = (t0 + 1848U);
    t8 = *((char **)t7);
    t7 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 32, 0LL);
    goto LAB65;

LAB67:    xsi_set_current_line(88, ng0);
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    t8 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB85;

LAB69:    xsi_set_current_line(89, ng0);
    t8 = (t0 + 1688U);
    t9 = *((char **)t8);
    t8 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB85;

LAB71:    xsi_set_current_line(90, ng0);
    t8 = (t0 + 1528U);
    t9 = *((char **)t8);
    t8 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB85;

LAB73:    xsi_set_current_line(91, ng0);
    t8 = ((char*)((ng9)));
    t9 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 32, 0LL);
    goto LAB85;

LAB75:    xsi_set_current_line(92, ng0);
    t8 = (t0 + 2488U);
    t9 = *((char **)t8);
    t8 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB85;

LAB77:    xsi_set_current_line(93, ng0);
    t8 = (t0 + 2008U);
    t9 = *((char **)t8);
    t8 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB85;

LAB79:    xsi_set_current_line(94, ng0);
    t8 = ((char*)((ng9)));
    t9 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 32, 0LL);
    goto LAB85;

LAB81:    xsi_set_current_line(95, ng0);
    t8 = (t0 + 1848U);
    t9 = *((char **)t8);
    t8 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t8, t9, 0, 0, 32, 0LL);
    goto LAB85;

LAB87:    xsi_set_current_line(100, ng0);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    t9 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 32, 0LL);
    goto LAB105;

LAB89:    xsi_set_current_line(101, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    goto LAB105;

LAB91:    xsi_set_current_line(102, ng0);
    t9 = (t0 + 1528U);
    t10 = *((char **)t9);
    t9 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 32, 0LL);
    goto LAB105;

LAB93:    xsi_set_current_line(103, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    goto LAB105;

LAB95:    xsi_set_current_line(104, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    goto LAB105;

LAB97:    xsi_set_current_line(105, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    goto LAB105;

LAB99:    xsi_set_current_line(106, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    goto LAB105;

LAB101:    xsi_set_current_line(107, ng0);
    t9 = ((char*)((ng9)));
    t10 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 32, 0LL);
    goto LAB105;

LAB107:    xsi_set_current_line(112, ng0);
    t10 = (t0 + 3128U);
    t11 = *((char **)t10);
    t10 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t10, t11, 0, 0, 32, 0LL);
    goto LAB113;

LAB109:    xsi_set_current_line(113, ng0);
    t10 = (t0 + 5128);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    goto LAB113;

}


extern void work_m_00000000000779463149_0453180980_init()
{
	static char *pe[] = {(void *)Always_50_0};
	xsi_register_didat("work_m_00000000000779463149_0453180980", "isim/test_isim_beh.exe.sim/work/m_00000000000779463149_0453180980.didat");
	xsi_register_executes(pe);
}
