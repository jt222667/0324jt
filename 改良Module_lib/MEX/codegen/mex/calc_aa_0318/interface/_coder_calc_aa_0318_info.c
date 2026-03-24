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
      "789ced56cd6ed340189ca0823840090738225e0094c44d9a7240aa102dad140224fc0882"
      "5c7bbd562cecb8b59d34e9910b471e011e0309f114dc100fc3d8b5f3"
      "63c97244c0a512bbb27767e7db1d67bf89d728edb54a00d61197b8733586e5b8bd80c592"
      "e64ba9b8d262382e626d615ec27f8c5be10e02390e4ec14073e474a6",
      "e13ad6401b04ddc9a184277dd71e4923624ccb965dcb919d79f03844cece1c35052115f6"
      "1ff4a578d7193af0fafeec09ed7930dd8f838cdfbb96b31fe992de8f"
      "745ca277f89b7ac9fa5772f4125e68b650354dad28d5e6bcfec18afa9732f54f193ff086"
      "2298fbbda5d5f43e64e85d8fdbf598788387788b1ddc430fdbf020d0",
      "878511246ee3992afa3ddc61d5508741ce44030a2aec29d0396aa24964f032b1c5cb20af"
      "63834c2d6295a8368924dbf01e461bf85bab6e49f77d0b2efb43d81c"
      "5779b738b7c7080555cee95145e3a820a7b1aa53e62e1ce4e7fbda92fb9f6e67f197a3b6"
      "f1f5674415a5f7ba7ceb5b917a49392bbd71c67acbfe7f6e66e89553",
      "7cfda9255ee9a3fabeac98c7adedb1d956dafeeeec399ee4e8e43d07327051ebff7f0ffd"
      "9befa165f73febbba31c33e224cec31fd2cb3be70c77a8db72a6f779"
      "457f7dcad04bfc757f697ff9fcc6d0382e99b50906ccc88839f598179579a9b0dfa4572a"
      "f440e8903a91c9f8d01b9b91631a443a9119f9a8c9884dd6d0471bd1",
      "8811f94ca79304591139a986b3d37dc1d57bf49ac677a54a758fd5e5a52220f2790f3d7a"
      "52f0b9f8fd4bb1e7e2a31f7bf522f592725ecfc51b197ae514affbdd"
      "fd6af365ed784ba9299d7e7bf2fc68f708e7ff5cfc05b921e200",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3608U, &nameCaptureInfo);
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
  emlrtSetField(xEntryPoints, 0, "ResolvedFilePath",
                emlrtMxCreateString(
                    "F:\\Archive "
                    "\xe5\xbd\x92\xe6\xa1\xa3\\--"
                    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\--"
                    "a5dcf630c3baf80d0f9fd6b4a2af33382e32e0dd\\\xe6"
                    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_aa_0318.m"));
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
