//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// qrsolve.cpp
//
// Code generation for function 'qrsolve'
//

// Include files
#include "qrsolve.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "tensionCalculator3_data.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
<<<<<<< HEAD
static emlrtRSInfo rc_emlrtRSI{
    61,        // lineNo
    "qrsolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    72,        // lineNo
    "qrsolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    85,        // lineNo
    "qrsolve", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
=======
static emlrtRSInfo p_emlrtRSI{
    21,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/eml/"
    "eml_int_forloop_overflow_check.m" // pathName
};

static emlrtRSInfo
    ec_emlrtRSI{
        61,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    fc_emlrtRSI{
        72,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    gc_emlrtRSI{
        85,        // lineNo
        "qrsolve", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo hc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    63,       // lineNo
    "xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo vc_emlrtRSI{
=======
static emlrtRSInfo ic_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    98,             // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo wc_emlrtRSI{
=======
static emlrtRSInfo jc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    138,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo xc_emlrtRSI{
=======
static emlrtRSInfo kc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    141,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo yc_emlrtRSI{
=======
static emlrtRSInfo lc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    143,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo ad_emlrtRSI{
=======
static emlrtRSInfo mc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    148,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo bd_emlrtRSI{
=======
static emlrtRSInfo nc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    151,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo cd_emlrtRSI{
=======
static emlrtRSInfo oc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    154,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo dd_emlrtRSI{
=======
static emlrtRSInfo pc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    158,            // lineNo
    "ceval_xgeqp3", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo ed_emlrtRSI{
    173,          // lineNo
    "rankFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    172,          // lineNo
    "rankFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    119,         // lineNo
    "LSQFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    128,         // lineNo
    "LSQFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo id_emlrtRSI{
    138,         // lineNo
    "LSQFromQR", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
=======
static emlrtRSInfo
    qc_emlrtRSI{
        173,          // lineNo
        "rankFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    rc_emlrtRSI{
        172,          // lineNo
        "rankFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    sc_emlrtRSI{
        119,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    tc_emlrtRSI{
        128,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo
    uc_emlrtRSI{
        138,         // lineNo
        "LSQFromQR", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pathName
    };

static emlrtRSInfo vc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    31,         // lineNo
    "xunormqr", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

<<<<<<< HEAD
static emlrtRSInfo kd_emlrtRSI{
=======
static emlrtRSInfo wc_emlrtRSI{
>>>>>>> refs/remotes/origin/Pear-Branch
    102,              // lineNo
    "ceval_xunormqr", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xunormqr.m" // pathName
};

static emlrtMCInfo
    c_emlrtMCI{
        53,        // lineNo
        19,        // colNo
        "flt2str", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" // pName
    };

static emlrtRTEInfo db_emlrtRTEI{
    1,        // lineNo
    32,       // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    61,       // lineNo
    9,        // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    92,       // lineNo
    22,       // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    105,      // lineNo
    1,        // colNo
    "xgeqp3", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    97,       // lineNo
    5,        // colNo
    "xgeqp3", // fName
<<<<<<< HEAD
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeqp3.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    85,        // lineNo
    26,        // colNo
    "qrsolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    85,        // lineNo
    1,         // colNo
    "qrsolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    119,       // lineNo
    5,         // colNo
    "qrsolve", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m" // pName
};

static emlrtRSInfo md_emlrtRSI{
    53,        // lineNo
    "flt2str", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m" // pathName
};
=======
    "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/+lapack/"
    "xgeqp3.m" // pName
};

static emlrtRTEInfo
    eb_emlrtRTEI{
        85,        // lineNo
        26,        // colNo
        "qrsolve", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pName
    };

static emlrtRTEInfo
    fb_emlrtRTEI{
        85,        // lineNo
        1,         // colNo
        "qrsolve", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pName
    };

static emlrtRTEInfo
    gb_emlrtRTEI{
        119,       // lineNo
        5,         // colNo
        "qrsolve", // fName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "qrsolve.m" // pName
    };

static emlrtRSInfo
    yc_emlrtRSI{
        53,        // lineNo
        "flt2str", // fcnName
        "/Applications/MATLAB_R2021b.app/toolbox/eml/eml/+coder/+internal/"
        "flt2str.m" // pathName
    };
>>>>>>> refs/remotes/origin/Pear-Branch

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14]);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2]{1, 14};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *m1,
                                const mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 2, &pArrays[0],
                               (const char_T *)"sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_sprintf_,
                             const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId, char_T y[14])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

namespace coder {
namespace internal {
void qrsolve(const emlrtStack *sp, const ::coder::array<real_T, 2U> &A,
             const ::coder::array<real_T, 1U> &B, ::coder::array<real_T, 1U> &Y)
{
  static const int32_T iv[2]{1, 6};
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'm', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'q', 'p', '3'};
  static const char_T rfmt[6]{'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  array<ptrdiff_t, 1U> jpvt_t;
  array<real_T, 2U> b_A;
  array<real_T, 1U> b_B;
  array<real_T, 1U> tau;
  array<int32_T, 2U> jpvt;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T b_na;
  int32_T i;
  int32_T j;
  int32_T ma;
  int32_T minmana;
  int32_T minmn;
  int32_T na;
  char_T str[14];
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
<<<<<<< HEAD
  st.site = &rc_emlrtRSI;
  b_A.set_size(&db_emlrtRTEI, &st, A.size(0), A.size(1));
=======
  st.site = &ec_emlrtRSI;
  b_A.set_size(&y_emlrtRTEI, &st, A.size(0), A.size(1));
>>>>>>> refs/remotes/origin/Pear-Branch
  na = A.size(0) * A.size(1);
  for (i = 0; i < na; i++) {
    b_A[i] = A[i];
  }
  minmn = b_A.size(0);
  b_na = b_A.size(1);
  jpvt.set_size(&eb_emlrtRTEI, &st, 1, b_A.size(1));
  na = b_A.size(1);
  for (i = 0; i < na; i++) {
    jpvt[i] = 0;
  }
<<<<<<< HEAD
  b_st.site = &uc_emlrtRSI;
=======
  b_st.site = &hc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
  ma = b_A.size(0);
  na = b_A.size(1);
  minmana = muIntScalarMin_sint32(ma, na);
  tau.set_size(&fb_emlrtRTEI, &b_st, minmana);
  if ((b_A.size(0) == 0) || (b_A.size(1) == 0)) {
    tau.set_size(&hb_emlrtRTEI, &b_st, minmana);
    for (i = 0; i < minmana; i++) {
      tau[i] = 0.0;
    }
<<<<<<< HEAD
    c_st.site = &vc_emlrtRSI;
=======
    c_st.site = &ic_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
    if ((1 <= b_A.size(1)) && (b_A.size(1) > 2147483646)) {
      d_st.site = &p_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (ma = 0; ma < b_na; ma++) {
      jpvt[ma] = ma + 1;
    }
  } else {
    jpvt_t.set_size(&gb_emlrtRTEI, &b_st, b_A.size(1));
    na = b_A.size(1);
    for (i = 0; i < na; i++) {
      jpvt_t[i] = (ptrdiff_t)0;
    }
    info_t = LAPACKE_dgeqp3(102, (ptrdiff_t)b_A.size(0), (ptrdiff_t)b_A.size(1),
                            &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                            &(jpvt_t.data())[0], &(tau.data())[0]);
    na = (int32_T)info_t;
<<<<<<< HEAD
    c_st.site = &wc_emlrtRSI;
=======
    c_st.site = &jc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
    if (na != 0) {
      p = true;
      if (na != -4) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&c_st, &k_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(
              &c_st, &l_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
              "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
<<<<<<< HEAD
      c_st.site = &xc_emlrtRSI;
=======
      c_st.site = &kc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
      if ((1 <= b_na) && (b_na > 2147483646)) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (j = 0; j < b_na; j++) {
<<<<<<< HEAD
        c_st.site = &yc_emlrtRSI;
=======
        c_st.site = &lc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
        if ((1 <= minmn) && (minmn > 2147483646)) {
          d_st.site = &p_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }
        for (na = 0; na < minmn; na++) {
          b_A[j * ma + na] = rtNaN;
        }
      }
      minmn = muIntScalarMin_sint32(minmn, b_na);
<<<<<<< HEAD
      c_st.site = &ad_emlrtRSI;
=======
      c_st.site = &mc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
      for (ma = 0; ma < minmn; ma++) {
        tau[ma] = rtNaN;
      }
      na = minmn + 1;
<<<<<<< HEAD
      c_st.site = &bd_emlrtRSI;
=======
      c_st.site = &nc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
      if ((minmn + 1 <= minmana) && (minmana > 2147483646)) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = na; ma <= minmana; ma++) {
        tau[ma - 1] = 0.0;
      }
<<<<<<< HEAD
      c_st.site = &cd_emlrtRSI;
=======
      c_st.site = &oc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
      for (ma = 0; ma < b_na; ma++) {
        jpvt[ma] = ma + 1;
      }
    } else {
<<<<<<< HEAD
      c_st.site = &dd_emlrtRSI;
=======
      c_st.site = &pc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
      if ((1 <= b_na) && (b_na > 2147483646)) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (ma = 0; ma < b_na; ma++) {
        jpvt[ma] = (int32_T)jpvt_t[ma];
      }
    }
  }
<<<<<<< HEAD
  st.site = &sc_emlrtRSI;
=======
  st.site = &fc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
  ma = 0;
  tol = 0.0;
  if (b_A.size(0) < b_A.size(1)) {
    minmn = b_A.size(0);
    na = b_A.size(1);
  } else {
    minmn = b_A.size(1);
    na = b_A.size(0);
  }
  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * static_cast<real_T>(na)) *
          muDoubleScalarAbs(b_A[0]);
    while ((ma < minmn) &&
           (!(muDoubleScalarAbs(b_A[ma + b_A.size(0) * ma]) <= tol))) {
      ma++;
    }
  }
  if ((ma < minmn) && (!emlrtSetWarningFlag(&st))) {
<<<<<<< HEAD
    b_st.site = &ed_emlrtRSI;
=======
    b_st.site = &qc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
    y = nullptr;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = nullptr;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
<<<<<<< HEAD
    c_st.site = &md_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &c_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &fd_emlrtRSI;
    warning(&b_st, ma, str);
  }
  st.site = &tc_emlrtRSI;
  b_B.set_size(&ib_emlrtRTEI, &st, B.size(0));
=======
    c_st.site = &yc_emlrtRSI;
    emlrt_marshallIn(&c_st, b_sprintf(&c_st, y, b_y, &c_emlrtMCI),
                     "<output of sprintf>", str);
    b_st.site = &rc_emlrtRSI;
    warning(&b_st, ma, str);
  }
  st.site = &gc_emlrtRSI;
  b_B.set_size(&eb_emlrtRTEI, &st, B.size(0));
>>>>>>> refs/remotes/origin/Pear-Branch
  na = B.size(0);
  for (i = 0; i < na; i++) {
    b_B[i] = B[i];
  }
  Y.set_size(&jb_emlrtRTEI, &st, b_A.size(1));
  na = b_A.size(1);
  for (i = 0; i < na; i++) {
    Y[i] = 0.0;
  }
<<<<<<< HEAD
  b_st.site = &gd_emlrtRSI;
  c_st.site = &jd_emlrtRSI;
=======
  b_st.site = &sc_emlrtRSI;
  c_st.site = &vc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
  if ((b_A.size(0) != 0) && (b_A.size(1) != 0)) {
    info_t = (ptrdiff_t)b_B.size(0);
    i = b_A.size(0);
    minmn = b_A.size(1);
    info_t = LAPACKE_dormqr(102, 'L', 'T', info_t, (ptrdiff_t)1,
                            (ptrdiff_t)muIntScalarMin_sint32(i, minmn),
                            &(b_A.data())[0], (ptrdiff_t)b_A.size(0),
                            &(tau.data())[0], &(b_B.data())[0], info_t);
    na = (int32_T)info_t;
<<<<<<< HEAD
    d_st.site = &kd_emlrtRSI;
=======
    d_st.site = &wc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
    if (na != 0) {
      boolean_T b_p;
      p = true;
      b_p = false;
      if (na == -7) {
        b_p = true;
      } else if (na == -9) {
        b_p = true;
      } else if (na == -10) {
        b_p = true;
      }
      if (!b_p) {
        if (na == -1010) {
          emlrtErrorWithMessageIdR2018a(&d_st, &k_emlrtRTEI, "MATLAB:nomem",
                                        "MATLAB:nomem", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &l_emlrtRTEI,
                                        "Coder:toolbox:LAPACKCallErrorInfo",
                                        "Coder:toolbox:LAPACKCallErrorInfo", 5,
                                        4, 14, &b_fname[0], 12, na);
        }
      }
    } else {
      p = false;
    }
    if (p) {
      na = b_B.size(0);
      b_B.set_size(&kb_emlrtRTEI, &c_st, na);
      for (i = 0; i < na; i++) {
        b_B[i] = rtNaN;
      }
    }
  }
<<<<<<< HEAD
  b_st.site = &hd_emlrtRSI;
=======
  b_st.site = &tc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
  if ((1 <= ma) && (ma > 2147483646)) {
    c_st.site = &p_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (na = 0; na < ma; na++) {
    Y[jpvt[na] - 1] = b_B[na];
  }
  for (j = ma; j >= 1; j--) {
    i = jpvt[j - 1];
    Y[i - 1] = Y[i - 1] / b_A[(j + b_A.size(0) * (j - 1)) - 1];
<<<<<<< HEAD
    b_st.site = &id_emlrtRSI;
=======
    b_st.site = &uc_emlrtRSI;
>>>>>>> refs/remotes/origin/Pear-Branch
    for (na = 0; na <= j - 2; na++) {
      Y[jpvt[na] - 1] = Y[jpvt[na] - 1] -
                        Y[jpvt[j - 1] - 1] * b_A[na + b_A.size(0) * (j - 1)];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

} // namespace internal
} // namespace coder

// End of code generation (qrsolve.cpp)
