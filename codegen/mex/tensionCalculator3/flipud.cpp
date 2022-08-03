//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// flipud.cpp
//
// Code generation for function 'flipud'
//

// Include files
#include "flipud.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
namespace coder {
void flipud(::coder::array<real_T, 1U> &x)
{
  int32_T m;
  int32_T md2;
  m = x.size(0) - 1;
  md2 = x.size(0) >> 1;
  for (int32_T i{0}; i < md2; i++) {
    real_T xtmp;
    xtmp = x[i];
    x[i] = x[m - i];
    x[m - i] = xtmp;
  }
}

} // namespace coder

// End of code generation (flipud.cpp)
