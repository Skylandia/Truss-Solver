//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_findMemberType4_api.cpp
//
// Code generation for function '_coder_findMemberType4_api'
//

// Include files
#include "_coder_findMemberType4_api.h"
#include "findMemberType4.h"
#include "findMemberType4_data.h"
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "string1.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_bounded_array.h"

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[10]);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T *y_size);

static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static const mxArray *b_emlrt_marshallOut(const boolean_T u);

static coder::matlab::internal::coder::tabular::private_::rowNamesDim
c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                   const emlrtMsgIdentifier *parentId);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2]);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T *ret_size);

static coder::matlab::internal::coder::tabular::private_::varNamesDim
e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                   const emlrtMsgIdentifier *parentId);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgesTable,
                             const char_T *identifier, coder::e_table *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::e_table *y);

static coder::matlab::internal::coder::tabular::private_::metaDim
emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                 const emlrtMsgIdentifier *parentId);

static void
emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                 const emlrtMsgIdentifier *parentId,
                 coder::matlab::internal::coder::tabular::Continuity y[5]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_5 *y);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_4 y_data[], int32_T *y_size);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[10]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T y_data[], int32_T y_size[2]);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *safteyFactor,
                               const char_T *identifier);

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T *u_size);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const cell_wrap_6 u_data[],
                                        const int32_T u_size);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[10])
{
  static const int32_T dims[2]{1, 10};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 10);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T y_data[], int32_T *y_size)
{
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = l_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const boolean_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateLogicalScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static coder::matlab::internal::coder::tabular::private_::rowNamesDim
c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                   const emlrtMsgIdentifier *parentId)
{
  coder::matlab::internal::coder::tabular::private_::rowNamesDim y;
  coder::rtString r;
  emlrtMsgIdentifier thisId;
  const mxArray *propValues;
  const char_T *propClasses{
      "matlab.internal.coder.tabular.private.rowNamesDim"};
  const char_T *propNames{"labels"};
  propValues = nullptr;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a(
      (emlrtCTX)sp, parentId, u,
      (const char_T *)"matlab.internal.coder.tabular.private.rowNamesDim");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  thisId.fIdentifier = "labels";
  d_emlrt_marshallIn(sp, emlrtAlias(propValues), &thisId);
  y.labels = r;
  emlrtDestroyArrays(1, &propValues);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{195, 2};
  int32_T iv[2];
  const boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  int32_T iv[2];
  boolean_T bv[2];
  bv[0] = false;
  iv[0] = 0;
  bv[1] = false;
  iv[1] = 0;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  emlrtDestroyArray(&u);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T ret_data[], int32_T *ret_size)
{
  static const int32_T dims{195};
  const boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, ret_size);
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 8, false);
  emlrtDestroyArray(&src);
}

static coder::matlab::internal::coder::tabular::private_::varNamesDim
e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                   const emlrtMsgIdentifier *parentId)
{
  coder::matlab::internal::coder::tabular::private_::varNamesDim y;
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[9];
  const char_T *propClasses[9]{
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "matlab.internal.coder.tabular.private.varNamesDim"};
  const char_T *propNames[9]{"length",     "descrs",        "units",
                             "continuity", "customProps",   "hasDescrs",
                             "hasUnits",   "hasContinuity", "hasCustomProps"};
  for (int32_T i{0}; i < 9; i++) {
    propValues[i] = nullptr;
  }
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a(
      (emlrtCTX)sp, parentId, u,
      (const char_T *)"matlab.internal.coder.tabular.private.varNamesDim");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 9, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "length";
  y.length = b_emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId);
  thisId.fIdentifier = "descrs";
  f_emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId);
  thisId.fIdentifier = "units";
  f_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId);
  thisId.fIdentifier = "continuity";
  emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId, y.continuity);
  thisId.fIdentifier = "customProps";
  h_emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId);
  thisId.fIdentifier = "hasDescrs";
  y.hasDescrs = i_emlrt_marshallIn(sp, emlrtAlias(propValues[5]), &thisId);
  thisId.fIdentifier = "hasUnits";
  y.hasUnits = i_emlrt_marshallIn(sp, emlrtAlias(propValues[6]), &thisId);
  thisId.fIdentifier = "hasContinuity";
  y.hasContinuity = i_emlrt_marshallIn(sp, emlrtAlias(propValues[7]), &thisId);
  thisId.fIdentifier = "hasCustomProps";
  y.hasCustomProps = i_emlrt_marshallIn(sp, emlrtAlias(propValues[8]), &thisId);
  emlrtDestroyArrays(9, &propValues[0]);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *edgesTable,
                             const char_T *identifier, coder::e_table *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(edgesTable), &thisId, y);
  emlrtDestroyArray(&edgesTable);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             coder::e_table *y)
{
  emlrtMsgIdentifier thisId;
  const mxArray *propValues[5];
  const char_T *propClasses[5]{
      "matlab.internal.coder.table", "matlab.internal.coder.table",
      "matlab.internal.coder.table", "matlab.internal.coder.table",
      "matlab.internal.coder.table"};
  const char_T *propNames[5]{"metaDim", "rowDim", "varDim", "data",
                             "arrayProps"};
  for (int32_T i{0}; i < 5; i++) {
    propValues[i] = nullptr;
  }
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u, (const char_T *)"table");
  emlrtAssign(&u, emlrtConvertInstanceToRedirectTarget(
                      (emlrtCTX)sp, u, 0,
                      (const char_T *)"matlab.internal.coder.table"));
  emlrtCheckMcosClass2017a((emlrtCTX)sp, parentId, u,
                           (const char_T *)"matlab.internal.coder.table");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 5, (const char_T **)&propNames[0],
                        (const char_T **)&propClasses[0], &propValues[0]);
  thisId.fIdentifier = "metaDim";
  y->b_metaDim = emlrt_marshallIn(sp, emlrtAlias(propValues[0]), &thisId);
  thisId.fIdentifier = "rowDim";
  y->rowDim = c_emlrt_marshallIn(sp, emlrtAlias(propValues[1]), &thisId);
  thisId.fIdentifier = "varDim";
  y->varDim = e_emlrt_marshallIn(sp, emlrtAlias(propValues[2]), &thisId);
  thisId.fIdentifier = "data";
  emlrt_marshallIn(sp, emlrtAlias(propValues[3]), &thisId, &y->data);
  thisId.fIdentifier = "arrayProps";
  j_emlrt_marshallIn(sp, emlrtAlias(propValues[4]), &thisId);
  emlrtDestroyArrays(5, &propValues[0]);
  emlrtDestroyArray(&u);
}

