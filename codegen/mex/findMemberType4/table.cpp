//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// table.cpp
//
// Code generation for function 'table'
//

// Include files
#include "table.h"
#include "findMemberType4_data.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Variable Definitions
static emlrtRSInfo p_emlrtRSI{
    19,                       // lineNo
    "tabular/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    49,                       // lineNo
    "tabular/parenReference", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m" // pathName
};

static emlrtBCInfo y_emlrtBCI{
    0,                        // iFirst
    5,                        // iLast
    71,                       // lineNo
    53,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    33,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    53,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    0,                        // iFirst
    5,                        // iLast
    71,                       // lineNo
    41,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    41,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m", // pName
    0                                                        // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    25,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m", // pName
    0                                                        // checkKind
};

static emlrtRTEInfo b_emlrtRTEI{
    66,               // lineNo
    73,               // colNo
    "parenReference", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@tabular\\parenReference.m" // pName
};

// Function Definitions
namespace coder {
void c_table::parenReference(const emlrtStack *sp,
                             const boolean_T varargin_1[6], table *b) const
{
  matlab::internal::coder::tabular::private_::b_varNamesDim ab_emlrtRSI;
  array<real_T, 2U> numericRowIndices;
  emlrtStack st;
  real_T a__1;
  real_T numRowIndices;
  int32_T b_b;
  int32_T b_i;
  int32_T i;
  int32_T trueCount;
  int8_T b_tmp_data[6];
  int8_T tmp_data[6];
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &p_emlrtRSI;
  matlab::internal::coder::tabular::private_::b_rowNamesDim::subs2inds(
      &st, varargin_1, &numRowIndices, &a__1);
  matlab::internal::coder::tabular::private_::b_varNamesDim::subs2inds(
      &ab_emlrtRSI);
  st.site = &r_emlrtRSI;
  matlab::internal::coder::tabular::private_::b_varNamesDim::
      logicalIndices2Numeric(&st, varargin_1, numericRowIndices);
  b->data.f1.set_size(&b_emlrtRTEI, sp, numericRowIndices.size(1));
  i = numericRowIndices.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    b_b = b->data.f1.size(0) - 1;
    trueCount = static_cast<int32_T>(numericRowIndices[b_i]) - 1;
    for (int32_T i1{0}; i1 < 10; i1++) {
      if (b_i + 1 > numericRowIndices.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numericRowIndices.size(1),
                                      &db_emlrtBCI, (emlrtCTX)sp);
      }
      if ((trueCount < 0) || (trueCount > 5)) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 0, 5, &cb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (b_i > b_b) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_b, &eb_emlrtBCI, (emlrtCTX)sp);
      }
      b->data.f1[b_i].f1[i1] = this->data.f1[trueCount].f1[i1];
    }
  }
  trueCount = 0;
  b_b = 0;
  for (b_i = 0; b_i < 6; b_i++) {
    if (varargin_1[b_i]) {
      trueCount++;
      tmp_data[b_b] = static_cast<int8_T>(b_i + 1);
      b_b++;
    }
  }
  b->data.f2.size[0] = trueCount;
  for (i = 0; i < trueCount; i++) {
    b->data.f2.data[i] = this->data.f2[tmp_data[i] - 1];
  }
  trueCount = 0;
  b_b = 0;
  for (b_i = 0; b_i < 6; b_i++) {
    if (varargin_1[b_i]) {
      trueCount++;
      b_tmp_data[b_b] = static_cast<int8_T>(b_i + 1);
      b_b++;
    }
  }
  b->data.f3.size[0] = trueCount;
  for (i = 0; i < trueCount; i++) {
    b->data.f3.data[i] = this->data.f3[b_tmp_data[i] - 1];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void d_table::parenReference(const emlrtStack *sp,
                             const boolean_T varargin_1[6], b_table *b) const
{
  matlab::internal::coder::tabular::private_::b_varNamesDim ab_emlrtRSI;
  array<real_T, 2U> numericRowIndices;
  emlrtStack st;
  real_T a__1;
  real_T numRowIndices;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  int32_T partialTrueCount;
  int8_T b_tmp_data[6];
  int8_T tmp_data[6];
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &p_emlrtRSI;
  matlab::internal::coder::tabular::private_::b_rowNamesDim::subs2inds(
      &st, varargin_1, &numRowIndices, &a__1);
  matlab::internal::coder::tabular::private_::b_varNamesDim::subs2inds(
      &ab_emlrtRSI);
  st.site = &r_emlrtRSI;
  matlab::internal::coder::tabular::private_::b_varNamesDim::
      logicalIndices2Numeric(&st, varargin_1, numericRowIndices);
  b->data.f1.set_size(&b_emlrtRTEI, sp, numericRowIndices.size(1));
  i = numericRowIndices.size(1);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1 > numericRowIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numericRowIndices.size(1),
                                    &bb_emlrtBCI, (emlrtCTX)sp);
    }
    partialTrueCount = static_cast<int32_T>(numericRowIndices[b_i]) - 1;
    if ((partialTrueCount < 0) || (partialTrueCount > 5)) {
      emlrtDynamicBoundsCheckR2012b(partialTrueCount, 0, 5, &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i + 1 > numericRowIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numericRowIndices.size(1),
                                    &bb_emlrtBCI, (emlrtCTX)sp);
    }
    partialTrueCount = static_cast<int32_T>(numericRowIndices[b_i]) - 1;
    if ((partialTrueCount < 0) || (partialTrueCount > 5)) {
      emlrtDynamicBoundsCheckR2012b(partialTrueCount, 0, 5, &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = this->data.f1[static_cast<int32_T>(numericRowIndices[b_i]) - 1]
                  .f1.size[1] -
              1;
    if (b_i > b->data.f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, b->data.f1.size(0) - 1,
                                    &ab_emlrtBCI, (emlrtCTX)sp);
    }
    b->data.f1[b_i].f1.size[0] = 1;
    if (b_i + 1 > numericRowIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numericRowIndices.size(1),
                                    &bb_emlrtBCI, (emlrtCTX)sp);
    }
    partialTrueCount = static_cast<int32_T>(numericRowIndices[b_i]) - 1;
    if ((partialTrueCount < 0) || (partialTrueCount > 5)) {
      emlrtDynamicBoundsCheckR2012b(partialTrueCount, 0, 5, &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (b_i > b->data.f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, b->data.f1.size(0) - 1,
                                    &ab_emlrtBCI, (emlrtCTX)sp);
    }
    b->data.f1[b_i].f1.size[1] =
        this->data.f1[static_cast<int32_T>(numericRowIndices[b_i]) - 1]
            .f1.size[1];
    partialTrueCount = b->data.f1.size(0);
    if (b_i > b->data.f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, b->data.f1.size(0) - 1,
                                    &ab_emlrtBCI, (emlrtCTX)sp);
    }
    if (b_i > b->data.f1.size(0) - 1) {
      emlrtDynamicBoundsCheckR2012b(b_i, 0, b->data.f1.size(0) - 1,
                                    &ab_emlrtBCI, (emlrtCTX)sp);
    }
    for (int32_T i1{0}; i1 <= loop_ub; i1++) {
      int32_T i2;
      if (b_i + 1 > numericRowIndices.size(1)) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, numericRowIndices.size(1),
                                      &db_emlrtBCI, (emlrtCTX)sp);
      }
      i2 = static_cast<int32_T>(numericRowIndices[b_i]) - 1;
      if ((i2 < 0) || (i2 > 5)) {
        emlrtDynamicBoundsCheckR2012b(i2, 0, 5, &cb_emlrtBCI, (emlrtCTX)sp);
      }
      if (b_i > partialTrueCount - 1) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, partialTrueCount - 1,
                                      &eb_emlrtBCI, (emlrtCTX)sp);
      }
      b->data.f1[b_i].f1.data[i1] = this->data.f1[i2].f1.data[i1];
    }
  }
  loop_ub = 0;
  partialTrueCount = 0;
  for (b_i = 0; b_i < 6; b_i++) {
    if (varargin_1[b_i]) {
      loop_ub++;
      tmp_data[partialTrueCount] = static_cast<int8_T>(b_i + 1);
      partialTrueCount++;
    }
  }
  b->data.f2.size[0] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    b->data.f2.data[i] = this->data.f2[tmp_data[i] - 1];
  }
  loop_ub = 0;
  partialTrueCount = 0;
  for (b_i = 0; b_i < 6; b_i++) {
    if (varargin_1[b_i]) {
      loop_ub++;
      b_tmp_data[partialTrueCount] = static_cast<int8_T>(b_i + 1);
      partialTrueCount++;
    }
  }
  b->data.f3.size[0] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    b->data.f3.data[i] = this->data.f3[b_tmp_data[i] - 1];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

} // namespace coder

// End of code generation (table.cpp)
