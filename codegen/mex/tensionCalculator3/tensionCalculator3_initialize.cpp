//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tensionCalculator3_initialize.cpp
//
// Code generation for function 'tensionCalculator3_initialize'
//

// Include files
#include "tensionCalculator3_initialize.h"
#include "_coder_tensionCalculator3_mex.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"

// Function Definitions
void tensionCalculator3_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

// End of code generation (tensionCalculator3_initialize.cpp)