static coder::matlab::internal::coder::tabular::private_::metaDim
emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                 const emlrtMsgIdentifier *parentId)
{
  coder::matlab::internal::coder::tabular::private_::metaDim y;
  emlrtMsgIdentifier thisId;
  const mxArray *propValues;
  const char_T *propClasses{"matlab.internal.coder.tabular.private.metaDim"};
  const char_T *propNames{"length"};
  propValues = nullptr;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckMcosClass2017a(
      (emlrtCTX)sp, parentId, u,
      (const char_T *)"matlab.internal.coder.tabular.private.metaDim");
  emlrtGetAllProperties((emlrtCTX)sp, u, 0, 1, (const char_T **)&propNames,
                        (const char_T **)&propClasses, &propValues);
  thisId.fIdentifier = "length";
  y.length = b_emlrt_marshallIn(sp, emlrtAlias(propValues), &thisId);
  emlrtDestroyArrays(1, &propValues);
  emlrtDestroyArray(&u);
  return y;
}

static void
emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                 const emlrtMsgIdentifier *parentId,
                 coder::matlab::internal::coder::tabular::Continuity y[5])
{
  static const int32_T enumValues[4]{0, 1, 2, 3};
  static const int32_T dims[2]{1, 5};
  static const char_T *enumNames[4]{"unset", "continuous", "step", "event"};
  emlrtCheckEnumR2012b(
      (emlrtCTX)sp, (const char_T *)"matlab.internal.coder.tabular.Continuity",
      4, (const char_T **)&enumNames[0], &enumValues[0]);
  emlrtCheckBuiltInR2012b(
      (emlrtCTX)sp, parentId, u,
      (const char_T *)"matlab.internal.coder.tabular.Continuity", false, 2U,
      (void *)&dims[0]);
  for (int32_T i{0}; i < 5; i++) {
    y[i] = static_cast<coder::matlab::internal::coder::tabular::Continuity>(
        emlrtGetEnumElementR2009a(u, i));
  }
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, cell_5 *y)
{
  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  boolean_T bv[2];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  bv[0] = false;
  iv[0] = 1;
  bv[1] = false;
  iv[1] = 5;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  thisId.fIdentifier = "1";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 0)),
                   &thisId, y->f1.data, y->f1.size);
  thisId.fIdentifier = "2";
  emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 1)),
                   &thisId, y->f2.data, &y->f2.size[0]);
  thisId.fIdentifier = "3";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 2)),
                     &thisId, y->f3.data, &y->f3.size[0]);
  thisId.fIdentifier = "4";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 3)),
                     &thisId, y->f4.data, &y->f4.size[0]);
  thisId.fIdentifier = "5";
  b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, 4)),
                     &thisId, y->f5.data, &y->f5.size[0]);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_4 y_data[], int32_T *y_size)
{
  emlrtMsgIdentifier thisId;
  int32_T n;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  b = true;
  n = 195;
  emlrtCheckVsCell((emlrtCTX)sp, parentId, u, 1U, &n, &b, y_size);
  for (n = 0; n < *y_size; n++) {
    sprintf(&str[0], "%d", n + 1);
    thisId.fIdentifier = &str[0];
    emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, n)),
                     &thisId, y_data[n].f1);
  }
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[10])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T y_data[], int32_T y_size[2])
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *safteyFactor,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(safteyFactor), &thisId);
  emlrtDestroyArray(&safteyFactor);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T *u_size)
{
  static const int32_T i{0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, u_size, 1);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const cell_wrap_6 u_data[],
                                        const int32_T u_size)
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  y = nullptr;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(1, &u_size));
  if (0 < u_size) {
    iv[0] = 1;
  }
  for (int32_T i{0}; i < u_size; i++) {
    b_y = nullptr;
    iv[1] = u_data[i].f1.size[1];
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, u_data[i].f1.size[1], m,
                             &u_data[i].f1.data[0]);
    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
  }
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
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
  iv[1] = 5;
  emlrtCheckCell((emlrtCTX)sp, parentId, u, 2U, &iv[0], &bv[0]);
  for (int32_T i{0}; i < 5; i++) {
    sprintf(&str[0], "%d", i + 1);
    thisId.fIdentifier = &str[0];
    g_emlrt_marshallIn(
        sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, i)), &thisId);
  }
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 0, nullptr, 0U,
                         (void *)&dims);
  emlrtDestroyArray(&u);
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims{0};
  static const char_T *fieldNames[2]{"Description", "UserData"};
  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((emlrtCTX)sp, parentId, u, 2,
                         (const char_T **)&fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "Description";
  g_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 0, (const char_T *)"Description")),
                     &thisId);
  thisId.fIdentifier = "UserData";
  k_emlrt_marshallIn(sp,
                     emlrtAlias(emlrtGetFieldR2017b(
                         (emlrtCTX)sp, u, 0, 1, (const char_T *)"UserData")),
                     &thisId);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
}

