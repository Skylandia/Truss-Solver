//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// sum.h
//
// Code generation for function 'sum'
//

#ifndef SUM_H
#define SUM_H

// Include files
#include "rtwtypes.h"
#include "omp.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder {
void sum(const double x_data[], const int x_size[2], double y_data[],
         int *y_size);

}

#endif
// End of code generation (sum.h)
