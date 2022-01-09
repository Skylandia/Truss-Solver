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
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Definitions
struct cell_wrap_4 {
  char_T f1[10];
};

struct cell_10 {
  cell_wrap_4 f1[6];
  real_T f2[6];
  real_T f3[6];
};

struct cell_5 {
  coder::bounded_array<real_T, 390U, 2U> f1;
  coder::bounded_array<cell_wrap_4, 195U, 1U> f2;
  coder::bounded_array<real_T, 195U, 1U> f3;
  coder::bounded_array<real_T, 195U, 1U> f4;
  coder::bounded_array<real_T, 195U, 1U> f5;
};

struct cell_wrap_6 {
  coder::bounded_array<char_T, 10U, 2U> f1;
};

struct cell_17 {
  coder::array<cell_wrap_4, 1U> f1;
  coder::bounded_array<real_T, 6U, 1U> f2;
  coder::bounded_array<real_T, 6U, 1U> f3;
};

struct cell_9 {
  cell_wrap_6 f1[6];
  real_T f2[6];
  real_T f3[6];
};

struct cell_18 {
  coder::array<cell_wrap_6, 1U> f1;
  coder::bounded_array<real_T, 6U, 1U> f2;
  coder::bounded_array<real_T, 6U, 1U> f3;
};

struct struct_T {
  coder::empty_bounded_array<char_T, 2U> Description;
};

namespace coder {
class table {
public:
  cell_17 data;
};

class b_table {
public:
  cell_18 data;
};

class c_table {
public:
  void parenReference(const emlrtStack *sp, const boolean_T varargin_1[6],
                      table *b) const;
  matlab::internal::coder::tabular::private_::b_rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::b_varNamesDim varDim;
  cell_10 data;
  struct_T arrayProps;

protected:
  ::coder::matlab::internal::coder::tabular::private_::b_metaDim b_metaDim;
};

class d_table {
public:
  void parenReference(const emlrtStack *sp, const boolean_T varargin_1[6],
                      b_table *b) const;
  matlab::internal::coder::tabular::private_::b_rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::b_varNamesDim varDim;
  cell_9 data;
  struct_T arrayProps;

protected:
  ::coder::matlab::internal::coder::tabular::private_::b_metaDim b_metaDim;
};

class e_table {
public:
  matlab::internal::coder::tabular::private_::metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::varNamesDim varDim;
  cell_5 data;
};

} // namespace coder

// End of code generation (table.h)
