//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// rowNamesDim.cpp
//
// Code generation for function 'rowNamesDim'
//

// Include files
#include "rowNamesDim.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
void rowNamesDim::subs2inds(const boolean_T rawsubscripts[6],
                            double *numIndices, double *maxIndex)
{
  int nz;
  boolean_T exitg1;
  nz = rawsubscripts[0];
  for (int k{0}; k < 5; k++) {
    nz += rawsubscripts[k + 1];
  }
  *numIndices = nz;
  *maxIndex = 0.0;
  nz = 0;
  exitg1 = false;
  while ((!exitg1) && (nz < 6)) {
    if (rawsubscripts[5 - nz]) {
      *maxIndex = -static_cast<double>(nz) + 6.0;
      exitg1 = true;
    } else {
      nz++;
    }
  }
}

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (rowNamesDim.cpp)
