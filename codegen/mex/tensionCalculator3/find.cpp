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
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "warning.h"

// Variable Definitions
static emlrtRSInfo m_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    138,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    158,        // lineNo
    "eml_find", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    253,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    254,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    255,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pathName
};

static emlrtRTEInfo e_emlrtRTEI{
    392,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

static emlrtRTEInfo g_emlrtRTEI{
    239,                           // lineNo
    1,                             // colNo
    "find_first_nonempty_triples", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/elmat/find.m" // pName
};

// Function Definitions
namespace coder {
void b_eml_find(const emlrtStack *sp, const boolean_T x_data[],
                const int32_T x_size[2], int32_T i_data[], int32_T *i_size,
                int32_T j_data[], int32_T *j_size)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T iv[2];
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nx = x_size[0] << 1;
  if (nx == 0) {
    *i_size = 0;
    *j_size = 0;
  } else {
    int32_T idx;
    int32_T ii;
    int32_T jj;
    boolean_T exitg1;
    st.site = &y_emlrtRSI;
    idx = 0;
    *i_size = static_cast<int16_T>(nx);
    *j_size = static_cast<int16_T>(nx);
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
    if (idx > nx) {
      emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx == 1) {
      if (idx == 0) {
        *i_size = 0;
        *j_size = 0;
      }
    } else {
      if (1 > idx) {
        *i_size = 0;
      } else {
        *i_size = idx;
      }
      iv[0] = 1;
      iv[1] = *i_size;
      b_st.site = &bb_emlrtRSI;
      internal::indexShapeCheck(
          &b_st, static_cast<int32_T>(static_cast<int16_T>(nx)), iv);
      if (1 > idx) {
        *j_size = 0;
      } else {
        *j_size = idx;
      }
      iv[0] = 1;
      iv[1] = *j_size;
      b_st.site = &cb_emlrtRSI;
      internal::indexShapeCheck(
          &b_st, static_cast<int32_T>(static_cast<int16_T>(nx)), iv);
      iv[0] = 1;
      if (1 > idx) {
        iv[1] = 0;
      } else {
        iv[1] = idx;
      }
      b_st.site = &db_emlrtRSI;
      internal::indexShapeCheck(&b_st, nx, iv);
    }
  }
  if ((x_size[0] == 1) && (*i_size != 1)) {
    st.site = &ab_emlrtRSI;
    internal::warning(&st);
  }
}

void eml_find(const emlrtStack *sp, const boolean_T x_data[], int32_T x_size,
              int32_T i_data[], int32_T *i_size)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T iv[2];
  int32_T idx;
  int32_T ii;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  idx = 0;
  *i_size = x_size;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x_size - 1)) {
    if (x_data[ii]) {
      idx++;
      i_data[idx - 1] = ii + 1;
      if (idx >= x_size) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x_size) {
    emlrtErrorWithMessageIdR2018a(&st, &e_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x_size == 1) {
    if (idx == 0) {
      *i_size = 0;
    }
  } else {
    if (1 > idx) {
      *i_size = 0;
    } else {
      *i_size = idx;
    }
    iv[0] = 1;
    iv[1] = *i_size;
    b_st.site = &o_emlrtRSI;
    internal::indexShapeCheck(&b_st, x_size, iv);
  }
}

} // namespace coder

// End of code generation (find.cpp)
