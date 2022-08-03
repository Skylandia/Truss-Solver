//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rowNamesDim.h
//
// Code generation for function 'rowNamesDim'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
class rowNamesDim {
public:
  static void subs2inds(const emlrtStack *sp, const boolean_T rawsubscripts[6],
                        real_T *numIndices, real_T *maxIndex);
};

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (rowNamesDim.h)
