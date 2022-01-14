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
#include "findMemberType5_internal_types.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Variable Definitions
static emlrtBCInfo emlrtBCI{
    -1,                                   // iFirst
    -1,                                   // iLast
    807,                                  // lineNo
    40,                                   // colNo
    "",                                   // aName
    "varNamesDim/logicalIndices2Numeric", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/+tabular/+private/varNamesDim."
    "m", // pName
    0    // checkKind
};

static emlrtDCInfo emlrtDCI{
    802,                                  // lineNo
    42,                                   // colNo
    "varNamesDim/logicalIndices2Numeric", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/+tabular/+private/varNamesDim."
    "m", // pName
    4    // checkKind
};

static emlrtRTEInfo b_emlrtRTEI{
    802,           // lineNo
    17,            // colNo
    "varNamesDim", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/+tabular/+private/varNamesDim."
    "m" // pName
};

// Function Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
void varNamesDim::logicalIndices2Numeric(
    const emlrtStack *sp, const boolean_T logicalIndices[6],
    ::coder::array<real_T, 2U> &numericIndices)
{
  int32_T count;
  int32_T nz;
  nz = logicalIndices[0];
  for (count = 0; count < 5; count++) {
    nz += logicalIndices[count + 1];
  }
  numericIndices.set_size(&b_emlrtRTEI, sp, 1, numericIndices.size(1));
  if (nz < 0) {
    emlrtNonNegativeCheckR2012b(static_cast<real_T>(nz), &emlrtDCI,
                                (emlrtCTX)sp);
  }
  numericIndices.set_size(&b_emlrtRTEI, sp, numericIndices.size(0), nz);
  for (count = 0; count < nz; count++) {
    numericIndices[count] = 0.0;
  }
  count = 1;
  if (logicalIndices[0]) {
    if (1 > nz) {
      emlrtDynamicBoundsCheckR2012b(1, 1, 0, &emlrtBCI, (emlrtCTX)sp);
    }
    numericIndices[0] = 1.0;
    count = 2;
  }
  if (logicalIndices[1]) {
    if (count > nz) {
      emlrtDynamicBoundsCheckR2012b(count, 1, nz, &emlrtBCI, (emlrtCTX)sp);
    }
    numericIndices[count - 1] = 2.0;
    count++;
  }
  if (logicalIndices[2]) {
    if (count > numericIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(count, 1, numericIndices.size(1), &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    numericIndices[count - 1] = 3.0;
    count++;
  }
  if (logicalIndices[3]) {
    if (count > numericIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(count, 1, numericIndices.size(1), &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    numericIndices[count - 1] = 4.0;
    count++;
  }
  if (logicalIndices[4]) {
    if (count > numericIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(count, 1, numericIndices.size(1), &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    numericIndices[count - 1] = 5.0;
    count++;
  }
  if (logicalIndices[5]) {
    if (count > numericIndices.size(1)) {
      emlrtDynamicBoundsCheckR2012b(count, 1, numericIndices.size(1), &emlrtBCI,
                                    (emlrtCTX)sp);
    }
    numericIndices[count - 1] = 6.0;
  }
}

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
  updatedObj->continuity[0] = unset;
  updatedObj->continuity[1] = unset;
  updatedObj->continuity[2] = unset;
}

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

// End of code generation (varNamesDim.cpp)
