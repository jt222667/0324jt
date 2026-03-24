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
      "789ced56cd6ed340181ca382b800e10047c40b809238495d0e4815105aa4164442011164"
      "fcb3965dec38b59dd0f4c8891b674ef0184888a7e0867818c68e9d1f"
      "4b5622225c2ab12befeeec7cbb63ef4e760369774f027019694a1b97525849eb73584c79"
      "5ecac5498be1388f8d857119ff31ad0dbf1f89e36802fa9a27a6234d",
      "df73fa5a3fea8e070281087d7724cc84b11c57741d4f74e6c17e8cbcf61c35053115b7ef"
      "d9c278db197a08ec70f686ee3c98aec79b82efdd58b21ef9945f8f7c"
      "5ca637f8433d29d75fa497f186e61aeac00fd5aa5c53b0fef7667a170af5274c18054323"
      "9afb5e693dbd0f057a57b3f894788507788d36eea0876d043060c3c1",
      "080237f15435ec1e6e316b68c22467a1051955b664e8ecb5a010997c2c6cf131c9eb6890"
      "a927ac9c648548b08ecb38dac4df9a754bf8eff7e0b33d84cb7e95a5"
      "c3b13d46c8a8714c8f2a1a7b0d72034686ac33ee36bca5fb7d65c5f5cfd7b3f88b49ddfa"
      "f62ba1cad2dbfe74e37b997a593a2dbde382f956fdfd5c2fd0abe4f8",
      "aad2be7f6828757dd0d8775eda61d7f50f5eecccdee3c9129d65ef81025cd6fcffcfa17f"
      "f31c5a75fd8bfe775452c63899e0b2ee39d31feaae98e97d59d35f9f"
      "0bf4327fdd5dd95f21f74163bfe0ae8dd1e77e8cb8a7017745e5ae54d956e8952a3d103b"
      "a44964313ef6c666e29816914e64253e5218b1c91cfba891f49889cf",
      "743ac9206b244eaae3f4740f387b8f4ed37856aa540f987d3e2a22a29065ecd193c48de5"
      "9de33fbe967b2feefcdc6d96a997a5b37a2f5e2bd0abe4783dec3eaa"
      "29cfebefb6e4badcb11f8f9f1d3d3cc2d9bf177f036edde3fd",
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
                emlrtMxCreateString("calc_pos_0318"));
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
                    "\x94\xb9\xe8\x89\xafModule_lib\\0318\\calc_pos_0318.m"));
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
