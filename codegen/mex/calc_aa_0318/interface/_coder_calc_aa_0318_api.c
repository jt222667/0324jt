/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_calc_aa_0318_api.c
 *
 * Code generation for function '_coder_calc_aa_0318_api'
 *
 */

/* Include files */
#include "_coder_calc_aa_0318_api.h"
#include "calc_aa_0318.h"
#include "calc_aa_0318_data.h"
#include "calc_aa_0318_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[3]);

static void ac_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[6]);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct0_T *y);

static const mxArray *b_emlrt_marshallOut(const real_T u[9]);

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[6]);

static void bc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[2]);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[9]);

static const mxArray *c_emlrt_marshallOut(const real_T u[27]);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                cell_wrap_1 y[2]);

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                cell_wrap_2 y[2]);

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[90]);

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                real_T y[2]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, struct0_T *y);

static const mxArray *emlrt_marshallOut(const struct2_T *u);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[30]);

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9]);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[27]);

static real_T gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[9]);

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[90]);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[160]);

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[30]);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[32]);

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[27]);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[9]);

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9]);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[20]);

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[160]);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[81]);

static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[32]);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[27]);

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[9]);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[243]);

static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[20]);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[81]);

static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[81]);

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[11]);

static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[27]);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[3]);

static void rb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[243]);

static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[81]);

static struct1_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                char_T ret[11]);

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct2_T *y);

static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[3]);

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               struct2_T *y);

static boolean_T vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[3]);

static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[3]);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[9]);

static void xb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9]);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, cell_0 *y);

