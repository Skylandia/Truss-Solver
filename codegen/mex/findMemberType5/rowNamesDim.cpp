//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rowNamesDim.cpp
//
// Code generation for function 'rowNamesDim'
//

// Include files
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo s_emlrtRSI{
    403,                          // lineNo
    "tabularDimension/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    294,                          // lineNo
    "tabularDimension/subs2inds", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    150,                           // lineNo
    "tabularDimension/selectFrom", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    56,                       // lineNo
    "rowNamesDim/createLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\rowNamesDim.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    70,                            // lineNo
    "tabularDimension/createLike", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" // pathName
};

static emlrtDCInfo b_emlrtDCI{
    204,                          // lineNo
    35,                           // colNo
    "tabularDimension/setLabels", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m", // pName
    4        // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    206,                          // lineNo
    21,                           // colNo
    "",                           // aName
    "tabularDimension/setLabels", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m", // pName
    0        // checkKind
};

static emlrtRTEInfo d_emlrtRTEI{
    70,                 // lineNo
    23,                 // colNo
    "tabularDimension", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\+tabular\\+private\\tabularDimens"
    "ion.m" // pName
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
void rowNamesDim::subs2inds(const emlrtStack *sp,
                            const boolean_T rawsubscripts[6],
                            real_T *numIndices, real_T *maxIndex)
{
  array<uint32_T, 2U> indices;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  int32_T b_nz;
  int32_T k;
  int32_T nz;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  nz = rawsubscripts[0];
  b_nz = nz;
  for (k = 0; k < 5; k++) {
    b_nz += rawsubscripts[k + 1];
  }
  *numIndices = b_nz;
  *maxIndex = 0.0;
  b_nz = 0;
  exitg1 = false;
  while ((!exitg1) && (b_nz < 6)) {
    if (rawsubscripts[5 - b_nz]) {
      *maxIndex = -static_cast<real_T>(b_nz) + 6.0;
      exitg1 = true;
    } else {
      b_nz++;
    }
  }
  st.site = &t_emlrtRSI;
  for (k = 0; k < 5; k++) {
    nz += rawsubscripts[k + 1];
  }
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  indices.set_size(&d_emlrtRTEI, &d_st, 1, indices.size(1));
  if (nz < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(nz), &b_emlrtDCI, &d_st);
  }
  indices.set_size(&d_emlrtRTEI, &d_st, indices.size(0), nz);
  for (b_nz = 0; b_nz < nz; b_nz++) {
    if (static_cast<int32_T>(b_nz + 1U) > indices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_nz + 1U), 1,
                                    indices.size(1), &fb_emlrtBCI, &d_st);
    }
    indices[b_nz] = b_nz + 1U;
  }
  st.site = &s_emlrtRSI;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (rowNamesDim.cpp)
