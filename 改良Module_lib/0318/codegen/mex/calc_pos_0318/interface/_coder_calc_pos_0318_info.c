/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_calc_pos_0318_info.c
 *
 * Code generation for function 'calc_pos_0318'
 *
 */

/* Include files */
#include "_coder_calc_pos_0318_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
      "789ce555cd6ed34010fe8c0ae2c04f38c011f102a0c46952870352451b5aa41644420111"
      "649ccd46766bc7a9ed84a6475e803327780c24c43b2071418887e14b"
      "6ce7c792e58820571563ad6767bef17ebb3be35d28bb7b0a806b08e5fb95505f8dec42a4"
      "2f605192b892885316c371116b0bdfc5f887480bb717c89320347a86",
      "23a75f765cc7ea19bda039ea4b78d277eda1ec4c90ae65cba6e5c8c6bcb13fb69cfa1c34"
      "35c6d0b8ffd094e2a83170e099fe6c86f6bc31dd8fb729eb5dcbd88f"
      "a424f7231917f3f5ff924f49f8d3f8625c18b6d0fbaeaf17cb250dabaf37e6bb94ca1f22"
      "7ee00d4430e3fbb9225f2d85ef46a4bd48bfc636dea08efb6861935e",
      "0113168690b88367ba305b28a20c15eb3844c0989a74dfefc1450703d88cd2f9b6d04618"
      "5782c69e8041af20d667a44f1d63f7e044bc59fb7a7dc97526f52cfe"
      "f24457bffe56f2e4dbfc78fb5b9e7cb19c15df49ca78cbd6e9ad14be42022f6af5ad43a1"
      "a9edfefabef5caf49bb67bf07267368fa7193c59f3408a9dd7f8fffb",
      "ffbeec3ad3eed1428488d37fcb97756e77dc41db9633becfca6a7c9f52f8e23c3e8880ec"
      "3cfacc8641bf64ee46e8312b43e6d5636e74e6a6c8be86bbd4553681"
      "0aad2ee38b7c6fd02ed36f30cfddc953255aa17f831e83b531f674d8abd0ae315a636bd3"
      "afe2ec780f387a8bf566f04cd2c9eef171d974d6b1e4ac8249a59e46",
      "3599d779f9e34bbef7cfceafdd4a9e7cb19cd7fbe7660a5f2181b7fde6e392f6427d572b"
      "abe586f964f4fcf8d131cefffdf307dbdbb7ab",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3304U, &nameCaptureInfo);
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
                emlrtMxCreateString("calc_pos_0318"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(2.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString("F:\\Archive "
                          "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8"
                          "\x89\xafModule_lib\\0318\\calc_pos_0318.m"));
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
                emlrtMxCreateString("yJQHyEOFVWxmqzSqjILGyB"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_calc_pos_0318_info.c) */