static void yb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[3]);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId, real_T y[3])
{
  yb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ac_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[6])
{
  static const int32_T dims[2] = {1, 6};
  real_T(*r)[6];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[6])emlrtMxGetData(src);
  for (i = 0; i < 6; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[43] = {"module",
                                         "num_q",
                                         "install",
                                         "align",
                                         "BB",
                                         "Rp",
                                         "Rd",
                                         "Pp",
                                         "Pd",
                                         "RBcp",
                                         "PBcp",
                                         "T_L",
                                         "T_B",
                                         "J_type",
                                         "R_idx",
                                         "num_joint",
                                         "S0",
                                         "SN",
                                         "SE",
                                         "SS",
                                         "Qe",
                                         "cc",
                                         "c0",
                                         "ce",
                                         "m0",
                                         "m",
                                         "mass",
                                         "inertia",
                                         "inertia0",
                                         "acc_metric_mode",
                                         "acc_agg_mode",
                                         "acc_use_numeric_W",
                                         "err_std_theta",
                                         "err_std_d",
                                         "err_std_a",
                                         "err_std_alpha",
                                         "err_std_beta",
                                         "err_std_model",
                                         "acc_fd_eps_d",
                                         "acc_fd_eps_a",
                                         "acc_fd_eps_alpha",
                                         "acc_fd_eps_beta",
                                         "weight_cfg"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 43,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "module";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "module")),
      &thisId, y->module);
  thisId.fIdentifier = "num_q";
  y->num_q = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "num_q")),
      &thisId);
  thisId.fIdentifier = "install";
  c_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "install")),
      &thisId, y->install);
  thisId.fIdentifier = "align";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "align")),
      &thisId, y->align);
  thisId.fIdentifier = "BB";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "BB")),
      &thisId, y->BB);
  thisId.fIdentifier = "Rp";
  e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "Rp")),
      &thisId, y->Rp);
  thisId.fIdentifier = "Rd";
  e_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "Rd")),
      &thisId, y->Rd);
  thisId.fIdentifier = "Pp";
  f_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "Pp")),
      &thisId, y->Pp);
  thisId.fIdentifier = "Pd";
  f_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "Pd")),
      &thisId, y->Pd);
  thisId.fIdentifier = "RBcp";
  g_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "RBcp")),
      &thisId, y->RBcp);
  thisId.fIdentifier = "PBcp";
  h_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "PBcp")),
      &thisId, y->PBcp);
  thisId.fIdentifier = "T_L";
  i_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "T_L")),
      &thisId, y->T_L);
  thisId.fIdentifier = "T_B";
  j_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "T_B")),
      &thisId, y->T_B);
  thisId.fIdentifier = "J_type";
  k_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "J_type")),
      &thisId, y->J_type);
  thisId.fIdentifier = "R_idx";
  l_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "R_idx")),
      &thisId, y->R_idx);
  thisId.fIdentifier = "num_joint";
  y->num_joint = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "num_joint")),
      &thisId);
  thisId.fIdentifier = "S0";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 16, "S0")),
      &thisId, y->S0);
  thisId.fIdentifier = "SN";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "SN")),
      &thisId, y->SN);
  thisId.fIdentifier = "SE";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "SE")),
      &thisId, y->SE);
  thisId.fIdentifier = "SS";
  m_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 19, "SS")),
      &thisId, y->SS);
  thisId.fIdentifier = "Qe";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "Qe")),
      &thisId, y->Qe);
  thisId.fIdentifier = "cc";
  o_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21, "cc")),
      &thisId, y->cc);
  thisId.fIdentifier = "c0";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 22, "c0")),
      &thisId, y->c0);
  thisId.fIdentifier = "ce";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 23, "ce")),
      &thisId, y->ce);
  thisId.fIdentifier = "m0";
  c_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "m0")),
      &thisId, y->m0);
  thisId.fIdentifier = "m";
  y->m = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 25, "m")),
      &thisId);
  thisId.fIdentifier = "mass";
  y->mass = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 26, "mass")),
      &thisId);
  thisId.fIdentifier = "inertia";
  p_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 27, "inertia")),
      &thisId, y->inertia);
  thisId.fIdentifier = "inertia0";
  h_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 28, "inertia0")),
      &thisId, y->inertia0);
  thisId.fIdentifier = "acc_metric_mode";
  q_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 29,
                                                    "acc_metric_mode")),
                     &thisId, y->acc_metric_mode);
  thisId.fIdentifier = "acc_agg_mode";
  r_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 30,
                                                    "acc_agg_mode")),
                     &thisId, y->acc_agg_mode);
  thisId.fIdentifier = "acc_use_numeric_W";
  y->acc_use_numeric_W =
      s_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtConstCTX)sp, u, 0, 31, "acc_use_numeric_W")),
                         &thisId);
  thisId.fIdentifier = "err_std_theta";
  y->err_std_theta =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        32, "err_std_theta")),
                         &thisId);
  thisId.fIdentifier = "err_std_d";
  y->err_std_d = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 33, "err_std_d")),
      &thisId);
  thisId.fIdentifier = "err_std_a";
  y->err_std_a = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 34, "err_std_a")),
      &thisId);
  thisId.fIdentifier = "err_std_alpha";
  y->err_std_alpha =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        35, "err_std_alpha")),
                         &thisId);
  thisId.fIdentifier = "err_std_beta";
  y->err_std_beta =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        36, "err_std_beta")),
                         &thisId);
  thisId.fIdentifier = "err_std_model";
  y->err_std_model =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        37, "err_std_model")),
                         &thisId);
  thisId.fIdentifier = "acc_fd_eps_d";
  y->acc_fd_eps_d =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        38, "acc_fd_eps_d")),
                         &thisId);
  thisId.fIdentifier = "acc_fd_eps_a";
  y->acc_fd_eps_a =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        39, "acc_fd_eps_a")),
                         &thisId);
  thisId.fIdentifier = "acc_fd_eps_alpha";
  y->acc_fd_eps_alpha =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b(
                             (emlrtConstCTX)sp, u, 0, 40, "acc_fd_eps_alpha")),
                         &thisId);
  thisId.fIdentifier = "acc_fd_eps_beta";
  y->acc_fd_eps_beta =
      d_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        41, "acc_fd_eps_beta")),
                         &thisId);
  thisId.fIdentifier = "weight_cfg";
  y->weight_cfg =
      t_emlrt_marshallIn(sp,
                         emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                        42, "weight_cfg")),
                         &thisId);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u[9])
{
  static const int32_T iv[2] = {3, 3};
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 3; b_i++) {
    pData[i] = u[3 * b_i];
    pData[i + 1] = u[3 * b_i + 1];
    pData[i + 2] = u[3 * b_i + 2];
    i += 3;
  }
  emlrtAssign(&y, m);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId, real_T y[6])
{
  ac_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void bc_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[2] = {1, 2};
  real_T(*r)[2];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[2])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[9])
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[27])
{
  static const int32_T iv[2] = {3, 9};
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < 9; b_i++) {
    pData[i] = u[3 * b_i];
    pData[i + 1] = u[3 * b_i + 1];
    pData[i + 2] = u[3 * b_i + 2];
    i += 3;
  }
  emlrtAssign(&y, m);
  return y;
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                cell_wrap_1 y[2])
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  char_T str[11];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  bv[0] = false;
  iv[0] = 1;
  bv[1] = false;
  iv[1] = 2;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  emlrtMexSnprintf(&str[0], (size_t)11U, "%d", 1);
  thisId.fIdentifier = &str[0];
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                     &thisId, y[0].f1);
  emlrtMexSnprintf(&str[0], (size_t)11U, "%d", 2);
  thisId.fIdentifier = &str[0];
  w_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 1)),
                     &thisId, y[1].f1);
  emlrtDestroyArray(&u);
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId,
                                cell_wrap_2 y[2])
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  char_T str[11];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  bv[0] = false;
  iv[0] = 1;
  bv[1] = false;
  iv[1] = 2;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  emlrtMexSnprintf(&str[0], (size_t)11U, "%d", 1);
  thisId.fIdentifier = &str[0];
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                     &thisId, y[0].f1);
  emlrtMexSnprintf(&str[0], (size_t)11U, "%d", 2);
  thisId.fIdentifier = &str[0];
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 1)),
                     &thisId, y[1].f1);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[90])
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                const emlrtMsgIdentifier *parentId, real_T y[2])
{
  bc_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                             const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static const mxArray *emlrt_marshallOut(const struct2_T *u)
{
  static const int32_T iv[2] = {3, 27};
  static const int32_T iv2[2] = {1, 3};
  static const int32_T iv3[2] = {1, 6};
  static const int32_T iv4[2] = {1, 2};
  static const int32_T i = 3;
  static const int32_T i1 = 3;
  static const int32_T i10 = 3;
  static const int32_T i11 = 3;
  static const int32_T i12 = 9;
  static const int32_T i13 = 3;
  static const int32_T i3 = 3;
  static const int32_T i4 = 3;
  static const int32_T i5 = 3;
  static const int32_T i6 = 3;
  static const int32_T i7 = 9;
  static const int32_T i8 = 9;
  static const int32_T i9 = 9;
  static const char_T *sv[26] = {"R0",    "Q0",
                                 "A0",    "AA",
                                 "RR",    "v0",
                                 "w0",    "vd0",
                                 "wd0",   "q",
                                 "qd",    "qdd",
                                 "vv",    "ww",
                                 "vd",    "wd",
                                 "F0",    "T0",
                                 "Fe",    "Te",
                                 "tau",   "m",
                                 "Path",  "POS_e",
                                 "ORI_e", "singleArm_joints"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *u_y;
  const mxArray *v_y;
  const mxArray *y;
  real_T *pData;
  int32_T iv1[2];
  int32_T b_i;
  int32_T i2;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 26, (const char_T **)&sv[0]));
  b_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->R0[0];
  pData[1] = u->R0[1];
  pData[2] = u->R0[2];
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "R0", b_y, 0);
  c_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i1, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->Q0[0];
  pData[1] = u->Q0[1];
  pData[2] = u->Q0[2];
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "Q0", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "A0", b_emlrt_marshallOut(u->A0), 2);
  d_y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i2 = 0;
  for (b_i = 0; b_i < 27; b_i++) {
    pData[i2] = u->AA[3 * b_i];
    pData[i2 + 1] = u->AA[3 * b_i + 1];
    pData[i2 + 2] = u->AA[3 * b_i + 2];
    i2 += 3;
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "AA", d_y, 3);
  emlrtSetFieldR2017b(y, 0, "RR", c_emlrt_marshallOut(u->RR), 4);
  e_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i3, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->v0[0];
  pData[1] = u->v0[1];
  pData[2] = u->v0[2];
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "v0", e_y, 5);
  f_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i4, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->w0[0];
  pData[1] = u->w0[1];
  pData[2] = u->w0[2];
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "w0", f_y, 6);
  g_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i5, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->vd0[0];
  pData[1] = u->vd0[1];
  pData[2] = u->vd0[2];
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "vd0", g_y, 7);
  h_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i6, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->wd0[0];
  pData[1] = u->wd0[1];
  pData[2] = u->wd0[2];
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "wd0", h_y, 8);
  i_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i7, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (b_i = 0; b_i < 9; b_i++) {
    pData[b_i] = u->q[b_i];
  }
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "q", i_y, 9);
  j_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i8, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (b_i = 0; b_i < 9; b_i++) {
    pData[b_i] = u->qd[b_i];
  }
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "qd", j_y, 10);
  k_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i9, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (b_i = 0; b_i < 9; b_i++) {
    pData[b_i] = u->qdd[b_i];
  }
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, "qdd", k_y, 11);
  emlrtSetFieldR2017b(y, 0, "vv", c_emlrt_marshallOut(u->vv), 12);
  emlrtSetFieldR2017b(y, 0, "ww", c_emlrt_marshallOut(u->ww), 13);
  emlrtSetFieldR2017b(y, 0, "vd", c_emlrt_marshallOut(u->vd), 14);
  emlrtSetFieldR2017b(y, 0, "wd", c_emlrt_marshallOut(u->wd), 15);
  l_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i10, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->F0[0];
  pData[1] = u->F0[1];
  pData[2] = u->F0[2];
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(y, 0, "F0", l_y, 16);
  m_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i11, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->T0[0];
  pData[1] = u->T0[1];
  pData[2] = u->T0[2];
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(y, 0, "T0", m_y, 17);
  emlrtSetFieldR2017b(y, 0, "Fe", c_emlrt_marshallOut(u->Fe), 18);
  emlrtSetFieldR2017b(y, 0, "Te", c_emlrt_marshallOut(u->Te), 19);
  n_y = NULL;
  m = emlrtCreateNumericArray(1, (const void *)&i12, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (b_i = 0; b_i < 9; b_i++) {
    pData[b_i] = u->tau[b_i];
  }
  emlrtAssign(&n_y, m);
  emlrtSetFieldR2017b(y, 0, "tau", n_y, 20);
  o_y = NULL;
  m = emlrtCreateDoubleScalar(u->m);
  emlrtAssign(&o_y, m);
  emlrtSetFieldR2017b(y, 0, "m", o_y, 21);
  p_y = NULL;
  iv1[0] = 1;
  iv1[1] = 2;
  emlrtAssign(&p_y, emlrtCreateCellArrayR2014a(2, &iv1[0]));
  q_y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv2[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->Path.f1[0];
  pData[1] = u->Path.f1[1];
  pData[2] = u->Path.f1[2];
  emlrtAssign(&q_y, m);
  emlrtSetCell(p_y, 0, q_y);
  r_y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv3[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  for (b_i = 0; b_i < 6; b_i++) {
    pData[b_i] = u->Path.f2[b_i];
  }
  emlrtAssign(&r_y, m);
  emlrtSetCell(p_y, 1, r_y);
  emlrtSetFieldR2017b(y, 0, "Path", p_y, 22);
  s_y = NULL;
  iv1[0] = 1;
  iv1[1] = 2;
  emlrtAssign(&s_y, emlrtCreateCellArrayR2014a(2, &iv1[0]));
  for (b_i = 0; b_i < 2; b_i++) {
    t_y = NULL;
    m = emlrtCreateNumericArray(1, (const void *)&i13, mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m);
    pData[0] = u->POS_e[b_i].f1[0];
    pData[1] = u->POS_e[b_i].f1[1];
    pData[2] = u->POS_e[b_i].f1[2];
    emlrtAssign(&t_y, m);
    emlrtSetCell(s_y, b_i, t_y);
  }
  emlrtSetFieldR2017b(y, 0, "POS_e", s_y, 23);
  u_y = NULL;
  emlrtAssign(&u_y, emlrtCreateCellArrayR2014a(2, &iv1[0]));
  emlrtSetCell(u_y, 0, b_emlrt_marshallOut(u->ORI_e[0].f1));
  emlrtSetCell(u_y, 1, b_emlrt_marshallOut(u->ORI_e[1].f1));
  emlrtSetFieldR2017b(y, 0, "ORI_e", u_y, 24);
  v_y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv4[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->singleArm_joints[0];
  pData[1] = u->singleArm_joints[1];
  emlrtAssign(&v_y, m);
  emlrtSetFieldR2017b(y, 0, "singleArm_joints", v_y, 25);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[30])
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims[2] = {1, 9};
  real_T(*r)[9];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[9])emlrtMxGetData(src);
  for (i = 0; i < 9; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[27])
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 0U,
                          (const void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[9])
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[90])
{
  static const int32_T dims[3] = {3, 3, 10};
  real_T(*r)[90];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[90])emlrtMxGetData(src);
  for (i = 0; i < 90; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[160])
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[30])
{
  static const int32_T dims[2] = {3, 10};
  real_T(*r)[30];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[30])emlrtMxGetData(src);
  for (i = 0; i < 30; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[32])
{
  mb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[27])
{
  static const int32_T dims[3] = {3, 3, 3};
  real_T(*r)[27];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[27])emlrtMxGetData(src);
  for (i = 0; i < 27; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[9])
{
  nb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims[2] = {3, 3};
  real_T(*r)[9];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[9])emlrtMxGetData(src);
  for (i = 0; i < 9; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[20])
{
  ob_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[160])
{
  static const int32_T dims[3] = {4, 4, 10};
  real_T(*r)[160];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[160])emlrtMxGetData(src);
  for (i = 0; i < 160; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[81])
{
  pb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void mb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[32])
{
  static const int32_T dims[3] = {4, 4, 2};
  real_T(*r)[32];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[32])emlrtMxGetData(src);
  for (i = 0; i < 32; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[27])
{
  qb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void nb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[9])
{
  static const int32_T dims[2] = {1, 9};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 9);
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y[243])
{
  rb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ob_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[20])
{
  static const int32_T dims[2] = {1, 20};
  real_T(*r)[20];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[20])emlrtMxGetData(src);
  for (i = 0; i < 20; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[81])
{
  sb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void pb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[81])
{
  static const int32_T dims[2] = {9, 9};
  real_T(*r)[81];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[81])emlrtMxGetData(src);
  for (i = 0; i < 81; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[11])
{
  tb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void qb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[27])
{
  static const int32_T dims[2] = {3, 9};
  real_T(*r)[27];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[27])emlrtMxGetData(src);
  for (i = 0; i < 27; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[3])
{
  ub_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void rb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T ret[243])
{
  static const int32_T dims[3] = {3, 9, 9};
  real_T(*r)[243];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 3U,
                          (const void *)&dims[0]);
  r = (real_T(*)[243])emlrtMxGetData(src);
  for (i = 0; i < 243; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static boolean_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = vb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void sb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[81])
{
  static const int32_T dims[2] = {3, 27};
  real_T(*r)[81];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[81])emlrtMxGetData(src);
  for (i = 0; i < 81; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static struct1_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[8] = {"sig_ref", "lambda_sig", "p_sig",
                                        "eps_w",   "w_ref",      "lambda_w",
                                        "p_w",     "w_mode"};
  emlrtMsgIdentifier thisId;
  struct1_T y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 8,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "sig_ref";
  y.sig_ref = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "sig_ref")),
      &thisId);
  thisId.fIdentifier = "lambda_sig";
  y.lambda_sig = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "lambda_sig")),
      &thisId);
  thisId.fIdentifier = "p_sig";
  y.p_sig = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "p_sig")),
      &thisId);
  thisId.fIdentifier = "eps_w";
  y.eps_w = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "eps_w")),
      &thisId);
  thisId.fIdentifier = "w_ref";
  y.w_ref = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "w_ref")),
      &thisId);
  thisId.fIdentifier = "lambda_w";
  y.lambda_w = d_emlrt_marshallIn(
      sp,
      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "lambda_w")),
      &thisId);
  thisId.fIdentifier = "p_w";
  y.p_w = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "p_w")),
      &thisId);
  thisId.fIdentifier = "w_mode";
  r_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "w_mode")),
      &thisId, y.w_mode);
  emlrtDestroyArray(&u);
  return y;
}

