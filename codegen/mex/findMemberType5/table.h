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
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rtwtypes.h"
#include "varNamesDim.h"
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
struct cell_wrap_7 {
  char_T f1[10];
};

struct cell_8 {
  cell_wrap_7 f1[6];
  real_T f2[6];
  real_T f3[6];
};

struct cell_wrap_5 {
  coder::bounded_array<char_T, 10U, 2U> f1;
};

struct cell_6 {
  cell_wrap_5 f1[6];
  real_T f2[6];
  real_T f3[6];
};

struct struct_T {
  coder::empty_bounded_array<char_T, 2U> Description;
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
