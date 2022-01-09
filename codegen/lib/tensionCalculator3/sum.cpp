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

// Function Definitions
namespace coder {
void sum(const double x_data[], const int x_size[2], double y_data[],
         int *y_size)
{
  if (x_size[0] == 0) {
    *y_size = 0;
  } else {
    int vstride;
    vstride = x_size[0];
    *y_size = static_cast<short>(x_size[0]);
    for (int xj{0}; xj < vstride; xj++) {
      y_data[xj] = x_data[xj] + x_data[vstride + xj];
    }
  }
}

} // namespace coder

// End of code generation (sum.cpp)