static void tb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[11])
{
  static const int32_T dims[2] = {1, 11};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 11);
  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nullptr,
                               const char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  v_emlrt_marshallIn(sp, emlrtAlias(nullptr), &thisId, y);
  emlrtDestroyArray(&nullptr);
}

static void ub_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[3])
{
  static const int32_T dims[2] = {1, 3};
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "char", false, 2U,
                          (const void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtConstCTX)sp, src, &ret[0], 3);
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, struct2_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[26] = {"R0",    "Q0",
                                         "A0",    "AA",
                                         "RR",    "v0",
                                         "w0",    "vd0",
                                         "wd0",   "q",
                                         "qd",    "qdd",
                                         "vv",    "ww",
                                         "vd",    "wd",
                                         "F0",    "T0",
                                         "Fe",    "Te",
                                         "tau",   "m",
                                         "Path",  "POS_e",
                                         "ORI_e", "singleArm_joints"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtConstCTX)sp, parentId, u, 26,
                         (const char_T **)&fieldNames[0], 0U,
                         (const void *)&dims);
  thisId.fIdentifier = "R0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 0, "R0")),
      &thisId, y->R0);
  thisId.fIdentifier = "Q0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 1, "Q0")),
      &thisId, y->Q0);
  thisId.fIdentifier = "A0";
  h_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 2, "A0")),
      &thisId, y->A0);
  thisId.fIdentifier = "AA";
  p_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 3, "AA")),
      &thisId, y->AA);
  thisId.fIdentifier = "RR";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 4, "RR")),
      &thisId, y->RR);
  thisId.fIdentifier = "v0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 5, "v0")),
      &thisId, y->v0);
  thisId.fIdentifier = "w0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 6, "w0")),
      &thisId, y->w0);
  thisId.fIdentifier = "vd0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 7, "vd0")),
      &thisId, y->vd0);
  thisId.fIdentifier = "wd0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 8, "wd0")),
      &thisId, y->wd0);
  thisId.fIdentifier = "q";
  x_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 9, "q")),
      &thisId, y->q);
  thisId.fIdentifier = "qd";
  x_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 10, "qd")),
      &thisId, y->qd);
  thisId.fIdentifier = "qdd";
  x_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 11, "qdd")),
      &thisId, y->qdd);
  thisId.fIdentifier = "vv";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 12, "vv")),
      &thisId, y->vv);
  thisId.fIdentifier = "ww";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 13, "ww")),
      &thisId, y->ww);
  thisId.fIdentifier = "vd";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 14, "vd")),
      &thisId, y->vd);
  thisId.fIdentifier = "wd";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 15, "wd")),
      &thisId, y->wd);
  thisId.fIdentifier = "F0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 16, "F0")),
      &thisId, y->F0);
  thisId.fIdentifier = "T0";
  w_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 17, "T0")),
      &thisId, y->T0);
  thisId.fIdentifier = "Fe";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 18, "Fe")),
      &thisId, y->Fe);
  thisId.fIdentifier = "Te";
  n_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 19, "Te")),
      &thisId, y->Te);
  thisId.fIdentifier = "tau";
  x_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 20, "tau")),
      &thisId, y->tau);
  thisId.fIdentifier = "m";
  y->m = d_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 21, "m")),
      &thisId);
  thisId.fIdentifier = "Path";
  y_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 22, "Path")),
      &thisId, &y->Path);
  thisId.fIdentifier = "POS_e";
  cb_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 23, "POS_e")),
      &thisId, y->POS_e);
  thisId.fIdentifier = "ORI_e";
  db_emlrt_marshallIn(
      sp, emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0, 24, "ORI_e")),
      &thisId, y->ORI_e);
  thisId.fIdentifier = "singleArm_joints";
  eb_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetFieldR2017b((emlrtConstCTX)sp, u, 0,
                                                     25, "singleArm_joints")),
                      &thisId, y->singleArm_joints);
  emlrtDestroyArray(&u);
}

