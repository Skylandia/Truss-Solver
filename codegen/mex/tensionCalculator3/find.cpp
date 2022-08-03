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
#include "eml_int_forloop_overflow_check.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"
#include "warning.h"
#include "coder_array.h"

// Variable Definitions
static emlrtRSInfo m_emlrtRSI{
    144,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    382,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    402,                  // lineNo
    "find_first_indices", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    138,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    158,        // lineNo
    "eml_find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    253,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    254,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    255,                           // lineNo
    "find_first_nonempty_triples", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRTEInfo f_emlrtRTEI{
    392,                  // lineNo
    1,                    // colNo
    "find_first_indices", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo h_emlrtRTEI{
    239,                           // lineNo
    1,                             // colNo
    "find_first_nonempty_triples", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    369,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    144,    // lineNo
    9,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    195,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    197,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    199,    // lineNo
    24,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    253,    // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    254,    // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    247,    // lineNo
    17,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    248,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo sb_emlrtRTEI{
    133,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo tb_emlrtRTEI{
    134,    // lineNo
    13,     // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

// Function Definitions
namespace coder {
void b_eml_find(const emlrtStack *sp, const ::coder::array<boolean_T, 2U> &x,
                ::coder::array<int32_T, 1U> &i, ::coder::array<int32_T, 1U> &j)
{
  array<boolean_T, 1U> v;
  emlrtStack b_st;
  emlrtStack st;
  int32_T nx;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  nx = x.size(0) << 1;
  if (nx == 0) {
    i.set_size(&sb_emlrtRTEI, sp, 0);
    j.set_size(&tb_emlrtRTEI, sp, 0);
  } else {
    int32_T idx;
    int32_T ii;
    int32_T jj;
    boolean_T exitg1;
    st.site = &hb_emlrtRSI;
    idx = 0;
    i.set_size(&lb_emlrtRTEI, &st, nx);
    j.set_size(&mb_emlrtRTEI, &st, nx);
    v.set_size(&nb_emlrtRTEI, &st, nx);
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= 2)) {
      boolean_T guard1{false};
      guard1 = false;
      if (x[(ii + x.size(0) * (jj - 1)) - 1]) {
        idx++;
        i[idx - 1] = ii;
        j[idx - 1] = jj;
        v[idx - 1] = x[(ii + x.size(0) * (jj - 1)) - 1];
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
        if (ii > x.size(0)) {
          ii = 1;
          jj++;
        }
      }
    }
    if (idx > nx) {
      emlrtErrorWithMessageIdR2018a(&st, &h_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (nx == 1) {
      if (idx == 0) {
        i.set_size(&qb_emlrtRTEI, &st, 0);
        j.set_size(&rb_emlrtRTEI, &st, 0);
      }
    } else {
      int32_T iv[2];
      if (idx < 1) {
        nx = 0;
      } else {
        nx = idx;
      }
      iv[0] = 1;
      iv[1] = nx;
      b_st.site = &jb_emlrtRSI;
      internal::indexShapeCheck(&b_st, i.size(0), iv);
      i.set_size(&ob_emlrtRTEI, &st, nx);
      if (idx < 1) {
        nx = 0;
      } else {
        nx = idx;
      }
      iv[0] = 1;
      iv[1] = nx;
      b_st.site = &kb_emlrtRSI;
      internal::indexShapeCheck(&b_st, j.size(0), iv);
      j.set_size(&pb_emlrtRTEI, &st, nx);
      iv[0] = 1;
      if (idx < 1) {
        iv[1] = 0;
      } else {
        iv[1] = idx;
      }
      b_st.site = &lb_emlrtRSI;
      internal::indexShapeCheck(&b_st, v.size(0), iv);
    }
  }
  if ((x.size(0) == 1) && (i.size(0) != 1)) {
    st.site = &ib_emlrtRSI;
    internal::warning(&st);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void eml_find(const emlrtStack *sp, const ::coder::array<boolean_T, 1U> &x,
              ::coder::array<int32_T, 1U> &i)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T idx;
  int32_T ii;
  int32_T nx;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x.size(0);
  st.site = &m_emlrtRSI;
  idx = 0;
  i.set_size(&jb_emlrtRTEI, &st, x.size(0));
  b_st.site = &n_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x[ii]) {
      idx++;
      i[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (idx > x.size(0)) {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (x.size(0) == 1) {
    if (idx == 0) {
      i.set_size(&kb_emlrtRTEI, &st, 0);
    }
  } else {
    int32_T iv[2];
    if (idx < 1) {
      nx = 0;
    } else {
      nx = idx;
    }
    iv[0] = 1;
    iv[1] = nx;
    b_st.site = &o_emlrtRSI;
    internal::indexShapeCheck(&b_st, i.size(0), iv);
    i.set_size(&kb_emlrtRTEI, &st, nx);
  }
}

} // namespace coder

// End of code generation (find.cpp)
