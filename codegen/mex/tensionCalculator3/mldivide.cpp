//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// mldivide.cpp
//
// Code generation for function 'mldivide'
//

// Include files
#include "mldivide.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo rb_emlrtRSI{
    20,         // lineNo
    "mldivide", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    42,      // lineNo
    "mldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    44,      // lineNo
    "mldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pathName
};

static emlrtRSInfo
    ub_emlrtRSI{
        67,        // lineNo
        "lusolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    vb_emlrtRSI{
        112,          // lineNo
        "lusolveNxN", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    wb_emlrtRSI{
        109,          // lineNo
        "lusolveNxN", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo
    xb_emlrtRSI{
        124,          // lineNo
        "InvAtimesX", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRSInfo yb_emlrtRSI{
    19,        // lineNo
    "xgetrfs", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo ac_emlrtRSI{
    108,      // lineNo
    "cmldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo bc_emlrtRSI{
    70,       // lineNo
    "cmldiv", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pathName
};

static emlrtRSInfo
    dc_emlrtRSI{
        90,              // lineNo
        "warn_singular", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "lusolve.m" // pathName
    };

static emlrtRTEInfo j_emlrtRTEI{
    16,         // lineNo
    19,         // colNo
    "mldivide", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    20,         // lineNo
    5,          // colNo
    "mldivide", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/mldivide.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    48,        // lineNo
    37,        // colNo
    "xgetrfs", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    70,        // lineNo
    23,        // colNo
    "xgetrfs", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgetrfs.m" // pName
};

// Function Definitions
namespace coder {
void mldivide(const emlrtStack *sp, const ::coder::array<real_T, 2U> &A,
              const ::coder::array<real_T, 1U> &B,
              ::coder::array<real_T, 1U> &Y)
{
  static const char_T fname[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 't', 'r', 'f',
                                '_', 'w', 'o', 'r', 'k'};
  array<ptrdiff_t, 1U> IPIV;
  array<real_T, 2U> b_A;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (B.size(0) != A.size(0)) {
    emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  st.site = &rb_emlrtRSI;
  if ((A.size(0) == 0) || (A.size(1) == 0) || (B.size(0) == 0)) {
    int32_T ma;
    Y.set_size(&v_emlrtRTEI, &st, A.size(1));
    ma = A.size(1);
    for (int32_T mb{0}; mb < ma; mb++) {
      Y[mb] = 0.0;
    }
  } else if (A.size(0) == A.size(1)) {
    ptrdiff_t LDA;
    ptrdiff_t N;
    int32_T ma;
    int32_T mb;
    int32_T na;
    b_st.site = &sb_emlrtRSI;
    c_st.site = &ub_emlrtRSI;
    Y.set_size(&v_emlrtRTEI, &c_st, B.size(0));
    ma = B.size(0);
    for (mb = 0; mb < ma; mb++) {
      Y[mb] = B[mb];
    }
    d_st.site = &wb_emlrtRSI;
    e_st.site = &xb_emlrtRSI;
    ma = A.size(0);
    na = A.size(1);
    mb = B.size(0);
    ma = muIntScalarMin_sint32(ma, na);
    na = muIntScalarMin_sint32(mb, ma);
    f_st.site = &yb_emlrtRSI;
    b_A.set_size(&w_emlrtRTEI, &f_st, A.size(0), A.size(1));
    ma = A.size(0) * A.size(1);
    for (mb = 0; mb < ma; mb++) {
      b_A[mb] = A[mb];
    }
    ptrdiff_t INFO;
    g_st.site = &bc_emlrtRSI;
    IPIV.set_size(&x_emlrtRTEI, &g_st, na);
    N = (ptrdiff_t)na;
    LDA = (ptrdiff_t)b_A.size(0);
    INFO = LAPACKE_dgetrf_work(102, N, N, &(b_A.data())[0], LDA,
                               &(IPIV.data())[0]);
    ma = (int32_T)INFO;
    g_st.site = &ac_emlrtRSI;
    if (ma < 0) {
      if (ma == -1010) {
        emlrtErrorWithMessageIdR2018a(&g_st, &k_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &g_st, &l_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &fname[0], 12, ma);
      }
    }
    LAPACKE_dgetrs_work(102, 'N', N, (ptrdiff_t)1, &(b_A.data())[0], LDA,
                        &(IPIV.data())[0], &(Y.data())[0],
                        (ptrdiff_t)B.size(0));
    if (((A.size(0) != 1) || (A.size(1) != 1)) && (ma > 0)) {
      d_st.site = &vb_emlrtRSI;
      if (!emlrtSetWarningFlag(&d_st)) {
        e_st.site = &dc_emlrtRSI;
        internal::b_warning(&e_st);
      }
    }
  } else {
    b_st.site = &tb_emlrtRSI;
    internal::qrsolve(&b_st, A, B, Y);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

} // namespace coder

// End of code generation (mldivide.cpp)
