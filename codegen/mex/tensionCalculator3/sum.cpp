//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.cpp
//
// Code generation for function 'sum'
//

// Include files
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo pb_emlrtRSI{
    20,    // lineNo
    "sum", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" // pathName
};

static emlrtRSInfo qb_emlrtRSI{
    99,        // lineNo
    "sumprod", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumpro"
    "d.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    74,                      // lineNo
    "combineVectorElements", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combin"
    "eVectorElements.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    112,                // lineNo
    "blockedSummation", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    173,                // lineNo
    "colMajorFlatIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    192,                // lineNo
    "colMajorFlatIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pathName
};

static emlrtRTEInfo wb_emlrtRTEI{
    146,                // lineNo
    24,                 // colNo
    "blockedSummation", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blocke"
    "dSummation.m" // pName
};

static emlrtRTEInfo xb_emlrtRTEI{
    20,    // lineNo
    1,     // colNo
    "sum", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" // pName
};

// Function Definitions
namespace coder {
void sum(const emlrtStack *sp, const ::coder::array<real_T, 2U> &x,
         ::coder::array<real_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  b_st.site = &qb_emlrtRSI;
  c_st.site = &rb_emlrtRSI;
  if (x.size(0) == 0) {
    y.set_size(&xb_emlrtRTEI, &c_st, 0);
  } else {
    int32_T vstride;
    d_st.site = &sb_emlrtRSI;
    vstride = x.size(0);
    y.set_size(&wb_emlrtRTEI, &d_st, x.size(0));
    e_st.site = &tb_emlrtRSI;
    if (x.size(0) > 2147483646) {
      f_st.site = &p_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }
    for (int32_T xj{0}; xj < vstride; xj++) {
      y[xj] = x[xj];
    }
    e_st.site = &ub_emlrtRSI;
    for (int32_T xj{0}; xj < vstride; xj++) {
      y[xj] = y[xj] + x[vstride + xj];
    }
  }
}

} // namespace coder

// End of code generation (sum.cpp)
