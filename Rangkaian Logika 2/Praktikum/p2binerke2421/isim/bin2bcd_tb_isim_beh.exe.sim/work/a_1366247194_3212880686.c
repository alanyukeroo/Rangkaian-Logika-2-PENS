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
static const char *ng0 = "D:/1. KOLEAH/Semester 2/Rangkaian Logika 2/Praktikum/p2binerke2421/bin2bcd.vhd";



static void work_a_1366247194_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 2352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 4460);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB14:    t6 = (t0 + 4464);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB15:    t9 = (t0 + 4468);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB16:    t12 = (t0 + 4472);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB17:    t15 = (t0 + 4476);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB18:    t18 = (t0 + 4480);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB19:    t21 = (t0 + 4484);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB20:    t24 = (t0 + 4488);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB21:
LAB13:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4524);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB39;

LAB40:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);

LAB4:    xsi_set_current_line(13, ng0);

LAB43:    t2 = (t0 + 2672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB44;

LAB1:    return;
LAB5:    xsi_set_current_line(14, ng0);
    t27 = (t0 + 4492);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB23;

LAB24:    t30 = (t0 + 2752);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t27, 4U);
    xsi_driver_first_trans_delta(t30, 0U, 4U, 0LL);
    goto LAB4;

LAB6:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4496);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB25;

LAB26:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB4;

LAB7:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4500);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB27;

LAB28:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB4;

LAB8:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4504);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB29;

LAB30:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB4;

LAB9:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4508);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB31;

LAB32:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB4;

LAB10:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4512);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB33;

LAB34:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB4;

LAB11:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4516);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB35;

LAB36:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB4;

LAB12:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4520);
    t29 = (4U != 4U);
    if (t29 == 1)
        goto LAB37;

LAB38:    t4 = (t0 + 2752);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB4;

LAB22:;
LAB23:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB40;

LAB41:    t3 = (t0 + 2672);
    *((int *)t3) = 0;
    goto LAB2;

LAB42:    goto LAB41;

LAB44:    goto LAB42;

}


extern void work_a_1366247194_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1366247194_3212880686_p_0};
	xsi_register_didat("work_a_1366247194_3212880686", "isim/bin2bcd_tb_isim_beh.exe.sim/work/a_1366247194_3212880686.didat");
	xsi_register_executes(pe);
}
