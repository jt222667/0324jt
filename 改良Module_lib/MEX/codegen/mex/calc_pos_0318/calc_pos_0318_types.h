/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_pos_0318_types.h
 *
 * Code generation for function 'calc_pos_0318'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_cell_wrap_1
#define typedef_cell_wrap_1
typedef struct {
  real_T f1[3];
} cell_wrap_1;
#endif /* typedef_cell_wrap_1 */

#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct {
  real_T module[10];
  real_T num_q;
  real_T install[10];
  real_T align[10];
  real_T BB[10];
  real_T Rp[90];
  real_T Rd[90];
  real_T Pp[30];
  real_T Pd[30];
  real_T RBcp[27];
  real_T PBcp[9];
  real_T T_L[160];
  real_T T_B[32];
  char_T J_type[10];
  real_T R_idx[20];
  real_T num_joint;
  real_T S0[10];
  real_T SN[10];
  real_T SE[10];
  real_T SS[100];
  real_T Qe[30];
  real_T cc[300];
  real_T c0[30];
  real_T ce[30];
  real_T m0[10];
  real_T m;
  real_T mass;
  real_T inertia[90];
  real_T inertia0[9];
} struct0_T;
#endif /* typedef_struct0_T */

#ifndef typedef_cell_0
#define typedef_cell_0
typedef struct {
  real_T f1[3];
  real_T f2[7];
} cell_0;
#endif /* typedef_cell_0 */

#ifndef typedef_cell_wrap_2
#define typedef_cell_wrap_2
typedef struct {
  real_T f1[9];
} cell_wrap_2;
#endif /* typedef_cell_wrap_2 */

#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct {
  real_T R0[3];
  real_T Q0[3];
  real_T A0[9];
  real_T AA[90];
  real_T RR[30];
  real_T v0[3];
  real_T w0[3];
  real_T vd0[3];
  real_T wd0[3];
  real_T q[10];
  real_T qd[10];
  real_T qdd[10];
  real_T vv[30];
  real_T ww[30];
  real_T vd[30];
  real_T wd[30];
  real_T F0[3];
  real_T T0[3];
  real_T Fe[30];
  real_T Te[30];
  real_T tau[10];
  real_T m;
  cell_0 Path;
  cell_wrap_1 POS_e[2];
  cell_wrap_2 ORI_e[2];
  real_T singleArm_joints[2];
} struct1_T;
#endif /* typedef_struct1_T */

/* End of code generation (calc_pos_0318_types.h) */
