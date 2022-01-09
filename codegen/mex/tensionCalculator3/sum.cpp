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
#include "rt_nonfinite.h"
#include <algorithm>

// Function Definitions
namespace coder {
void sum(const real_T x_data[], const int32_T x_size[2], real_T y_data[],
         int32_T *y_size)
{
  if (x_size[0] == 0) {
    *y_size = 0;
  } else {
    int32_T vstride;
    vstride = x_size[0];
    *y_size = static_cast<int16_T>(x_size[0]);
    if (0 <= vstride - 1) {
      std::copy(&x_data[0], &x_data[vstride], &y_data[0]);
    }
    for (int32_T xj{0}; xj < vstride; xj++) {
      y_data[xj] += x_data[vstride + xj];
    }
  }
}

} // namespace coder

// End of code generation (sum.cpp)
