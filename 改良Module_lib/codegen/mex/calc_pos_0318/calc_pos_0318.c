/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * calc_pos_0318.c
 *
 * Code generation for function 'calc_pos_0318'
 *
 */

/* Include files */
#include "calc_pos_0318.h"
#include "calc_pos_0318_data.h"
#include "calc_pos_0318_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = {
    3,               /* lineNo */
    9,               /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    5,               /* lineNo */
    29,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo emlrtBCI = {
    1,               /* iFirst */
    3,               /* iLast */
    5,               /* lineNo */
    29,              /* colNo */
    "LP.RBcp",       /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    7,               /* lineNo */
    53,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    7,               /* lineNo */
    85,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    7,               /* lineNo */
    85,              /* colNo */
    "LP.Pp",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    9,               /* lineNo */
    53,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    9,               /* lineNo */
    90,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    9,               /* lineNo */
    90,              /* colNo */
    "LP.T_L",        /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = {
    12,              /* lineNo */
    26,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m" /* pName */
};

static emlrtDCInfo f_emlrtDCI = {
    14,              /* lineNo */
    34,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    14,              /* lineNo */
    61,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    14,              /* lineNo */
    61,              /* colNo */
    "LP.Pd",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    14,              /* lineNo */
    101,             /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    14,              /* lineNo */
    101,             /* colNo */
    "LP.Rd",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    14,              /* lineNo */
    146,             /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    14,              /* lineNo */
    146,             /* colNo */
    "LP.Pp",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    16,              /* lineNo */
    34,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    16,              /* lineNo */
    61,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    16,              /* lineNo */
    61,              /* colNo */
    "LP.Pd",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    16,              /* lineNo */
    101,             /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    16,              /* lineNo */
    101,             /* colNo */
    "LP.Rd",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    16,              /* lineNo */
    151,             /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    16,              /* lineNo */
    151,             /* colNo */
    "LP.T_L",        /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtRTEInfo c_emlrtRTEI = {
    19,              /* lineNo */
    26,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m" /* pName */
};

static emlrtDCInfo n_emlrtDCI = {
    21,              /* lineNo */
    34,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    21,              /* lineNo */
    61,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    21,              /* lineNo */
    61,              /* colNo */
    "LP.Pp",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    23,              /* lineNo */
    34,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    23,              /* lineNo */
    66,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    23,              /* lineNo */
    66,              /* colNo */
    "LP.T_L",        /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    4,               /* lineNo */
    14,              /* colNo */
    "LP.BB",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    11,              /* lineNo */
    39,              /* colNo */
    "LP.J_type",     /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    11,              /* lineNo */
    39,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    18,              /* lineNo */
    39,              /* colNo */
    "LP.J_type",     /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    18,              /* lineNo */
    39,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    14,              /* lineNo */
    71,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    16,              /* lineNo */
    71,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    14,              /* lineNo */
    111,             /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    16,              /* lineNo */
    111,             /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    1,               /* iFirst */
    30,              /* iLast */
    12,              /* lineNo */
    26,              /* colNo */
    "SV.AA",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    12,              /* lineNo */
    26,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    1,               /* iFirst */
    30,              /* iLast */
    19,              /* lineNo */
    26,              /* colNo */
    "SV.AA",         /* aName */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    0                                /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    19,              /* lineNo */
    26,              /* colNo */
    "calc_pos_0318", /* fName */
    "F:\\Archive "
    "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
    "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
    "\xe6\x95\xb0\\calc_pos_0318.m", /* pName */
    1                                /* checkKind */
};

/* Function Definitions */
void calc_pos_0318(const emlrtStack *sp, const struct0_T *LP, struct2_T *SV)
{
  static const int8_T iv[3] = {0, 0, 1};
  real_T A_I_BB[9];
  real_T A_I_i[9];
  real_T b_A_I_BB[9];
  real_T b_SV[3];
  real_T c_A_I_BB[3];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  i = (int32_T)LP->num_q;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, LP->num_q, mxDOUBLE_CLASS,
                                (int32_T)LP->num_q, &emlrtRTEI,
                                (emlrtConstCTX)sp);
  for (b_i = 0; b_i < i; b_i++) {
    if (((int32_T)((uint32_T)b_i + 1U) < 1) ||
        ((int32_T)((uint32_T)b_i + 1U) > 10)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)((uint32_T)b_i + 1U), 1, 10,
                                    &l_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (LP->BB[b_i] == 0.0) {
      __m128d r;
      real_T c_Cz_tmp[9];
      real_T Cz_tmp;
      real_T b_Cz_tmp;
      int32_T A_I_BB_tmp;
      int32_T Cz_tmp_tmp;
      int32_T b_A_I_BB_tmp;
      int32_T b_LP;
      A_I_BB_tmp = (int32_T)muDoubleScalarFloor(LP->SN[b_i]);
      if (LP->SN[b_i] != A_I_BB_tmp) {
        emlrtIntegerCheckR2012b(LP->SN[b_i], &emlrtDCI, (emlrtConstCTX)sp);
      }
      b_LP = (int32_T)LP->SN[b_i];
      if ((b_LP < 1) || (b_LP > 3)) {
        emlrtDynamicBoundsCheckR2012b(b_LP, 1, 3, &emlrtBCI, (emlrtConstCTX)sp);
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
      b_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
      /* %%EOF */
      c_Cz_tmp[0] = b_Cz_tmp;
      c_Cz_tmp[3] = -Cz_tmp;
      c_Cz_tmp[6] = 0.0;
      c_Cz_tmp[1] = Cz_tmp;
      c_Cz_tmp[4] = b_Cz_tmp;
      c_Cz_tmp[7] = 0.0;
      memset(&A_I_i[0], 0, 9U * sizeof(real_T));
      b_A_I_BB_tmp = 9 * (b_LP - 1);
      for (i1 = 0; i1 < 3; i1++) {
        int32_T A_I_i_tmp;
        Cz_tmp_tmp = 3 * i1 + 2;
        A_I_i_tmp = iv[i1];
        c_Cz_tmp[Cz_tmp_tmp] = A_I_i_tmp;
        Cz_tmp = c_Cz_tmp[3 * i1];
        r = _mm_loadu_pd(&A_I_i[3 * i1]);
        _mm_storeu_pd(
            &A_I_i[3 * i1],
            _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_A_I_BB_tmp]),
                                     _mm_set1_pd(Cz_tmp))));
        A_I_i[Cz_tmp_tmp] += LP->RBcp[b_A_I_BB_tmp + 2] * Cz_tmp;
        Cz_tmp = c_Cz_tmp[3 * i1 + 1];
        r = _mm_loadu_pd(&A_I_i[3 * i1]);
        _mm_storeu_pd(
            &A_I_i[3 * i1],
            _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_A_I_BB_tmp + 3]),
                                     _mm_set1_pd(Cz_tmp))));
        A_I_i[Cz_tmp_tmp] += LP->RBcp[b_A_I_BB_tmp + 5] * Cz_tmp;
        r = _mm_loadu_pd(&A_I_i[3 * i1]);
        _mm_storeu_pd(
            &A_I_i[3 * i1],
            _mm_add_pd(r, _mm_mul_pd(_mm_loadu_pd(&LP->RBcp[b_A_I_BB_tmp + 6]),
                                     _mm_set1_pd(A_I_i_tmp))));
        A_I_i[Cz_tmp_tmp] += LP->RBcp[b_A_I_BB_tmp + 8] * (real_T)A_I_i_tmp;
      }
      if (LP->J_type[b_i] == 'R') {
        __m128d r1;
        if (LP->SN[b_i] != A_I_BB_tmp) {
          emlrtIntegerCheckR2012b(LP->SN[b_i], &b_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (LP->module[b_i] != (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
          emlrtIntegerCheckR2012b(LP->module[b_i], &c_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        b_A_I_BB_tmp = (int32_T)LP->module[b_i];
        if ((b_A_I_BB_tmp < 1) || (b_A_I_BB_tmp > 10)) {
          emlrtDynamicBoundsCheckR2012b(b_A_I_BB_tmp, 1, 10, &b_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
        memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
        Cz_tmp_tmp = 3 * (b_LP - 1);
        for (i1 = 0; i1 < 3; i1++) {
          Cz_tmp = A_I_i[3 * i1];
          r = _mm_loadu_pd(&SV->A0[0]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          _mm_storeu_pd(&b_A_I_BB[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          A_I_BB_tmp = 3 * i1 + 2;
          b_A_I_BB[A_I_BB_tmp] += SV->A0[2] * Cz_tmp;
          Cz_tmp = A_I_i[3 * i1 + 1];
          r = _mm_loadu_pd(&SV->A0[3]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          _mm_storeu_pd(&b_A_I_BB[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[5] * Cz_tmp;
          Cz_tmp = A_I_i[A_I_BB_tmp];
          r = _mm_loadu_pd(&SV->A0[6]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          _mm_storeu_pd(&b_A_I_BB[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[8] * Cz_tmp;
          b_SV[i1] = SV->R0[i1] + ((SV->A0[i1] * LP->PBcp[Cz_tmp_tmp] +
                                    SV->A0[i1 + 3] * LP->PBcp[Cz_tmp_tmp + 1]) +
                                   SV->A0[i1 + 6] * LP->PBcp[Cz_tmp_tmp + 2]);
          Cz_tmp = LP->Pp[i1 + 3 * (b_A_I_BB_tmp - 1)];
          r = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          r1 = _mm_loadu_pd(&c_A_I_BB[0]);
          _mm_storeu_pd(&c_A_I_BB[0],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          c_A_I_BB[2] += b_A_I_BB[A_I_BB_tmp] * Cz_tmp;
        }
        r = _mm_loadu_pd(&b_SV[0]);
        r1 = _mm_loadu_pd(&c_A_I_BB[0]);
        _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
        SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
      } else if (LP->J_type[b_i] == 'L') {
        __m128d r1;
        if (LP->SN[b_i] != A_I_BB_tmp) {
          emlrtIntegerCheckR2012b(LP->SN[b_i], &d_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (LP->module[b_i] != (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
          emlrtIntegerCheckR2012b(LP->module[b_i], &e_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        b_A_I_BB_tmp = (int32_T)LP->module[b_i];
        if ((b_A_I_BB_tmp < 1) || (b_A_I_BB_tmp > 10)) {
          emlrtDynamicBoundsCheckR2012b(b_A_I_BB_tmp, 1, 10, &c_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
        memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
        Cz_tmp_tmp = 3 * (b_LP - 1);
        for (i1 = 0; i1 < 3; i1++) {
          Cz_tmp = A_I_i[3 * i1];
          r = _mm_loadu_pd(&SV->A0[0]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          _mm_storeu_pd(&b_A_I_BB[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          A_I_BB_tmp = 3 * i1 + 2;
          b_A_I_BB[A_I_BB_tmp] += SV->A0[2] * Cz_tmp;
          Cz_tmp = A_I_i[3 * i1 + 1];
          r = _mm_loadu_pd(&SV->A0[3]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          _mm_storeu_pd(&b_A_I_BB[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[5] * Cz_tmp;
          Cz_tmp = A_I_i[A_I_BB_tmp];
          r = _mm_loadu_pd(&SV->A0[6]);
          r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          _mm_storeu_pd(&b_A_I_BB[3 * i1],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          b_A_I_BB[A_I_BB_tmp] += SV->A0[8] * Cz_tmp;
          b_SV[i1] = SV->R0[i1] + ((SV->A0[i1] * LP->PBcp[Cz_tmp_tmp] +
                                    SV->A0[i1 + 3] * LP->PBcp[Cz_tmp_tmp + 1]) +
                                   SV->A0[i1 + 6] * LP->PBcp[Cz_tmp_tmp + 2]);
          Cz_tmp = LP->T_L[(i1 + ((b_A_I_BB_tmp - 1) << 4)) + 12];
          r = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
          r1 = _mm_loadu_pd(&c_A_I_BB[0]);
          _mm_storeu_pd(&c_A_I_BB[0],
                        _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
          c_A_I_BB[2] += b_A_I_BB[A_I_BB_tmp] * Cz_tmp;
        }
        r = _mm_loadu_pd(&b_SV[0]);
        r1 = _mm_loadu_pd(&c_A_I_BB[0]);
        _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
        SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
      }
    } else {
      __m128d r;
      __m128d r1;
      real_T c_Cz_tmp[9];
      real_T Cz_tmp;
      real_T b_Cz_tmp;
      int32_T A_I_BB_tmp;
      int32_T A_I_i_tmp;
      int32_T Cz_tmp_tmp;
      int32_T b_A_I_BB_tmp;
      int32_T b_LP;
      boolean_T b;
      boolean_T guard1;
      guard1 = false;
      if (LP->BB[b_i] != 0.0) {
        A_I_i_tmp = (int32_T)muDoubleScalarFloor(LP->BB[b_i]);
        if (LP->BB[b_i] != A_I_i_tmp) {
          emlrtIntegerCheckR2012b(LP->BB[b_i], &r_emlrtDCI, (emlrtConstCTX)sp);
        }
        b_LP = (int32_T)LP->BB[b_i];
        if ((b_LP < 1) || (b_LP > 10)) {
          emlrtDynamicBoundsCheckR2012b(b_LP, 1, 10, &m_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP->J_type[b_LP - 1] == 'R') {
          Cz_tmp = LP->BB[b_i] * 3.0;
          if (!(Cz_tmp == Cz_tmp)) {
            emlrtErrorWithMessageIdR2018a(
                sp, &b_emlrtRTEI,
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                0);
          }
          for (i1 = 0; i1 < 3; i1++) {
            b_Cz_tmp = (Cz_tmp - 2.0) + (real_T)i1;
            A_I_BB_tmp = (int32_T)muDoubleScalarFloor(b_Cz_tmp);
            if (b_Cz_tmp != A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &x_emlrtDCI, (emlrtConstCTX)sp);
            }
            b = ((b_Cz_tmp < 1.0) || (b_Cz_tmp > 30.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_Cz_tmp, 1, 30,
                                            &o_emlrtBCI, (emlrtConstCTX)sp);
            }
            b_A_I_BB_tmp = (int32_T)b_Cz_tmp;
            Cz_tmp_tmp = 3 * (b_A_I_BB_tmp - 1);
            A_I_BB[3 * i1] = SV->AA[Cz_tmp_tmp];
            if (b_A_I_BB_tmp != A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &x_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(b_A_I_BB_tmp, 1, 30, &o_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_BB[3 * i1 + 1] = SV->AA[Cz_tmp_tmp + 1];
            if (b_A_I_BB_tmp != A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &x_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(b_A_I_BB_tmp, 1, 30, &o_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_BB[3 * i1 + 2] = SV->AA[Cz_tmp_tmp + 2];
          }
          if (LP->J_type[b_i] == 'R') {
            real_T d;
            if (LP->BB[b_i] != A_I_i_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &t_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            d = LP->module[b_LP - 1];
            if (d != (int32_T)muDoubleScalarFloor(d)) {
              emlrtIntegerCheckR2012b(d, &g_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)d < 1) || ((int32_T)d > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 10, &d_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (LP->BB[b_i] != A_I_i_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &v_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            if (d != (int32_T)muDoubleScalarFloor(d)) {
              emlrtIntegerCheckR2012b(d, &h_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)d < 1) || ((int32_T)d > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 10, &e_emlrtBCI,
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
            Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
            b_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
            /* %%EOF */
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &i_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            b_A_I_BB_tmp = (int32_T)LP->module[b_i];
            if ((b_A_I_BB_tmp < 1) || (b_A_I_BB_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(b_A_I_BB_tmp, 1, 10, &f_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (LP->BB[b_i] != A_I_i_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &f_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
            c_Cz_tmp[0] = b_Cz_tmp;
            c_Cz_tmp[3] = -Cz_tmp;
            c_Cz_tmp[6] = 0.0;
            c_Cz_tmp[1] = Cz_tmp;
            c_Cz_tmp[4] = b_Cz_tmp;
            c_Cz_tmp[7] = 0.0;
            for (i1 = 0; i1 < 3; i1++) {
              Cz_tmp_tmp = 3 * i1 + 9 * ((int32_T)d - 1);
              Cz_tmp = LP->Rd[Cz_tmp_tmp];
              r = _mm_loadu_pd(&A_I_BB[0]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
              _mm_storeu_pd(&b_A_I_BB[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_BB_tmp = 3 * i1 + 2;
              b_A_I_BB[A_I_BB_tmp] += A_I_BB[2] * Cz_tmp;
              Cz_tmp = LP->Rd[Cz_tmp_tmp + 1];
              r = _mm_loadu_pd(&A_I_BB[3]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
              _mm_storeu_pd(&b_A_I_BB[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              b_A_I_BB[A_I_BB_tmp] += A_I_BB[5] * Cz_tmp;
              Cz_tmp = LP->Rd[Cz_tmp_tmp + 2];
              r = _mm_loadu_pd(&A_I_BB[6]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
              _mm_storeu_pd(&b_A_I_BB[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              b_A_I_BB[A_I_BB_tmp] += A_I_BB[8] * Cz_tmp;
              c_Cz_tmp[A_I_BB_tmp] = iv[i1];
            }
            memset(&A_I_i[0], 0, 9U * sizeof(real_T));
            memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
            Cz_tmp_tmp = 3 * ((int32_T)d - 1);
            for (i1 = 0; i1 < 3; i1++) {
              Cz_tmp = c_Cz_tmp[3 * i1];
              r = _mm_loadu_pd(&b_A_I_BB[0]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i1]);
              _mm_storeu_pd(&A_I_i[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_BB_tmp = 3 * i1 + 2;
              A_I_i[A_I_BB_tmp] += b_A_I_BB[2] * Cz_tmp;
              Cz_tmp = c_Cz_tmp[3 * i1 + 1];
              r = _mm_loadu_pd(&b_A_I_BB[3]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i1]);
              _mm_storeu_pd(&A_I_i[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_i[A_I_BB_tmp] += b_A_I_BB[5] * Cz_tmp;
              Cz_tmp = c_Cz_tmp[A_I_BB_tmp];
              r = _mm_loadu_pd(&b_A_I_BB[6]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i1]);
              _mm_storeu_pd(&A_I_i[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_i[A_I_BB_tmp] += b_A_I_BB[8] * Cz_tmp;
              b_SV[i1] = SV->RR[i1 + 3 * (b_LP - 1)] +
                         ((A_I_BB[i1] * LP->Pd[Cz_tmp_tmp] +
                           A_I_BB[i1 + 3] * LP->Pd[Cz_tmp_tmp + 1]) +
                          A_I_BB[i1 + 6] * LP->Pd[Cz_tmp_tmp + 2]);
              Cz_tmp = LP->Pp[i1 + 3 * (b_A_I_BB_tmp - 1)];
              r = _mm_loadu_pd(&A_I_i[3 * i1]);
              r1 = _mm_loadu_pd(&c_A_I_BB[0]);
              _mm_storeu_pd(&c_A_I_BB[0],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              c_A_I_BB[2] += A_I_i[A_I_BB_tmp] * Cz_tmp;
            }
            r = _mm_loadu_pd(&b_SV[0]);
            r1 = _mm_loadu_pd(&c_A_I_BB[0]);
            _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
            SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
          } else if (LP->J_type[b_i] == 'L') {
            real_T d;
            if (LP->BB[b_i] != A_I_i_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &u_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            d = LP->module[b_LP - 1];
            if (d != (int32_T)muDoubleScalarFloor(d)) {
              emlrtIntegerCheckR2012b(d, &k_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)d < 1) || ((int32_T)d > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 10, &g_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (LP->BB[b_i] != A_I_i_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &w_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            if (d != (int32_T)muDoubleScalarFloor(d)) {
              emlrtIntegerCheckR2012b(d, &l_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)d < 1) || ((int32_T)d > 10)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 10, &h_emlrtBCI,
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
            Cz_tmp = muDoubleScalarSin(LP->align[b_i]);
            b_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
            /* %%EOF */
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &m_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            b_A_I_BB_tmp = (int32_T)LP->module[b_i];
            if ((b_A_I_BB_tmp < 1) || (b_A_I_BB_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(b_A_I_BB_tmp, 1, 10, &i_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (LP->BB[b_i] != A_I_i_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &j_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            memset(&b_A_I_BB[0], 0, 9U * sizeof(real_T));
            c_Cz_tmp[0] = b_Cz_tmp;
            c_Cz_tmp[3] = -Cz_tmp;
            c_Cz_tmp[6] = 0.0;
            c_Cz_tmp[1] = Cz_tmp;
            c_Cz_tmp[4] = b_Cz_tmp;
            c_Cz_tmp[7] = 0.0;
            for (i1 = 0; i1 < 3; i1++) {
              Cz_tmp_tmp = 3 * i1 + 9 * ((int32_T)d - 1);
              Cz_tmp = LP->Rd[Cz_tmp_tmp];
              r = _mm_loadu_pd(&A_I_BB[0]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
              _mm_storeu_pd(&b_A_I_BB[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_BB_tmp = 3 * i1 + 2;
              b_A_I_BB[A_I_BB_tmp] += A_I_BB[2] * Cz_tmp;
              Cz_tmp = LP->Rd[Cz_tmp_tmp + 1];
              r = _mm_loadu_pd(&A_I_BB[3]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
              _mm_storeu_pd(&b_A_I_BB[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              b_A_I_BB[A_I_BB_tmp] += A_I_BB[5] * Cz_tmp;
              Cz_tmp = LP->Rd[Cz_tmp_tmp + 2];
              r = _mm_loadu_pd(&A_I_BB[6]);
              r1 = _mm_loadu_pd(&b_A_I_BB[3 * i1]);
              _mm_storeu_pd(&b_A_I_BB[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              b_A_I_BB[A_I_BB_tmp] += A_I_BB[8] * Cz_tmp;
              c_Cz_tmp[A_I_BB_tmp] = iv[i1];
            }
            memset(&A_I_i[0], 0, 9U * sizeof(real_T));
            memset(&c_A_I_BB[0], 0, 3U * sizeof(real_T));
            Cz_tmp_tmp = 3 * ((int32_T)d - 1);
            for (i1 = 0; i1 < 3; i1++) {
              Cz_tmp = c_Cz_tmp[3 * i1];
              r = _mm_loadu_pd(&b_A_I_BB[0]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i1]);
              _mm_storeu_pd(&A_I_i[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_BB_tmp = 3 * i1 + 2;
              A_I_i[A_I_BB_tmp] += b_A_I_BB[2] * Cz_tmp;
              Cz_tmp = c_Cz_tmp[3 * i1 + 1];
              r = _mm_loadu_pd(&b_A_I_BB[3]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i1]);
              _mm_storeu_pd(&A_I_i[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_i[A_I_BB_tmp] += b_A_I_BB[5] * Cz_tmp;
              Cz_tmp = c_Cz_tmp[A_I_BB_tmp];
              r = _mm_loadu_pd(&b_A_I_BB[6]);
              r1 = _mm_loadu_pd(&A_I_i[3 * i1]);
              _mm_storeu_pd(&A_I_i[3 * i1],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              A_I_i[A_I_BB_tmp] += b_A_I_BB[8] * Cz_tmp;
              b_SV[i1] = SV->RR[i1 + 3 * (b_LP - 1)] +
                         ((A_I_BB[i1] * LP->Pd[Cz_tmp_tmp] +
                           A_I_BB[i1 + 3] * LP->Pd[Cz_tmp_tmp + 1]) +
                          A_I_BB[i1 + 6] * LP->Pd[Cz_tmp_tmp + 2]);
              Cz_tmp = LP->T_L[(i1 + ((b_A_I_BB_tmp - 1) << 4)) + 12];
              r = _mm_loadu_pd(&A_I_i[3 * i1]);
              r1 = _mm_loadu_pd(&c_A_I_BB[0]);
              _mm_storeu_pd(&c_A_I_BB[0],
                            _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
              c_A_I_BB[2] += A_I_i[A_I_BB_tmp] * Cz_tmp;
            }
            r = _mm_loadu_pd(&b_SV[0]);
            r1 = _mm_loadu_pd(&c_A_I_BB[0]);
            _mm_storeu_pd(&SV->RR[3 * b_i], _mm_add_pd(r, r1));
            SV->RR[3 * b_i + 2] = b_SV[2] + c_A_I_BB[2];
          }
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1 && (LP->BB[b_i] != 0.0)) {
        b_A_I_BB_tmp = (int32_T)muDoubleScalarFloor(LP->BB[b_i]);
        if (LP->BB[b_i] != b_A_I_BB_tmp) {
          emlrtIntegerCheckR2012b(LP->BB[b_i], &s_emlrtDCI, (emlrtConstCTX)sp);
        }
        b_LP = (int32_T)LP->BB[b_i];
        if ((b_LP < 1) || (b_LP > 10)) {
          emlrtDynamicBoundsCheckR2012b(b_LP, 1, 10, &n_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (LP->J_type[b_LP - 1] == 'L') {
          Cz_tmp = LP->BB[b_i] * 3.0;
          if (!(Cz_tmp == Cz_tmp)) {
            emlrtErrorWithMessageIdR2018a(
                sp, &c_emlrtRTEI,
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                "EMLRT:runTime:RepeatedExprWithDifferentResultsInColonIndexing",
                0);
          }
          for (i1 = 0; i1 < 3; i1++) {
            b_Cz_tmp = (Cz_tmp - 2.0) + (real_T)i1;
            A_I_BB_tmp = (int32_T)muDoubleScalarFloor(b_Cz_tmp);
            if (b_Cz_tmp != A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &y_emlrtDCI, (emlrtConstCTX)sp);
            }
            b = ((b_Cz_tmp < 1.0) || (b_Cz_tmp > 30.0));
            if (b) {
              emlrtDynamicBoundsCheckR2012b((int32_T)b_Cz_tmp, 1, 30,
                                            &p_emlrtBCI, (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (int32_T)b_Cz_tmp;
            A_I_i_tmp = 3 * (Cz_tmp_tmp - 1);
            A_I_i[3 * i1] = SV->AA[A_I_i_tmp];
            if (Cz_tmp_tmp != A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &y_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 30, &p_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_i[3 * i1 + 1] = SV->AA[A_I_i_tmp + 1];
            if (Cz_tmp_tmp != A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(b_Cz_tmp, &y_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (b) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 30, &p_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            A_I_i[3 * i1 + 2] = SV->AA[A_I_i_tmp + 2];
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
          b_Cz_tmp = muDoubleScalarCos(LP->align[b_i]);
          /* %%EOF */
          c_Cz_tmp[0] = b_Cz_tmp;
          c_Cz_tmp[3] = -Cz_tmp;
          c_Cz_tmp[6] = 0.0;
          c_Cz_tmp[1] = Cz_tmp;
          c_Cz_tmp[4] = b_Cz_tmp;
          c_Cz_tmp[7] = 0.0;
          memset(&A_I_BB[0], 0, 9U * sizeof(real_T));
          for (i1 = 0; i1 < 3; i1++) {
            Cz_tmp_tmp = 3 * i1 + 2;
            A_I_BB_tmp = iv[i1];
            c_Cz_tmp[Cz_tmp_tmp] = A_I_BB_tmp;
            Cz_tmp = c_Cz_tmp[3 * i1];
            r = _mm_loadu_pd(&A_I_i[0]);
            r1 = _mm_loadu_pd(&A_I_BB[3 * i1]);
            _mm_storeu_pd(&A_I_BB[3 * i1],
                          _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
            A_I_BB[Cz_tmp_tmp] += A_I_i[2] * Cz_tmp;
            Cz_tmp = c_Cz_tmp[3 * i1 + 1];
            r = _mm_loadu_pd(&A_I_i[3]);
            r1 = _mm_loadu_pd(&A_I_BB[3 * i1]);
            _mm_storeu_pd(&A_I_BB[3 * i1],
                          _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(Cz_tmp))));
            A_I_BB[Cz_tmp_tmp] += A_I_i[5] * Cz_tmp;
            r = _mm_loadu_pd(&A_I_i[6]);
            r1 = _mm_loadu_pd(&A_I_BB[3 * i1]);
            _mm_storeu_pd(
                &A_I_BB[3 * i1],
                _mm_add_pd(r1, _mm_mul_pd(r, _mm_set1_pd(A_I_BB_tmp))));
            A_I_BB[Cz_tmp_tmp] += A_I_i[8] * (real_T)A_I_BB_tmp;
          }
          if (LP->J_type[b_i] == 'R') {
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &o_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (int32_T)LP->module[b_i];
            if ((Cz_tmp_tmp < 1) || (Cz_tmp_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 10, &j_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (LP->BB[b_i] != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &n_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = 3 * (Cz_tmp_tmp - 1);
            r = _mm_loadu_pd(&A_I_BB[0]);
            r1 = _mm_mul_pd(r, _mm_set1_pd(LP->Pp[Cz_tmp_tmp]));
            r = _mm_loadu_pd(&A_I_BB[3]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP->Pp[Cz_tmp_tmp + 1]));
            r1 = _mm_add_pd(r1, r);
            r = _mm_loadu_pd(&A_I_BB[6]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP->Pp[Cz_tmp_tmp + 2]));
            r = _mm_add_pd(r1, r);
            r1 = _mm_loadu_pd(&SV->RR[3 * (b_LP - 1)]);
            r = _mm_add_pd(r1, r);
            _mm_storeu_pd(&b_SV[0], r);
            b_SV[2] = SV->RR[2 + 3 * (b_LP - 1)] +
                      ((A_I_BB[2] * LP->Pp[Cz_tmp_tmp] +
                        A_I_BB[5] * LP->Pp[Cz_tmp_tmp + 1]) +
                       A_I_BB[8] * LP->Pp[Cz_tmp_tmp + 2]);
            SV->RR[3 * b_i] = b_SV[0];
            SV->RR[3 * b_i + 1] = b_SV[1];
            SV->RR[3 * b_i + 2] = b_SV[2];
          } else if (LP->J_type[b_i] == 'L') {
            if (LP->module[b_i] !=
                (int32_T)muDoubleScalarFloor(LP->module[b_i])) {
              emlrtIntegerCheckR2012b(LP->module[b_i], &q_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (int32_T)LP->module[b_i];
            if ((Cz_tmp_tmp < 1) || (Cz_tmp_tmp > 10)) {
              emlrtDynamicBoundsCheckR2012b(Cz_tmp_tmp, 1, 10, &k_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            if (LP->BB[b_i] != b_A_I_BB_tmp) {
              emlrtIntegerCheckR2012b(LP->BB[b_i], &p_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            Cz_tmp_tmp = (Cz_tmp_tmp - 1) << 4;
            r = _mm_loadu_pd(&A_I_BB[0]);
            r1 = _mm_mul_pd(r, _mm_set1_pd(LP->T_L[Cz_tmp_tmp + 12]));
            r = _mm_loadu_pd(&A_I_BB[3]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP->T_L[Cz_tmp_tmp + 13]));
            r1 = _mm_add_pd(r1, r);
            r = _mm_loadu_pd(&A_I_BB[6]);
            r = _mm_mul_pd(r, _mm_set1_pd(LP->T_L[Cz_tmp_tmp + 14]));
            r = _mm_add_pd(r1, r);
            r1 = _mm_loadu_pd(&SV->RR[3 * (b_LP - 1)]);
            r = _mm_add_pd(r1, r);
            _mm_storeu_pd(&b_SV[0], r);
            b_SV[2] = SV->RR[2 + 3 * (b_LP - 1)] +
                      ((A_I_BB[2] * LP->T_L[Cz_tmp_tmp + 12] +
                        A_I_BB[5] * LP->T_L[Cz_tmp_tmp + 13]) +
                       A_I_BB[8] * LP->T_L[Cz_tmp_tmp + 14]);
            SV->RR[3 * b_i] = b_SV[0];
            SV->RR[3 * b_i + 1] = b_SV[1];
            SV->RR[3 * b_i + 2] = b_SV[2];
          }
        }
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

/* End of code generation (calc_pos_0318.c) */
