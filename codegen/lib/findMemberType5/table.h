//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// table.h
//
// Code generation for function 'table'
//

#ifndef TABLE_H
#define TABLE_H

// Include files
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rtwtypes.h"
#include "varNamesDim.h"
#include "coder_bounded_array.h"
#include <cstddef>
#include <cstdlib>

// Type Definitions
struct cell_wrap_7 {
  char f1[10];
};

struct cell_8 {
  cell_wrap_7 f1[6];
  double f2[6];
  double f3[6];
};

struct cell_wrap_5 {
  coder::bounded_array<char, 10U, 2U> f1;
};

struct cell_6 {
  cell_wrap_5 f1[6];
  double f2[6];
  double f3[6];
};

struct struct_T {
  coder::empty_bounded_array<char, 2U> Description;
};

namespace coder {
class table {
public:
  cell_6 data;

protected:
  matlab::internal::coder::tabular::private_::metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::varNamesDim varDim;
  struct_T arrayProps;
};

class b_table {
public:
  cell_8 data;

protected:
  matlab::internal::coder::tabular::private_::metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::varNamesDim varDim;
  struct_T arrayProps;
};

} // namespace coder

#endif
// End of code generation (table.h)
