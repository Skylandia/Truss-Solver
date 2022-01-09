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

// Function Definitions
namespace coder {
void flipud(real_T x_data[], const int32_T *x_size)
{
  int32_T m;
  int32_T md2;
  m = *x_size - 1;
  md2 = *x_size >> 1;
  for (int32_T i{0}; i < md2; i++) {
    real_T xtmp;
    int32_T b_i;
    xtmp = x_data[i];
    b_i = m - i;
    x_data[i] = x_data[b_i];
    x_data[b_i] = xtmp;
  }
}

} // namespace coder

// End of code generation (flipud.cpp)
