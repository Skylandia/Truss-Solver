//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.h
//
// Code generation for function 'find'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
void b_eml_find(const emlrtStack *sp, const boolean_T x_data[],
                const int32_T x_size[2], int32_T i_data[], int32_T *i_size,
                int32_T j_data[], int32_T *j_size);

void eml_find(const emlrtStack *sp, const boolean_T x_data[], int32_T x_size,
              int32_T i_data[], int32_T *i_size);

} // namespace coder

// End of code generation (find.h)
