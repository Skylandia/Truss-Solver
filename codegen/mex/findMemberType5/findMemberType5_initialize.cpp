//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType5_initialize.cpp
//
// Code generation for function 'findMemberType5_initialize'
//

// Include files
#include "findMemberType5_initialize.h"
#include "_coder_findMemberType5_mex.h"
#include "findMemberType5_data.h"
#include "rt_nonfinite.h"

// Function Definitions
void findMemberType5_initialize()
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

// End of code generation (findMemberType5_initialize.cpp)
