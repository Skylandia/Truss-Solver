//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// table.h
//
// Code generation for function 'table'
//

#pragma once

// Include files
#include "findMemberType5_internal_types.h"
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rtwtypes.h"
#include "varNamesDim.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
struct struct_T {
  emxArray_char_T_1x0 Description;
};

namespace coder {
class table {
public:
  cell_8 data;

protected:
  matlab::internal::coder::tabular::private_::metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::varNamesDim varDim;
  struct_T arrayProps;
};

class b_table {
public:
  cell_6 data;

protected:
  matlab::internal::coder::tabular::private_::metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::varNamesDim varDim;
  struct_T arrayProps;
};

} // namespace coder

// End of code generation (table.h)
