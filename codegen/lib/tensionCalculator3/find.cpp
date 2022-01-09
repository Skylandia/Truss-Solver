//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// find.cpp
//
// Code generation for function 'find'
//

// Include files
#include "find.h"

// Function Definitions
namespace coder {
void eml_find(const boolean_T x_data[], const int x_size[2], int i_data[],
              int *i_size, int j_data[], int *j_size)
{
  int nx;
  nx = x_size[0] << 1;
  if (nx == 0) {
    *i_size = 0;
    *j_size = 0;
  } else {
    int idx;
    int ii;
    int jj;
    boolean_T exitg1;
    idx = 0;
    *i_size = static_cast<short>(nx);
    *j_size = static_cast<short>(nx);
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= 2)) {
      boolean_T guard1{false};
      guard1 = false;
      if (x_data[(ii + x_size[0] * (jj - 1)) - 1]) {
        idx++;
        i_data[idx - 1] = ii;
        j_data[idx - 1] = jj;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        ii++;
        if (ii > x_size[0]) {
          ii = 1;
          jj++;
        }
      }
    }
    if (nx == 1) {
      if (idx == 0) {
        *i_size = 0;
        *j_size = 0;
      }
    } else if (1 > idx) {
      *i_size = 0;
      *j_size = 0;
    } else {
      *i_size = idx;
      *j_size = idx;
    }
  }
}

} // namespace coder

// End of code generation (find.cpp)
