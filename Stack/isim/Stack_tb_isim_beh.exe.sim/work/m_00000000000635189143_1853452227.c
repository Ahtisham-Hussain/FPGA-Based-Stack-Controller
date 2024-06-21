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
static const char *ng0 = "E:/Stack/Stack_tb.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {11U, 0U};



static int sp_reset(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 3064);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3224);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3384);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3704);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 30000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(60, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 3224);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB4;

}

static int sp_read_stack(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 3384);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(68, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 3384);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB4;

}

static int sp_write_stack(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 3544);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t4 = (t1 + 3864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(76, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(76, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t1 + 3544);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB4;

}

static void Always_51_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4592);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 3064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3064);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_81_1(char *t0)
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
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);

LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4840);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 4936);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 4936);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 4840);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 5032U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (~(t18));
    t20 = *((unsigned int *)t2);
    t13 = (t20 & t19);
    t4 = (t0 + 7120);
    *((int *)t4) = t13;

LAB12:    t5 = (t0 + 7120);
    if (*((int *)t5) > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4840);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB46:    t5 = (t0 + 4936);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB48:    if (t13 != 0)
        goto LAB49;

LAB44:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB45:    t14 = (t0 + 4936);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 4840);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB13:    xsi_set_current_line(86, ng0);

LAB15:    xsi_set_current_line(87, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 4840);
    t8 = (t0 + 1712);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3864);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 4);

LAB18:    t11 = (t0 + 4936);
    t12 = *((char **)t11);
    t14 = (t12 + 80U);
    t15 = *((char **)t14);
    t16 = (t15 + 272U);
    t17 = *((char **)t16);
    t21 = (t17 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t12);

LAB20:    if (t23 != 0)
        goto LAB21;

LAB16:    t12 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t12);

LAB17:    t24 = (t0 + 4936);
    t25 = *((char **)t24);
    t24 = (t0 + 1712);
    t26 = (t0 + 4840);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB19:;
LAB21:    t11 = (t0 + 5032U);
    *((char **)t11) = &&LAB18;
    goto LAB1;

LAB22:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4840);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3864);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB25:    t7 = (t0 + 4936);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB27:    if (t13 != 0)
        goto LAB28;

LAB23:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB24:    t16 = (t0 + 4936);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t21 = (t0 + 4840);
    t22 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t21, t22);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB26:;
LAB28:    t7 = (t0 + 5032U);
    *((char **)t7) = &&LAB25;
    goto LAB1;

LAB29:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4840);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3864);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB32:    t7 = (t0 + 4936);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB34:    if (t13 != 0)
        goto LAB35;

LAB30:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB31:    t16 = (t0 + 4936);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t21 = (t0 + 4840);
    t22 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t21, t22);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB33:;
LAB35:    t7 = (t0 + 5032U);
    *((char **)t7) = &&LAB32;
    goto LAB1;

LAB36:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4840);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3864);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB39:    t7 = (t0 + 4936);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB41:    if (t13 != 0)
        goto LAB42;

LAB37:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB38:    t16 = (t0 + 4936);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t21 = (t0 + 4840);
    t22 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t21, t22);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB40:;
LAB42:    t7 = (t0 + 5032U);
    *((char **)t7) = &&LAB39;
    goto LAB1;

LAB43:    t2 = (t0 + 7120);
    t13 = *((int *)t2);
    *((int *)t2) = (t13 - 1);
    goto LAB12;

LAB47:;
LAB49:    t5 = (t0 + 5032U);
    *((char **)t5) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4840);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB53:    t5 = (t0 + 4936);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB55:    if (t13 != 0)
        goto LAB56;

LAB51:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB52:    t14 = (t0 + 4936);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 4840);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB54:;
LAB56:    t5 = (t0 + 5032U);
    *((char **)t5) = &&LAB53;
    goto LAB1;

LAB57:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4840);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3864);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB60:    t7 = (t0 + 4936);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB62:    if (t13 != 0)
        goto LAB63;

LAB58:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB59:    t16 = (t0 + 4936);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t21 = (t0 + 4840);
    t22 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t21, t22);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB61:;
LAB63:    t7 = (t0 + 5032U);
    *((char **)t7) = &&LAB60;
    goto LAB1;

LAB64:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4840);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 3864);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 4);

LAB67:    t7 = (t0 + 4936);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t14 = (t12 + 0U);
    t15 = *((char **)t14);
    t13 = ((int  (*)(char *, char *))t15)(t0, t8);

LAB69:    if (t13 != 0)
        goto LAB70;

LAB65:    t8 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t8);

LAB66:    t16 = (t0 + 4936);
    t17 = *((char **)t16);
    t16 = (t0 + 1712);
    t21 = (t0 + 4840);
    t22 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t21, t22);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB68:;
LAB70:    t7 = (t0 + 5032U);
    *((char **)t7) = &&LAB67;
    goto LAB1;

LAB71:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4840);
    t3 = (t0 + 1280);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB74:    t5 = (t0 + 4936);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB76:    if (t13 != 0)
        goto LAB77;

LAB72:    t6 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t6);

LAB73:    t14 = (t0 + 4936);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 4840);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4840);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB75:;
LAB77:    t5 = (t0 + 5032U);
    *((char **)t5) = &&LAB74;
    goto LAB1;

LAB78:    xsi_set_current_line(106, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}


extern void work_m_00000000000635189143_1853452227_init()
{
	static char *pe[] = {(void *)Always_51_0,(void *)Initial_81_1};
	static char *se[] = {(void *)sp_reset,(void *)sp_read_stack,(void *)sp_write_stack};
	xsi_register_didat("work_m_00000000000635189143_1853452227", "isim/Stack_tb_isim_beh.exe.sim/work/m_00000000000635189143_1853452227.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