static boolean_T vb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "logical", false, 0U,
                          (const void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[3])
{
  wb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void wb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims = 3;
  real_T(*r)[3];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[3])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, real_T y[9])
{
  xb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void xb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[9])
{
  static const int32_T dims = 9;
  real_T(*r)[9];
  int32_T i;
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 1U,
                          (const void *)&dims);
  r = (real_T(*)[9])emlrtMxGetData(src);
  for (i = 0; i < 9; i++) {
    ret[i] = (*r)[i];
  }
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, cell_0 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  bv[0] = false;
  iv[0] = 1;
  bv[1] = false;
  iv[1] = 2;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  thisId.fIdentifier = "1";
  ab_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                      &thisId, y->f1);
  thisId.fIdentifier = "2";
  bb_emlrt_marshallIn(sp,
                      emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 1)),
                      &thisId, y->f2);
  emlrtDestroyArray(&u);
}

static void yb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, real_T ret[3])
{
  static const int32_T dims[2] = {1, 3};
  real_T(*r)[3];
  emlrtCheckBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "double", false, 2U,
                          (const void *)&dims[0]);
  r = (real_T(*)[3])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  emlrtDestroyArray(&src);
}

void calc_aa_0318_api(const mxArray *const prhs[2], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  struct0_T LP;
  struct2_T SV;
  st.tls = emlrtRootTLSGlobal;
  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "LP", &LP);
  u_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "SV", &SV);
  /* Invoke the target function */
  calc_aa_0318(&st, &LP, &SV);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(&SV);
}

/* End of code generation (_coder_calc_aa_0318_api.c) */
