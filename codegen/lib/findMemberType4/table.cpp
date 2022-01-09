//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// table.cpp
//
// Code generation for function 'table'
//

// Include files
#include "table.h"
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "varNamesDim.h"
#include "coder_bounded_array.h"
#include <algorithm>

// Function Definitions
namespace coder {
c_table::c_table()
{
}

c_table::~c_table()
{
}

void c_table::init(
    const matlab::internal::coder::tabular::private_::metaDim metaDim,
    const matlab::internal::coder::tabular::private_::rowNamesDim b_rowDim,
    const matlab::internal::coder::tabular::private_::varNamesDim b_varDim,
    const double data_f1_data[], const int data_f1_size[2],
    const cell_wrap_4 data_f2_data[], int data_f2_size,
    const double data_f3_data[], int data_f3_size, const double data_f4_data[],
    int data_f4_size, const double data_f5_data[], int data_f5_size)
{
  int loop_ub;
  this->b_metaDim = metaDim;
  this->rowDim = b_rowDim;
  this->varDim = b_varDim;
  this->data.f1.size[0] = data_f1_size[0];
  this->data.f1.size[1] = 2;
  loop_ub = data_f1_size[0] * 2;
  if (0 <= loop_ub - 1) {
    std::copy(&data_f1_data[0], &data_f1_data[loop_ub], &this->data.f1.data[0]);
  }
  this->data.f2.size[0] = data_f2_size;
  if (0 <= data_f2_size - 1) {
    std::copy(&data_f2_data[0], &data_f2_data[data_f2_size],
              &this->data.f2.data[0]);
  }
  this->data.f3.size[0] = data_f3_size;
  if (0 <= data_f3_size - 1) {
    std::copy(&data_f3_data[0], &data_f3_data[data_f3_size],
              &this->data.f3.data[0]);
  }
  this->data.f4.size[0] = data_f4_size;
  if (0 <= data_f4_size - 1) {
    std::copy(&data_f4_data[0], &data_f4_data[data_f4_size],
              &this->data.f4.data[0]);
  }
  this->data.f5.size[0] = data_f5_size;
  if (0 <= data_f5_size - 1) {
    std::copy(&data_f5_data[0], &data_f5_data[data_f5_size],
              &this->data.f5.data[0]);
  }
}

} // namespace coder

// End of code generation (table.cpp)
