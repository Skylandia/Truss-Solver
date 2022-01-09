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
#include "findMemberType4_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "coder_bounded_array.h"

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
void varNamesDim::init(double b_length, const Continuity b_continuity[5],
                       boolean_T b_hasDescrs, boolean_T b_hasUnits,
                       boolean_T b_hasContinuity, boolean_T b_hasCustomProps)
{
  this->length = b_length;
  for (int i{0}; i < 5; i++) {
    this->continuity[i] = b_continuity[i];
  }
  this->hasDescrs = b_hasDescrs;
  this->hasUnits = b_hasUnits;
  this->hasContinuity = b_hasContinuity;
  this->hasCustomProps = b_hasCustomProps;
}

void b_varNamesDim::logicalIndices2Numeric(
    const boolean_T logicalIndices[6],
    ::coder::array<double, 2U> &numericIndices)
{
  int k;
  int nz;
  nz = logicalIndices[0];
  for (k = 0; k < 5; k++) {
    nz += logicalIndices[k + 1];
  }
  numericIndices.set_size(1, nz);
  for (k = 0; k < nz; k++) {
    numericIndices[k] = 0.0;
  }
  nz = 0;
  if (logicalIndices[0]) {
    numericIndices[0] = 1.0;
    nz = 1;
  }
  if (logicalIndices[1]) {
    numericIndices[nz] = 2.0;
    nz++;
  }
  if (logicalIndices[2]) {
    numericIndices[nz] = 3.0;
    nz++;
  }
  if (logicalIndices[3]) {
    numericIndices[nz] = 4.0;
    nz++;
  }
  if (logicalIndices[4]) {
    numericIndices[nz] = 5.0;
    nz++;
  }
  if (logicalIndices[5]) {
    numericIndices[nz] = 6.0;
  }
}

void b_varNamesDim::subs2inds(b_varNamesDim *updatedObj)
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
  updatedObj->continuity[0] = unset;
  updatedObj->continuity[1] = unset;
  updatedObj->continuity[2] = unset;
}

varNamesDim::varNamesDim()
{
}

varNamesDim::~varNamesDim()
{
}

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (varNamesDim.cpp)
