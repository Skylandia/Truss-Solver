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
struct cell_wrap_4 {
  char f1[10];
};

struct cell_10 {
  cell_wrap_4 f1[6];
  double f2[6];
  double f3[6];
};

struct cell_5 {
  coder::bounded_array<double, 390U, 2U> f1;
  coder::bounded_array<cell_wrap_4, 195U, 1U> f2;
  coder::bounded_array<double, 195U, 1U> f3;
  coder::bounded_array<double, 195U, 1U> f4;
  coder::bounded_array<double, 195U, 1U> f5;
};

struct cell_wrap_6 {
  coder::bounded_array<char, 10U, 2U> f1;
};

struct cell_9 {
  cell_wrap_6 f1[6];
  double f2[6];
  double f3[6];
};

struct struct_T {
  coder::empty_bounded_array<char, 2U> Description;
};

namespace coder {
class table {
public:
  cell_9 data;

protected:
  ::coder::matlab::internal::coder::tabular::private_::b_metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::b_rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::b_varNamesDim varDim;
  struct_T arrayProps;
};

class b_table {
public:
  cell_10 data;

protected:
  ::coder::matlab::internal::coder::tabular::private_::b_metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::b_rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::b_varNamesDim varDim;
  struct_T arrayProps;
};

class c_table {
public:
  void
  init(const matlab::internal::coder::tabular::private_::metaDim metaDim,
       const matlab::internal::coder::tabular::private_::rowNamesDim b_rowDim,
       const matlab::internal::coder::tabular::private_::varNamesDim b_varDim,
       const double data_f1_data[], const int data_f1_size[2],
       const cell_wrap_4 data_f2_data[], int data_f2_size,
       const double data_f3_data[], int data_f3_size,
       const double data_f4_data[], int data_f4_size,
       const double data_f5_data[], int data_f5_size);
  c_table();
  ~c_table();
  cell_5 data;

protected:
  matlab::internal::coder::tabular::private_::metaDim b_metaDim;
  matlab::internal::coder::tabular::private_::rowNamesDim rowDim;
  matlab::internal::coder::tabular::private_::varNamesDim varDim;
};

} // namespace coder

#endif
// End of code generation (table.h)
