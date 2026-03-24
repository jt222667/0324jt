/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_aa_0318.c
 *
 * Code generation for function 'calc_aa_0318'
 *
 */

/* Include files */
#include "calc_aa_0318.h"
#include "calc_aa_0318_data.h"
#include "calc_aa_0318_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = {
    5,              /* lineNo */
    9,              /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    8,              /* lineNo */
    33,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo emlrtBCI = {
    1,              /* iFirst */
    3,              /* iLast */
    8,              /* lineNo */
    33,             /* colNo */
    "LP.RBcp",      /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    8,              /* lineNo */
    69,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    8,              /* lineNo */
    69,             /* colNo */
    "LP.Rp",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    10,             /* lineNo */
    33,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    1,              /* iFirst */
    3,              /* iLast */
    10,             /* lineNo */
    33,             /* colNo */
    "LP.RBcp",      /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    10,             /* lineNo */
    74,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    10,             /* lineNo */
    74,             /* colNo */
    "LP.T_L",       /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    15,             /* lineNo */
    32,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    15,             /* lineNo */
    32,             /* colNo */
    "LP.Rd",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    15,             /* lineNo */
    74,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    15,             /* lineNo */
    74,             /* colNo */
    "LP.Rp",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    17,             /* lineNo */
    32,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    17,             /* lineNo */
    32,             /* colNo */
    "LP.Rd",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    17,             /* lineNo */
    79,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    17,             /* lineNo */
    79,             /* colNo */
    "LP.T_L",       /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    19,             /* lineNo */
    38,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m" /* pName */
};

static emlrtDCInfo i_emlrtDCI = {
    22,             /* lineNo */
    48,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    22,             /* lineNo */
    48,             /* colNo */
    "LP.Rp",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    24,             /* lineNo */
    53,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    24,             /* lineNo */
    53,             /* colNo */
    "LP.T_L",       /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    26,             /* lineNo */
    38,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    6,              /* lineNo */
    14,             /* colNo */
    "LP.BB",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    13,             /* lineNo */
    39,             /* colNo */
    "LP.J_type",    /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    13,             /* lineNo */
    39,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    20,             /* lineNo */
    39,             /* colNo */
    "LP.J_type",    /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    20,             /* lineNo */
    39,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    15,             /* lineNo */
    42,             /* colNo */
    "LP.module",    /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    1,              /* iFirst */
    10,             /* iLast */
    17,             /* lineNo */
    42,             /* colNo */
    "LP.module",    /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    1,              /* iFirst */
    30,             /* iLast */
    19,             /* lineNo */
    38,             /* colNo */
    "SV.AA",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    19,             /* lineNo */
    38,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    1,              /* iFirst */
    30,             /* iLast */
    26,             /* lineNo */
    38,             /* colNo */
    "SV.AA",        /* aName */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    0                                                       /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    26,             /* lineNo */
    38,             /* colNo */
    "calc_aa_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\--a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m", /* pName */
    1                                                       /* checkKind */
};

