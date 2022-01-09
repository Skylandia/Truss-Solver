//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// varNamesDim.h
//
// Code generation for function 'varNamesDim'
//

#ifndef VARNAMESDIM_H
#define VARNAMESDIM_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
enum Continuity
{
  unset = 0, // Default value
  continuous,
  step,
  event
};

}
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder
struct cell_wrap_8 {
  coder::empty_bounded_array<char, 2U> f1;
};

namespace coder {
namespace matlab {
namespace internal {
namespace coder {
namespace tabular {
namespace private_ {
class varNamesDim {
public:
  void init(double b_length, const Continuity b_continuity[5],
            boolean_T b_hasDescrs, boolean_T b_hasUnits,
            boolean_T b_hasContinuity, boolean_T b_hasCustomProps);
  varNamesDim();
  ~varNamesDim();
  double length;
  Continuity continuity[5];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
  boolean_T hasCustomProps;
};

class b_varNamesDim {
public:
  static void subs2inds(b_varNamesDim *updatedObj);
  static void
  logicalIndices2Numeric(const boolean_T logicalIndices[6],
                         ::coder::array<double, 2U> &numericIndices);
  cell_wrap_8 descrs[3];
  cell_wrap_8 units[3];
  Continuity continuity[3];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
};

} // namespace private_
} // namespace tabular
} // namespace coder
} // namespace internal
} // namespace matlab
} // namespace coder

#endif
// End of code generation (varNamesDim.h)
