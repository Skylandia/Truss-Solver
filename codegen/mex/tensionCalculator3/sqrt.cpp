//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sqrt.cpp
//
// Code generation for function 'sqrt'
//

// Include files
#include "sqrt.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo vb_emlrtRSI{
    16,     // lineNo
    "sqrt", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    33,                           // lineNo
    "applyScalarFunctionInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" // pathName
};

static emlrtRTEInfo o_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" // pName
};

// Function Definitions
namespace coder {
void b_sqrt(const emlrtStack *sp, ::coder::array<real_T, 1U> &x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  p = false;
  nx = x.size(0);
  for (int32_T k{0}; k < nx; k++) {
    if (p || (x[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &o_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &vb_emlrtRSI;
  nx = x.size(0);
  b_st.site = &wb_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (int32_T k{0}; k < nx; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

} // namespace coder

// End of code generation (sqrt.cpp)