/* Function Definitions */
void calc_aa_0318(const emlrtStack *sp, const struct0_T *LP, struct1_T *SV)
{
  static const int8_T iv[3] = {0, 0, 1};
  real_T A_0_i[9];
  real_T A_BB_i[9];
  real_T c_LP[9];
  real_T d_Cz_tmp[9];
  real_T d_LP[9];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
  i = (int32_T)LP->num_q;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, LP->num_q, mxDOUBLE_CLASS,
                                (int32_T)LP->num_q, &emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    if (((int32_T)((uint32_T)b_i + 1U) < 1) ||
        ((int32_T)((uint32_T)b_i + 1U) > 10)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, 10,
                                    &k_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (LP->BB[b_i] == 0.0) {
      int32_T Cz_tmp_tmp;
      int32_T b_LP;
      if (LP->J_type[b_i] == 'R') {
        __m128d r;
        __m128d r1;
        real_T Cz_tmp;
        real_T b_Cz_tmp;
        real_T c_Cz_tmp;
        real_T e_Cz_tmp;
        real_T f_Cz_tmp;
        int32_T i3;
        if (LP->SN[b_i] != (int32_T)muDoubleScalarFloor(LP->SN[b_i])) {
          emlrtIntegerCheckR2012b(LP->SN[b_i], &emlrtDCI, (emlrtConstCTX)sp);
        }
        b_LP = (int32_T)LP->SN[b_i];
        if ((b_LP < 1) || (b_LP > 3)) {
          emlrtDynamicBoundsCheckR2012b(b_LP, 1, 3, &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
        /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
        /*  Tohoku University, Japan. */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*  */
        /* CZ	A Principal Coordinate Transformation Matrix, Dirction Cosines;
         * C3 */
        /*  */
        /* 	CZ(theta) returns a 3x3 transformation representing a  */
        /* 	rotation of theta about the Z axis. */
        /*  */
        /* 	See also CX, CY. */
        /*  Cz = [  cos(theta)  sin(theta)  0; */
        /*         -sin(theta)  cos(theta)  0; */
        /*                   0           0  1 ]; */
        Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
        c_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
        /* %%EOF */
        if (LP->module[b_i] != (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
          emlrtIntegerCheckR2012b(LP->module[b_i], &b_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        i3 = (int32_T)LP->module[b_i];
        if ((i3 < 1) || (i3 > 10)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, 10, &b_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
        /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
        /*  Tohoku University, Japan. */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*  */
        /* CZ	A Principal Coordinate Transformation Matrix, Dirction Cosines;
         * C3 */
        /*  */
        /* 	CZ(theta) returns a 3x3 transformation representing a  */
        /* 	rotation of theta about the Z axis. */
        /*  */
        /* 	See also CX, CY. */
        /*  Cz = [  cos(theta)  sin(theta)  0; */
        /*         -sin(theta)  cos(theta)  0; */
        /*                   0           0  1 ]; */
        b_Cz_tmp = SV->q[b_i];
        f_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
        e_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
        /* %%EOF */
        d_Cz_tmp[0] = c_Cz_tmp;
        d_Cz_tmp[3] = -Cz_tmp;
        d_Cz_tmp[6] = 0.0;
        d_Cz_tmp[1] = Cz_tmp;
        d_Cz_tmp[4] = c_Cz_tmp;
        d_Cz_tmp[7] = 0.0;
        memset(&c_LP[0], 0, 9U * sizeof(real_T));
        b_LP = 9 * (b_LP - 1);
        for (i1 = 0; i1 < 3; i1++) {
          int32_T b_Cz_tmp_tmp;
          Cz_tmp_tmp = 3 * i1 + 2;
          b_Cz_tmp_tmp = iv[i1];
          d_Cz_tmp[Cz_tmp_tmp] = b_Cz_tmp_tmp;
          b_Cz_tmp = d_Cz_tmp[3 * i1];
          r = _mm_loadu_pd(&c_LP[3 * i1]);
          _mm_storeu_pd(&c_LP[3 * i1],
                        _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_LP]),
                                                 _mm_set1_pd(b_Cz_tmp))));
          c_LP[Cz_tmp_tmp] += LP->RBcp[b_LP + 2] * b_Cz_tmp;
          b_Cz_tmp = d_Cz_tmp[3 * i1 + 1];
          r = _mm_loadu_pd(&c_LP[3 * i1]);
          _mm_storeu_pd(
              &c_LP[3 * i1],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_LP + 3]),
                                       _mm_set1_pd(b_Cz_tmp))));
          c_LP[Cz_tmp_tmp] += LP->RBcp[b_LP + 5] * b_Cz_tmp;
          r = _mm_loadu_pd(&c_LP[3 * i1]);
          _mm_storeu_pd(
              &c_LP[3 * i1],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_LP + 6]),
                                       _mm_set1_pd(b_Cz_tmp_tmp))));
          c_LP[Cz_tmp_tmp] += LP->RBcp[b_LP + 8] * (real_T)b_Cz_tmp_tmp;
        }
        memset(&d_LP[0], 0, 9U * sizeof(real_T));
        d_Cz_tmp[0] = e_Cz_tmp;
        d_Cz_tmp[3] = -f_Cz_tmp;
        d_Cz_tmp[6] = 0.0;
        d_Cz_tmp[1] = f_Cz_tmp;
        d_Cz_tmp[4] = e_Cz_tmp;
        d_Cz_tmp[7] = 0.0;
        for (i1 = 0; i1 < 3; i1++) {
          b_LP = 3 * i1 + 9 * (i3 - 1);
          b_Cz_tmp = LP->Rp[b_LP];
          r = _mm_loadu_pd(&c_LP[0]);
          r1 = _mm_loadu_pd(&d_LP[3 * i1]);
          _mm_storeu_pd(&d_LP[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          Cz_tmp_tmp = 3 * i1 + 2;
          d_LP[Cz_tmp_tmp] += c_LP[2] * b_Cz_tmp;
          b_Cz_tmp = LP->Rp[b_LP + 1];
          r = _mm_loadu_pd(&c_LP[3]);
          r1 = _mm_loadu_pd(&d_LP[3 * i1]);
          _mm_storeu_pd(&d_LP[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          d_LP[Cz_tmp_tmp] += c_LP[5] * b_Cz_tmp;
          b_Cz_tmp = LP->Rp[b_LP + 2];
          r = _mm_loadu_pd(&c_LP[6]);
          r1 = _mm_loadu_pd(&d_LP[3 * i1]);
          _mm_storeu_pd(&d_LP[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          d_LP[Cz_tmp_tmp] += c_LP[8] * b_Cz_tmp;
          d_Cz_tmp[Cz_tmp_tmp] = iv[i1];
        }
        memset(&A_0_i[0], 0, 9U * sizeof(real_T));
        for (i1 = 0; i1 < 3; i1++) {
          b_Cz_tmp = d_Cz_tmp[3 * i1];
          r = _mm_loadu_pd(&d_LP[0]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
          _mm_storeu_pd(&A_0_i[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          b_LP = 3 * i1 + 2;
          A_0_i[b_LP] += d_LP[2] * b_Cz_tmp;
          b_Cz_tmp = d_Cz_tmp[3 * i1 + 1];
          r = _mm_loadu_pd(&d_LP[3]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
          _mm_storeu_pd(&A_0_i[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[b_LP] += d_LP[5] * b_Cz_tmp;
          b_Cz_tmp = d_Cz_tmp[b_LP];
          r = _mm_loadu_pd(&d_LP[6]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
          _mm_storeu_pd(&A_0_i[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[b_LP] += d_LP[8] * b_Cz_tmp;
        }
      } else {
        __m128d r;
        real_T Cz_tmp;
        real_T b_Cz_tmp;
        int32_T i3;
        if (LP->SN[b_i] != (int32_T)muDoubleScalarFloor(LP->SN[b_i])) {
          emlrtIntegerCheckR2012b(LP->SN[b_i], &c_emlrtDCI, (emlrtConstCTX)sp);
        }
        b_LP = (int32_T)LP->SN[b_i];
        if ((b_LP < 1) || (b_LP > 3)) {
          emlrtDynamicBoundsCheckR2012b(b_LP, 1, 3, &c_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
        /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
        /*  Tohoku University, Japan. */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
        /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
        /*  */
        /* CZ	A Principal Coordinate Transformation Matrix, Dirction Cosines;
         * C3 */
        /*  */
        /* 	CZ(theta) returns a 3x3 transformation representing a  */
        /* 	rotation of theta about the Z axis. */
        /*  */
        /* 	See also CX, CY. */
        /*  Cz = [  cos(theta)  sin(theta)  0; */
        /*         -sin(theta)  cos(theta)  0; */
        /*                   0           0  1 ]; */
        b_Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
        Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
        /* %%EOF */
        if (LP->module[b_i] != (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
          emlrtIntegerCheckR2012b(LP->module[b_i], &d_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        i3 = (int32_T)LP->module[b_i];
        if ((i3 < 1) || (i3 > 10)) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, 10, &d_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d_Cz_tmp[0] = Cz_tmp;
        d_Cz_tmp[3] = -b_Cz_tmp;
        d_Cz_tmp[6] = 0.0;
        d_Cz_tmp[1] = b_Cz_tmp;
        d_Cz_tmp[4] = Cz_tmp;
        d_Cz_tmp[7] = 0.0;
        memset(&c_LP[0], 0, 9U * sizeof(real_T));
        b_LP = 9 * (b_LP - 1);
        for (i2 = 0; i2 < 3; i2++) {
          int32_T b_Cz_tmp_tmp;
          b_Cz_tmp_tmp = 3 * i2 + 2;
          Cz_tmp_tmp = iv[i2];
          d_Cz_tmp[b_Cz_tmp_tmp] = Cz_tmp_tmp;
          b_Cz_tmp = d_Cz_tmp[3 * i2];
          r = _mm_loadu_pd(&c_LP[3 * i2]);
          _mm_storeu_pd(&c_LP[3 * i2],
                        _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_LP]),
                                                 _mm_set1_pd(b_Cz_tmp))));
          c_LP[b_Cz_tmp_tmp] += LP->RBcp[b_LP + 2] * b_Cz_tmp;
          b_Cz_tmp = d_Cz_tmp[3 * i2 + 1];
          r = _mm_loadu_pd(&c_LP[3 * i2]);
          _mm_storeu_pd(
              &c_LP[3 * i2],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_LP + 3]),
                                       _mm_set1_pd(b_Cz_tmp))));
          c_LP[b_Cz_tmp_tmp] += LP->RBcp[b_LP + 5] * b_Cz_tmp;
          r = _mm_loadu_pd(&c_LP[3 * i2]);
          _mm_storeu_pd(
              &c_LP[3 * i2],
              _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_LP + 6]),
                                       _mm_set1_pd(Cz_tmp_tmp))));
          c_LP[b_Cz_tmp_tmp] += LP->RBcp[b_LP + 8] * (real_T)Cz_tmp_tmp;
        }
        memset(&A_0_i[0], 0, 9U * sizeof(real_T));
        for (i1 = 0; i1 < 3; i1++) {
          __m128d r1;
          b_LP = (i1 << 2) + ((i3 - 1) << 4);
          b_Cz_tmp = LP->T_L[b_LP];
          r = _mm_loadu_pd(&c_LP[0]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
          _mm_storeu_pd(&A_0_i[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          Cz_tmp_tmp = 3 * i1 + 2;
          A_0_i[Cz_tmp_tmp] += c_LP[2] * b_Cz_tmp;
          b_Cz_tmp = LP->T_L[b_LP + 1];
          r = _mm_loadu_pd(&c_LP[3]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
          _mm_storeu_pd(&A_0_i[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[Cz_tmp_tmp] += c_LP[5] * b_Cz_tmp;
          b_Cz_tmp = LP->T_L[b_LP + 2];
          r = _mm_loadu_pd(&c_LP[6]);
          r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
          _mm_storeu_pd(&A_0_i[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
          A_0_i[Cz_tmp_tmp] += c_LP[8] * b_Cz_tmp;
        }
      }
      b_LP = (b_i + 1) * 3 - 3;
      for (i1 = 0; i1 < 3; i1++) {
        for (i2 = 0; i2 < 3; i2++) {
          Cz_tmp_tmp = i1 + 3 * (i2 + b_LP);
          SV->AA[Cz_tmp_tmp] = 0.0;
          SV->AA[Cz_tmp_tmp] += SV->A0[i1] * A_0_i[3 * i2];
          SV->AA[Cz_tmp_tmp] += SV->A0[i1 + 3] * A_0_i[3 * i2 + 1];
          SV->AA[Cz_tmp_tmp] += SV->A0[i1 + 6] * A_0_i[3 * i2 + 2];
        }
      }
    } else {
      __m128d r;
      __m128d r1;
      real_T Cz_tmp;
      real_T b_Cz_tmp;
      real_T c_Cz_tmp;
      real_T e_Cz_tmp;
      real_T f_Cz_tmp;
      int32_T Cz_tmp_tmp;
      int32_T b_Cz_tmp_tmp;
      int32_T b_LP;
      boolean_T b;
      boolean_T guard1;
      guard1 = false;
      if (LP->BB[b_i] != 0.0) {
        if (LP->BB[b_i] != (int32_T)muDoubleScalarFloor(LP->BB[b_i])) {
          emlrtIntegerCheckR2012b(LP->BB[b_i], &k_emlrtDCI, (emlrtConstCTX)sp);
        }
        b_LP = (int32_T)LP->BB[b_i];
        if ((b_LP < 1) || (b_LP > 10)) {
          emlrtDynamicBoundsCheckR2012b(b_LP, 1, 10, &l_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP->J_type[b_LP - 1] == 'R') {
          if (LP->J_type[b_i] == 'R') {
            real_T g_Cz_tmp;
            int32_T i3;
            if ((b_i < 1) || (b_i > 10)) {
              emlrtDynamicBoundsCheckR2012b(b_i, 1, 10, &n_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            Cz_tmp = LP->module[b_i - 1];
            if (Cz_tmp != (int32_T)muDoubleScalarFloor(Cz_tmp)) {
              emlrtIntegerCheckR2012b(Cz_tmp, &e_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)Cz_tmp < 1) || ((int32_T)Cz_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)Cz_tmp, 1, 10, &e_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
            /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
            /*  Tohoku University, Japan. */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  */
            /* CZ	A Principal Coordinate Transformation Matrix, Dirction
             * Cosines; C3 */
            /*  */
            /* 	CZ(theta) returns a 3x3 transformation representing a  */
            /* 	rotation of theta about the Z axis. */
            /*  */
            /* 	See also CX, CY. */
            /*  Cz = [  cos(theta)  sin(theta)  0; */
            /*         -sin(theta)  cos(theta)  0; */
            /*                   0           0  1 ]; */
            c_Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
            e_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
            /* %%EOF */
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &f_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            i3 = (int32_T)LP->module[b_i];
            if ((i3 < 1) || (i3 > 10)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, 10, &f_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
            /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
            /*  Tohoku University, Japan. */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  */
            /* CZ	A Principal Coordinate Transformation Matrix, Dirction
             * Cosines; C3 */
            /*  */
            /* 	CZ(theta) returns a 3x3 transformation representing a  */
            /* 	rotation of theta about the Z axis. */
            /*  */
            /* 	See also CX, CY. */
            /*  Cz = [  cos(theta)  sin(theta)  0; */
            /*         -sin(theta)  cos(theta)  0; */
            /*                   0           0  1 ]; */
            b_Cz_tmp = SV->q[b_i];
            g_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
            f_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
            /* %%EOF */
            d_Cz_tmp[0] = e_Cz_tmp;
            d_Cz_tmp[3] = -c_Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = c_Cz_tmp;
            d_Cz_tmp[4] = e_Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            memset(&c_LP[0], 0, 9U * sizeof(real_T));
            b_LP = 9 * ((int32_T)Cz_tmp - 1);
            for (i2 = 0; i2 < 3; i2++) {
              Cz_tmp_tmp = 3 * i2 + 2;
              b_Cz_tmp_tmp = iv[i2];
              d_Cz_tmp[Cz_tmp_tmp] = b_Cz_tmp_tmp;
              b_Cz_tmp = d_Cz_tmp[3 * i2];
              r = _mm_loadu_pd(&c_LP[3 * i2]);
              _mm_storeu_pd(
                  &c_LP[3 * i2],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->Rd[b_LP]),
                                           _mm_set1_pd(b_Cz_tmp))));
              c_LP[Cz_tmp_tmp] += LP->Rd[b_LP + 2] * b_Cz_tmp;
              b_Cz_tmp = d_Cz_tmp[3 * i2 + 1];
              r = _mm_loadu_pd(&c_LP[3 * i2]);
              _mm_storeu_pd(
                  &c_LP[3 * i2],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->Rd[b_LP + 3]),
                                           _mm_set1_pd(b_Cz_tmp))));
              c_LP[Cz_tmp_tmp] += LP->Rd[b_LP + 5] * b_Cz_tmp;
              r = _mm_loadu_pd(&c_LP[3 * i2]);
              _mm_storeu_pd(
                  &c_LP[3 * i2],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->Rd[b_LP + 6]),
                                           _mm_set1_pd(b_Cz_tmp_tmp))));
              c_LP[Cz_tmp_tmp] += LP->Rd[b_LP + 8] * (real_T)b_Cz_tmp_tmp;
            }
            memset(&d_LP[0], 0, 9U * sizeof(real_T));
            d_Cz_tmp[0] = f_Cz_tmp;
            d_Cz_tmp[3] = -g_Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = g_Cz_tmp;
            d_Cz_tmp[4] = f_Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            for (i1 = 0; i1 < 3; i1++) {
              b_LP = 3 * i1 + 9 * (i3 - 1);
              b_Cz_tmp = LP->Rp[b_LP];
              r = _mm_loadu_pd(&c_LP[0]);
              r1 = _mm_loadu_pd(&d_LP[3 * i1]);
              _mm_storeu_pd(
                  &d_LP[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              Cz_tmp_tmp = 3 * i1 + 2;
              d_LP[Cz_tmp_tmp] += c_LP[2] * b_Cz_tmp;
              b_Cz_tmp = LP->Rp[b_LP + 1];
              r = _mm_loadu_pd(&c_LP[3]);
              r1 = _mm_loadu_pd(&d_LP[3 * i1]);
              _mm_storeu_pd(
                  &d_LP[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              d_LP[Cz_tmp_tmp] += c_LP[5] * b_Cz_tmp;
              b_Cz_tmp = LP->Rp[b_LP + 2];
              r = _mm_loadu_pd(&c_LP[6]);
              r1 = _mm_loadu_pd(&d_LP[3 * i1]);
              _mm_storeu_pd(
                  &d_LP[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              d_LP[Cz_tmp_tmp] += c_LP[8] * b_Cz_tmp;
              d_Cz_tmp[Cz_tmp_tmp] = iv[i1];
            }
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i1 = 0; i1 < 3; i1++) {
              b_Cz_tmp = d_Cz_tmp[3 * i1];
              r = _mm_loadu_pd(&d_LP[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              b_LP = 3 * i1 + 2;
              A_BB_i[b_LP] += d_LP[2] * b_Cz_tmp;
              b_Cz_tmp = d_Cz_tmp[3 * i1 + 1];
              r = _mm_loadu_pd(&d_LP[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_LP] += d_LP[5] * b_Cz_tmp;
              b_Cz_tmp = d_Cz_tmp[b_LP];
              r = _mm_loadu_pd(&d_LP[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_LP] += d_LP[8] * b_Cz_tmp;
            }
          } else if (LP->J_type[b_i] == 'L') {
            int32_T i3;
            if ((b_i < 1) || (b_i > 10)) {
              emlrtDynamicBoundsCheckR2012b(b_i, 1, 10, &o_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            b_Cz_tmp = LP->module[b_i - 1];
            if (b_Cz_tmp != (int32_T)muDoubleScalarFloor(b_Cz_tmp)) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &g_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)b_Cz_tmp < 1) || ((int32_T)b_Cz_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_Cz_tmp, 1, 10,
                                            &g_emlrtBCI, (emlrtConstCTX)sp);
            }
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
            /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
            /*  Tohoku University, Japan. */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  */
            /* CZ	A Principal Coordinate Transformation Matrix, Dirction
             * Cosines; C3 */
            /*  */
            /* 	CZ(theta) returns a 3x3 transformation representing a  */
            /* 	rotation of theta about the Z axis. */
            /*  */
            /* 	See also CX, CY. */
            /*  Cz = [  cos(theta)  sin(theta)  0; */
            /*         -sin(theta)  cos(theta)  0; */
            /*                   0           0  1 ]; */
            Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
            c_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
            /* %%EOF */
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &h_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            i3 = (int32_T)LP->module[b_i];
            if ((i3 < 1) || (i3 > 10)) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, 10, &h_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            d_Cz_tmp[0] = c_Cz_tmp;
            d_Cz_tmp[3] = -Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = Cz_tmp;
            d_Cz_tmp[4] = c_Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            memset(&c_LP[0], 0, 9U * sizeof(real_T));
            b_LP = 9 * ((int32_T)b_Cz_tmp - 1);
            for (i2 = 0; i2 < 3; i2++) {
              Cz_tmp_tmp = 3 * i2 + 2;
              b_Cz_tmp_tmp = iv[i2];
              d_Cz_tmp[Cz_tmp_tmp] = b_Cz_tmp_tmp;
              b_Cz_tmp = d_Cz_tmp[3 * i2];
              r = _mm_loadu_pd(&c_LP[3 * i2]);
              _mm_storeu_pd(
                  &c_LP[3 * i2],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->Rd[b_LP]),
                                           _mm_set1_pd(b_Cz_tmp))));
              c_LP[Cz_tmp_tmp] += LP->Rd[b_LP + 2] * b_Cz_tmp;
              b_Cz_tmp = d_Cz_tmp[3 * i2 + 1];
              r = _mm_loadu_pd(&c_LP[3 * i2]);
              _mm_storeu_pd(
                  &c_LP[3 * i2],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->Rd[b_LP + 3]),
                                           _mm_set1_pd(b_Cz_tmp))));
              c_LP[Cz_tmp_tmp] += LP->Rd[b_LP + 5] * b_Cz_tmp;
              r = _mm_loadu_pd(&c_LP[3 * i2]);
              _mm_storeu_pd(
                  &c_LP[3 * i2],
                  _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->Rd[b_LP + 6]),
                                           _mm_set1_pd(b_Cz_tmp_tmp))));
              c_LP[Cz_tmp_tmp] += LP->Rd[b_LP + 8] * (real_T)b_Cz_tmp_tmp;
            }
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i1 = 0; i1 < 3; i1++) {
              b_LP = (i1 << 2) + ((i3 - 1) << 4);
              b_Cz_tmp = LP->T_L[b_LP];
              r = _mm_loadu_pd(&c_LP[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              Cz_tmp_tmp = 3 * i1 + 2;
              A_BB_i[Cz_tmp_tmp] += c_LP[2] * b_Cz_tmp;
              b_Cz_tmp = LP->T_L[b_LP + 1];
              r = _mm_loadu_pd(&c_LP[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[Cz_tmp_tmp] += c_LP[5] * b_Cz_tmp;
              b_Cz_tmp = LP->T_L[b_LP + 2];
              r = _mm_loadu_pd(&c_LP[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[Cz_tmp_tmp] += c_LP[8] * b_Cz_tmp;
            }
          }
          b_Cz_tmp = LP->BB[b_i] * 3.0;
          if (!(b_Cz_tmp == b_Cz_tmp)) {
            emlrtErrorWithMessageIdR2018a(
                sp, &b_emlrtRTEI,
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                0);
          }
          for (i1 = 0; i1 < 3; i1++) {
            Cz_tmp = (b_Cz_tmp - 2.0) + (real_T)i1;
            b_LP = (int32_T)muDoubleScalarFloor(Cz_tmp);
            if (Cz_tmp != b_LP) {
              emlrtIntegerCheckR2012b(Cz_tmp, &m_emlrtDCI, (emlrtConstCTX)sp);
            }
            b = ((Cz_tmp < 1.0) || (Cz_tmp > 30.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)Cz_tmp, 1, 30, &p_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (int32_T)Cz_tmp;
            b_Cz_tmp_tmp = 3 * (Cz_tmp_tmp - 1);
            A_0_i[3 * i1] = SV->AA[b_Cz_tmp_tmp];
            if (Cz_tmp_tmp != b_LP) {
              emlrtIntegerCheckR2012b(Cz_tmp, &m_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 30, &p_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i1 + 1] = SV->AA[b_Cz_tmp_tmp + 1];
            if (Cz_tmp_tmp != b_LP) {
              emlrtIntegerCheckR2012b(Cz_tmp, &m_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 30, &p_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i1 + 2] = SV->AA[b_Cz_tmp_tmp + 2];
          }
          b_LP = (b_i + 1) * 3 - 3;
          for (i1 = 0; i1 < 3; i1++) {
            b_Cz_tmp = A_0_i[i1];
            Cz_tmp = A_0_i[i1 + 3];
            c_Cz_tmp = A_0_i[i1 + 6];
            for (i2 = 0; i2 < 3; i2++) {
              Cz_tmp_tmp = i1 + 3 * (i2 + b_LP);
              SV->AA[Cz_tmp_tmp] = 0.0;
              SV->AA[Cz_tmp_tmp] += b_Cz_tmp * A_BB_i[3 * i2];
              SV->AA[Cz_tmp_tmp] += Cz_tmp * A_BB_i[3 * i2 + 1];
              SV->AA[Cz_tmp_tmp] += c_Cz_tmp * A_BB_i[3 * i2 + 2];
            }
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1 && (LP->BB[b_i] != 0.0)) {
        if (LP->BB[b_i] != (int32_T)muDoubleScalarFloor(LP->BB[b_i])) {
          emlrtIntegerCheckR2012b(LP->BB[b_i], &l_emlrtDCI, (emlrtConstCTX)sp);
        }
        b_LP = (int32_T)LP->BB[b_i];
        if ((b_LP < 1) || (b_LP > 10)) {
          emlrtDynamicBoundsCheckR2012b(b_LP, 1, 10, &m_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP->J_type[b_LP - 1] == 'L') {
          if (LP->J_type[b_i] == 'R') {
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
            /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
            /*  Tohoku University, Japan. */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  */
            /* CZ	A Principal Coordinate Transformation Matrix, Dirction
             * Cosines; C3 */
            /*  */
            /* 	CZ(theta) returns a 3x3 transformation representing a  */
            /* 	rotation of theta about the Z axis. */
            /*  */
            /* 	See also CX, CY. */
            /*  Cz = [  cos(theta)  sin(theta)  0; */
            /*         -sin(theta)  cos(theta)  0; */
            /*                   0           0  1 ]; */
            Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
            c_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
            /* %%EOF */
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &i_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            b_LP = (int32_T)LP->module[b_i];
            if ((b_LP < 1) || (b_LP > 10)) {
              emlrtDynamicBoundsCheckR2012b(b_LP, 1, 10, &i_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
            /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
            /*  Tohoku University, Japan. */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  */
            /* CZ	A Principal Coordinate Transformation Matrix, Dirction
             * Cosines; C3 */
            /*  */
            /* 	CZ(theta) returns a 3x3 transformation representing a  */
            /* 	rotation of theta about the Z axis. */
            /*  */
            /* 	See also CX, CY. */
            /*  Cz = [  cos(theta)  sin(theta)  0; */
            /*         -sin(theta)  cos(theta)  0; */
            /*                   0           0  1 ]; */
            b_Cz_tmp = SV->q[b_i];
            f_Cz_tmp = muDoubleScalarSin(b_Cz_tmp);
            e_Cz_tmp = muDoubleScalarCos(b_Cz_tmp);
            /* %%EOF */
            d_Cz_tmp[0] = c_Cz_tmp;
            d_Cz_tmp[3] = -Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = Cz_tmp;
            d_Cz_tmp[4] = c_Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            d_Cz_tmp[2] = 0.0;
            d_Cz_tmp[5] = 0.0;
            d_Cz_tmp[8] = 1.0;
            memset(&A_0_i[0], 0, 9U * sizeof(real_T));
            for (i1 = 0; i1 < 3; i1++) {
              Cz_tmp_tmp = 3 * i1 + 9 * (b_LP - 1);
              b_Cz_tmp = LP->Rp[Cz_tmp_tmp];
              r = _mm_loadu_pd(&d_Cz_tmp[0]);
              r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
              _mm_storeu_pd(
                  &A_0_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              b_Cz_tmp_tmp = 3 * i1 + 2;
              A_0_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP->Rp[Cz_tmp_tmp + 1];
              r = _mm_loadu_pd(&d_Cz_tmp[3]);
              r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
              _mm_storeu_pd(
                  &A_0_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_0_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP->Rp[Cz_tmp_tmp + 2];
              r = _mm_loadu_pd(&d_Cz_tmp[6]);
              r1 = _mm_loadu_pd(&A_0_i[3 * i1]);
              _mm_storeu_pd(
                  &A_0_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_0_i[b_Cz_tmp_tmp] += b_Cz_tmp;
            }
            d_Cz_tmp[0] = e_Cz_tmp;
            d_Cz_tmp[3] = -f_Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = f_Cz_tmp;
            d_Cz_tmp[4] = e_Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i1 = 0; i1 < 3; i1++) {
              b_LP = 3 * i1 + 2;
              Cz_tmp_tmp = iv[i1];
              d_Cz_tmp[b_LP] = Cz_tmp_tmp;
              b_Cz_tmp = d_Cz_tmp[3 * i1];
              r = _mm_loadu_pd(&A_0_i[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_LP] += A_0_i[2] * b_Cz_tmp;
              b_Cz_tmp = d_Cz_tmp[3 * i1 + 1];
              r = _mm_loadu_pd(&A_0_i[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_LP] += A_0_i[5] * b_Cz_tmp;
              r = _mm_loadu_pd(&A_0_i[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp_tmp))));
              A_BB_i[b_LP] += A_0_i[8] * (real_T)Cz_tmp_tmp;
            }
          } else if (LP->J_type[b_i] == 'L') {
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  The SpaceDyn, a MATLAB toolbox for Space and Mobile Robots. */
            /*  (C)1998 The Space Robotics Lab. directed by Kazuya Yoshida, */
            /*  Tohoku University, Japan. */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*     version 1.0 // Oct.4, 1999, Last modification by K.Yoshida */
            /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
             */
            /*  */
            /* CZ	A Principal Coordinate Transformation Matrix, Dirction
             * Cosines; C3 */
            /*  */
            /* 	CZ(theta) returns a 3x3 transformation representing a  */
            /* 	rotation of theta about the Z axis. */
            /*  */
            /* 	See also CX, CY. */
            /*  Cz = [  cos(theta)  sin(theta)  0; */
            /*         -sin(theta)  cos(theta)  0; */
            /*                   0           0  1 ]; */
            b_Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
            Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
            /* %%EOF */
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &j_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            b_LP = (int32_T)LP->module[b_i];
            if ((b_LP < 1) || (b_LP > 10)) {
              emlrtDynamicBoundsCheckR2012b(b_LP, 1, 10, &j_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            d_Cz_tmp[0] = Cz_tmp;
            d_Cz_tmp[3] = -b_Cz_tmp;
            d_Cz_tmp[6] = 0.0;
            d_Cz_tmp[1] = b_Cz_tmp;
            d_Cz_tmp[4] = Cz_tmp;
            d_Cz_tmp[7] = 0.0;
            d_Cz_tmp[2] = 0.0;
            d_Cz_tmp[5] = 0.0;
            d_Cz_tmp[8] = 1.0;
            memset(&A_BB_i[0], 0, 9U * sizeof(real_T));
            for (i1 = 0; i1 < 3; i1++) {
              Cz_tmp_tmp = (i1 << 2) + ((b_LP - 1) << 4);
              b_Cz_tmp = LP->T_L[Cz_tmp_tmp];
              r = _mm_loadu_pd(&d_Cz_tmp[0]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              b_Cz_tmp_tmp = 3 * i1 + 2;
              A_BB_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP->T_L[Cz_tmp_tmp + 1];
              r = _mm_loadu_pd(&d_Cz_tmp[3]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_Cz_tmp_tmp] += 0.0 * b_Cz_tmp;
              b_Cz_tmp = LP->T_L[Cz_tmp_tmp + 2];
              r = _mm_loadu_pd(&d_Cz_tmp[6]);
              r1 = _mm_loadu_pd(&A_BB_i[3 * i1]);
              _mm_storeu_pd(
                  &A_BB_i[3 * i1],
                  _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(b_Cz_tmp))));
              A_BB_i[b_Cz_tmp_tmp] += b_Cz_tmp;
            }
          }
          b_Cz_tmp = LP->BB[b_i] * 3.0;
          if (!(b_Cz_tmp == b_Cz_tmp)) {
            emlrtErrorWithMessageIdR2018a(
                sp, &c_emlrtRTEI,
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                0);
          }
          for (i1 = 0; i1 < 3; i1++) {
            Cz_tmp = (b_Cz_tmp - 2.0) + (real_T)i1;
            b_LP = (int32_T)muDoubleScalarFloor(Cz_tmp);
            if (Cz_tmp != b_LP) {
              emlrtIntegerCheckR2012b(Cz_tmp, &n_emlrtDCI, (emlrtConstCTX)sp);
            }
            b = ((Cz_tmp < 1.0) || (Cz_tmp > 30.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)Cz_tmp, 1, 30, &q_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (int32_T)Cz_tmp;
            b_Cz_tmp_tmp = 3 * (Cz_tmp_tmp - 1);
            A_0_i[3 * i1] = SV->AA[b_Cz_tmp_tmp];
            if (Cz_tmp_tmp != b_LP) {
              emlrtIntegerCheckR2012b(Cz_tmp, &n_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 30, &q_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i1 + 1] = SV->AA[b_Cz_tmp_tmp + 1];
            if (Cz_tmp_tmp != b_LP) {
              emlrtIntegerCheckR2012b(Cz_tmp, &n_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 30, &q_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_0_i[3 * i1 + 2] = SV->AA[b_Cz_tmp_tmp + 2];
          }
          b_LP = (b_i + 1) * 3 - 3;
          for (i1 = 0; i1 < 3; i1++) {
            b_Cz_tmp = A_0_i[i1];
            Cz_tmp = A_0_i[i1 + 3];
            c_Cz_tmp = A_0_i[i1 + 6];
            for (i2 = 0; i2 < 3; i2++) {
              Cz_tmp_tmp = i1 + 3 * (i2 + b_LP);
              SV->AA[Cz_tmp_tmp] = 0.0;
              SV->AA[Cz_tmp_tmp] += b_Cz_tmp * A_BB_i[3 * i2];
              SV->AA[Cz_tmp_tmp] += Cz_tmp * A_BB_i[3 * i2 + 1];
              SV->AA[Cz_tmp_tmp] += c_Cz_tmp * A_BB_i[3 * i2 + 2];
            }
          }
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (calc_aa_0318.c) */
