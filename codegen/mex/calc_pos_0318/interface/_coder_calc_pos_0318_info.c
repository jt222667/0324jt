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
  const char_T *data[5] = {
      "789ce595cb4edb4014867fa380901025ddb003b1618b12882a971d02cc4524908b0a5153"
      "a5ce64900dbe113b40b242bc006bde821d8baa4fd01760c1821741ea"
      "38b1e3c4d2c869838c80b3f0f1f17f66be9939f631849dac00e013baf634d5f5d35e9cf4"
      "fc18062dac0ba13c61301de3480c8cf3f51bcf13d370e8a5d30d0c59",
      "a7bd917553570dd9704a2d8ba2416d533ba7f58e72ac6ab4a4eab4d81fe4dc4897faa45e"
      "e04aeefdba42c969b1a9a3a1d8c10ab5fea0771e3f39fb4d449c47d8"
      "c2e711cef379d67ff284d0731ecfd789ac91aa65dad5d44a5ac4e8fbf579135c7e57b19d"
      "46933801ef6144de2a87f7d9f3de1b85efd8c40f482cbf82353440a0",
      "40c539281650a812a5821456b08c0c4ed8980abe52f33a0b137534a1b1ac2abbaaa83165"
      "aef0a73c5b7cce5bb4c26691d973c2548be5daccbbb3a42162097a87"
      "1b75ae3343ee33ec83fcc98efff2eb518893b7763bff3b4e9e6fafc5bbe4cc37ec7b3acb"
      "e125437a4a94364e88b85cb33239b5acd825cdfc76b41dace3208213",
      "b50e70e2b8e6ffe8dffbb0fbe4fd47939e42da78515e54dfae9bcd9a4603dedd88bc450e"
      "cfafe3aee7ffb58e36ab8cccb228ab640b06dc9ab57bd589af7f24da"
      "f1f6e32bf5f43e4e9e6fefbd1fabfb875922910b656f5ddcb25ace59b624e537df7e3ffe"
      "0b53d79807",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3064U, &nameCaptureInfo);
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
      emlrtMxCreateString(
          "F:\\Archive "
          "\xe5\xbd\x92\xe6\xa1\xa3\\0324jt\\\xe6\x94\xb9\xe8\x89\xafModule_"
          "lib\\\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\x87\xbd"
          "\xe6\x95\xb0\\calc_pos_0318.m"));
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
                emlrtMxCreateString("EMDsQOtF7kj84Gxt6vEUeF"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_calc_pos_0318_info.c) */
