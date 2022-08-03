//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// varNamesDim.cpp
//
// Code generation for function 'varNamesDim'
//

// Include files
#include "varNamesDim.h"
#include "rt_nonfinite.h"

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
void varNamesDim::subs2inds(varNamesDim *updatedObj)
{
  updatedObj->hasUnits = false;
  updatedObj->units[0].f1.size[0] = 1;
  updatedObj->units[0].f1.size[1] = 0;
  updatedObj->units[1].f1.size[0] = 1;
  updatedObj->units[1].f1.size[1] = 0;
  updatedObj->units[2].f1.size[0] = 1;
  updatedObj->units[2].f1.size[1] = 0;
  updatedObj->hasDescrs = false;
  updatedObj->descrs[0].f1.size[0] = 1;
  updatedObj->descrs[0].f1.size[1] = 0;
  updatedObj->descrs[1].f1.size[0] = 1;
  updatedObj->descrs[1].f1.size[1] = 0;
  updatedObj->descrs[2].f1.size[0] = 1;
  updatedObj->descrs[2].f1.size[1] = 0;
  updatedObj->hasContinuity = false;
  updatedObj->continuity[0] = Continuity::unset;
  updatedObj->continuity[1] = Continuity::unset;
  updatedObj->continuity[2] = Continuity::unset;
}

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (varNamesDim.cpp)
