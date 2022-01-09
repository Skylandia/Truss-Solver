//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.h
//
// Code generation for function 'find'
//

#ifndef FIND_H
#define FIND_H

// Include files
#include "rtwtypes.h"
#include "omp.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
namespace coder {
void eml_find(const boolean_T x_data[], const int x_size[2], int i_data[],
              int *i_size, int j_data[], int *j_size);

}

#endif
// End of code generation (find.h)
