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
#include "rt_nonfinite.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo n_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" // pName
};

// Function Definitions
namespace coder {
void b_sqrt(const emlrtStack *sp, real_T x_data[], const int32_T *x_size)
{
  int32_T k;
  boolean_T p;
  p = false;
  for (k = 0; k < *x_size; k++) {
    if (p || (x_data[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &n_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  for (k = 0; k < *x_size; k++) {
    x_data[k] = muDoubleScalarSqrt(x_data[k]);
  }
}

} // namespace coder

// End of code generation (sqrt.cpp)
