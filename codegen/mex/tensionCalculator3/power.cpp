//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// power.cpp
//
// Code generation for function 'power'
//

// Include files
#include "power.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
void power(const real_T a_data[], const int32_T a_size[2], real_T y_data[],
           int32_T y_size[2])
{
  int32_T nx;
  y_size[0] = static_cast<int16_T>(a_size[0]);
  y_size[1] = 2;
  nx = static_cast<int16_T>(a_size[0]) << 1;
  for (int32_T k{0}; k < nx; k++) {
    y_data[k] = a_data[k] * a_data[k];
  }
}

} // namespace coder

// End of code generation (power.cpp)