static real_T l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2]{1, 0};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtDestroyArray(&src);
}

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"logical",
                          false, 0U, (void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims[2]{0, 0};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 2U, (void *)&dims[0]);
  emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void findMemberType4_api(const mxArray *const prhs[2], int32_T nlhs,
                         const mxArray *plhs[3])
{
  static const int32_T iv[13]{3, 3, 4, 5, 3, 3, 4, 5, 3, 3, 4, 5, 5};
  static const uint32_T uv[12]{913576686U,  128563055U,  542890784U,
                               2652148966U, 907277159U,  2394005387U,
                               3289008322U, 1166015981U, 308282293U,
                               1590278991U, 1383888751U, 883788902U};
  static const char_T *sv[21]{
      "matlab.internal.coder.table",
      "metaDim",
      "edgesTable.metaDim",
      "matlab.internal.coder.tabular.private.metaDim",
      "labels",
      "edgesTable.metaDim.labels",
      "edgesTable.metaDim.labels",
      "matlab.internal.coder.table",
      "rowDim",
      "edgesTable.rowDim",
      "matlab.internal.coder.tabular.private.rowNamesDim",
      "length",
      "edgesTable.rowDim.length",
      "edgesTable.rowDim.length",
      "matlab.internal.coder.table",
      "varDim",
      "edgesTable.varDim",
      "matlab.internal.coder.tabular.private.varNamesDim",
      "labels",
      "edgesTable.varDim.labels",
      "edgesTable.varDim.labels"};
  coder::e_table edgesTable;
  coder::bounded_array<cell_wrap_6, 195U, 1U> beamType;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*safteyFactor_Members_data)[195];
  real_T safteyFactor;
  int32_T safteyFactor_Members_size;
  boolean_T isPossible;
  st.tls = emlrtRootTLSGlobal;
  safteyFactor_Members_data = (real_T(*)[195])mxMalloc(sizeof(real_T[195]));
  // Check constant function inputs
  emlrtCheckArrayChecksumR2018b(&st, prhs[0], false, &iv[0],
                                (const char_T **)&sv[0], &uv[0]);
  // Marshall function inputs
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "edgesTable", &edgesTable);
  safteyFactor = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "safteyFactor");
  // Invoke the target function
  findMemberType4(&st, &edgesTable, safteyFactor, beamType.data, beamType.size,
                  *safteyFactor_Members_data,
                  *(int32_T(*)[1]) & safteyFactor_Members_size, &isPossible);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(&st, beamType.data, beamType.size[0]);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*safteyFactor_Members_data,
                                &safteyFactor_Members_size);
  }
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(isPossible);
  }
}

// End of code generation (_coder_findMemberType4_api.cpp)
