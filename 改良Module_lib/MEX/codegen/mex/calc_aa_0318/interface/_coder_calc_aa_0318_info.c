/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_calc_aa_0318_info.c
 *
 * Code generation for function 'calc_aa_0318'
 *
 */

/* Include files */
#include "_coder_calc_aa_0318_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ce555dd6ed33014fe8a06e26240b9804bc40b80da86742d1748136263934a81961f41"
      "51e6baae1a489a2d49bb7597bc008f008f818490780424ee100fc3d7"
      "fcf42752948a4a99266cd9c7e77c27fe6c9f131b85bd4601c05584e5c76628af447a3192"
      "17b05c927821e1575876c7456c2c7d17e39f22299da1af4efc50190a",
      "5bcdbeec39b6391443bf3d39547095e75863d50b90be69a9b669abd6a2f264aad93b0bd0"
      "4c9942d3f1c381921f5a231beec09bafd05a5466e77190b2df8d8cf3"
      "4896e47924fd62bec37fe48be7dfcce08b71292c69086194b4726d91ff604dfe4ba9fc21"
      "e2f9ee48fa73be9f6bf2d552f8ae47323ecfb7788477d8c17d74b00d",
      "171203981843e1369e1b72d041091a2ab887f7f0e95357cec7061cf43082452f83bd892e"
      "42bf32793b9c43d02a8909566386dc859d799ed756dc5f52cefd2f07"
      "b2faed4f00e5c5f7a678eb7b9e7c71392bbe9394f956cdcf9b297cc504ae3f33e5ebee58"
      "df57a5fe7163fba4dfd49adeee7c1d4f3378b2d681143daff9ffd7ff",
      "7cd5fda5bd9bc50891a7a19ed73ddd73465d4bcdf9be14d6e3fb9cc217c7ef410464c7cf"
      "63ac05ed8a319b60c8788c194f975131189512c735dca1acb249e8d4"
      "faf42fb1dfa2aed12e18df7e50ab4475dab76811cc89a9a5c7914ebd4eef1a5b97f60ace"
      "8ef72567ef30d304ef2283ec2eabc366307f1557e507197a1a64637e",
      "f7e4afaff9be3b8f7fefe979f2c5e5bcbe3b3752f88a09bcebb5f7cbb55795e3ba56d15a"
      "83e6e4c5d1ee11ceffbbf31781dcb58e",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3288U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *epFieldName[7] = {
      "QualifiedName",    "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "ResolvedFilePath", "TimeStamp",      "Visible"};
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum", "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "AuxData"};
  uint8_T v[216] = {
      0U,   1U,   73U,  77U,  0U,   0U,   0U,   0U,   14U,  0U,   0U,   0U,
      200U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,
      2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   4U,   0U,
      17U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,   17U,  0U,   0U,   0U,
      67U,  108U, 97U,  115U, 115U, 69U,  110U, 116U, 114U, 121U, 80U,  111U,
      105U, 110U, 116U, 115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      14U,  0U,   0U,   0U,   112U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      0U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   4U,   0U,   14U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,
      56U,  0U,   0U,   0U,   81U,  117U, 97U,  108U, 105U, 102U, 105U, 101U,
      100U, 78U,  97U,  109U, 101U, 0U,   77U,  101U, 116U, 104U, 111U, 100U,
      115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   80U,  114U, 111U, 112U,
      101U, 114U, 116U, 105U, 101U, 115U, 0U,   0U,   0U,   0U,   72U,  97U,
      110U, 100U, 108U, 101U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 2);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("calc_aa_0318"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString("F:\\Archive "
                          "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8"
                          "\x89\xafModule_lib\\0318\\calc_aa_0318.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740065.44060185191));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("25.2.0.3042426 (R2025b) Update 1"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("iuQA21Bi7deVjdSXbciL9"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_calc_aa_0318_info.c) */
