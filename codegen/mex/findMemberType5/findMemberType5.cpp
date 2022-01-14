//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType5.cpp
//
// Code generation for function 'findMemberType5'
//

// Include files
#include "findMemberType5.h"
#include "findMemberType5_data.h"
#include "findMemberType5_internal_types.h"
#include "findMemberType5_types.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    14,                // lineNo
    "findMemberType5", // fcnName
    "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/findMemberType5.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    21,                // lineNo
    "findMemberType5", // fcnName
    "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/findMemberType5.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    23,                // lineNo
    "findMemberType5", // fcnName
    "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/findMemberType5.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    37,                // lineNo
    "findMemberType5", // fcnName
    "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/findMemberType5.m" // pathName
};

static emlrtRSInfo
    e_emlrtRSI{
        6,                     // lineNo
        "generateTrussTables", // fcnName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "generateTrussTables.m" // pathName
    };

static emlrtRSInfo
    f_emlrtRSI{
        17,                    // lineNo
        "generateTrussTables", // fcnName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "generateTrussTables.m" // pathName
    };

static emlrtRSInfo
    g_emlrtRSI{
        28,                    // lineNo
        "generateTrussTables", // fcnName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "generateTrussTables.m" // pathName
    };

static emlrtRSInfo
    h_emlrtRSI{
        30,                    // lineNo
        "generateTrussTables", // fcnName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "generateTrussTables.m" // pathName
    };

static emlrtRSInfo m_emlrtRSI{
    7,                          // lineNo
    "findCompressionStrengths", // fcnName
    "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
    "findCompressionStrengths.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    10,                         // lineNo
    "findCompressionStrengths", // fcnName
    "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
    "findCompressionStrengths.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    71,      // lineNo
    "power", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    19,                       // lineNo
    "tabular/parenReference", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    24,                       // lineNo
    "tabular/parenReference", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    49,                       // lineNo
    "tabular/parenReference", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    27,      // lineNo
    5,       // colNo
    "error", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" // pName
};

static emlrtRTEInfo emlrtRTEI{
    82,         // lineNo
    5,          // colNo
    "fltpower", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/ops/power.m" // pName
};

static emlrtBCInfo
    b_emlrtBCI{
        -1,                                 // iFirst
        -1,                                 // iLast
        46,                                 // lineNo
        69,                                 // colNo
        "posBeams.(\"Relative Strength\")", // aName
        "findMemberType5",                  // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    c_emlrtBCI{
        -1,                                 // iFirst
        -1,                                 // iLast
        32,                                 // lineNo
        69,                                 // colNo
        "posBeams.(\"Relative Strength\")", // aName
        "findMemberType5",                  // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    d_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        22,                // lineNo
        40,                // colNo
        "memberForces",    // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    e_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        21,                // lineNo
        60,                // colNo
        "memLenghths",     // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    f_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        18,                // lineNo
        18,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    g_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        39,                // lineNo
        22,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    h_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        45,                // lineNo
        22,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo i_emlrtBCI{
    0,                        // iFirst
    5,                        // iLast
    71,                       // lineNo
    53,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    33,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo
    k_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        25,                // lineNo
        22,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    l_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        31,                // lineNo
        22,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    m_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        17,                // lineNo
        21,                // colNo
        "memberForces",    // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    n_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        20,                // lineNo
        25,                // colNo
        "memberForces",    // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    o_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        36,                // lineNo
        36,                // colNo
        "memberForces",    // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    p_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        18,                // lineNo
        9,                 // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    q_emlrtBCI{
        -1,                     // iFirst
        -1,                     // iLast
        19,                     // lineNo
        30,                     // colNo
        "safteyFactor_Members", // aName
        "findMemberType5",      // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo r_emlrtBCI{
    0,                        // iFirst
    5,                        // iLast
    71,                       // lineNo
    41,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    41,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    25,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    71,                       // lineNo
    71,                       // colNo
    "",                       // aName
    "tabular/parenReference", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m", // pName
    0                                                     // checkKind
};

static emlrtBCInfo
    v_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        39,                // lineNo
        13,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    w_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        45,                // lineNo
        13,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    x_emlrtBCI{
        -1,                     // iFirst
        -1,                     // iLast
        40,                     // lineNo
        34,                     // colNo
        "safteyFactor_Members", // aName
        "findMemberType5",      // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    y_emlrtBCI{
        -1,                     // iFirst
        -1,                     // iLast
        46,                     // lineNo
        34,                     // colNo
        "safteyFactor_Members", // aName
        "findMemberType5",      // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    ab_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        25,                // lineNo
        13,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    bb_emlrtBCI{
        -1,                     // iFirst
        -1,                     // iLast
        26,                     // lineNo
        34,                     // colNo
        "safteyFactor_Members", // aName
        "findMemberType5",      // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    cb_emlrtBCI{
        -1,                // iFirst
        -1,                // iLast
        31,                // lineNo
        13,                // colNo
        "beamType",        // aName
        "findMemberType5", // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtBCInfo
    db_emlrtBCI{
        -1,                     // iFirst
        -1,                     // iLast
        32,                     // lineNo
        34,                     // colNo
        "safteyFactor_Members", // aName
        "findMemberType5",      // fName
        "/Users/liammobbs/MATLAB/Projects/Matlab-Truss-Solver/"
        "findMemberType5.m", // pName
        0                    // checkKind
    };

static emlrtRTEInfo c_emlrtRTEI{
    66,               // lineNo
    73,               // colNo
    "parenReference", // fName
    "/Applications/MATLAB_R2021b.app/toolbox/matlab/datatypes/codegen/tabular/"
    "+matlab/+internal/+coder/@tabular/parenReference.m" // pName
};

static emlrtRSInfo y_emlrtRSI{
    27,      // lineNo
    "error", // fcnName
    "/Applications/MATLAB_R2021b.app/toolbox/eml/lib/matlab/lang/error.m" // pathName
};

// Function Declarations
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location);

// Function Definitions
static void b_error(const emlrtStack *sp, const mxArray *m,
                    emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, nullptr, 1, &pArray,
                        (const char_T *)"error", true, location);
}

void findMemberType5(const emlrtStack *sp, const real_T memberForces_data[],
                     const int32_T memberForces_size[1],
                     cell_wrap_0 beamType_data[],
                     const int32_T beamType_size[1],
                     const real_T memLenghths_data[],
                     const int32_T memLenghths_size[1], real_T safteyFactor,
                     real_T safteyFactor_Members_data[],
                     int32_T safteyFactor_Members_size[1],
                     boolean_T *isPossible)
{
  static const real_T t0_f2[6]{
      1.0, 2.0, 2.28, 3.5999999999999996, 4.56, 7.1999999999999993};
  static const int32_T iv1[2]{1, 36};
  static const char_T varargin_1[36]{
      'S', 'a', 'f', 'e', 't', 'y', ' ', 'f', 'a', 'c', 't', 'o',
      'r', ' ', 'm', 'u', 's', 't', ' ', 'b', 'e', ' ', 'g', 'r',
      'e', 'a', 't', 'e', 'r', ' ', 't', 'h', 'a', 'n', ' ', '0'};
  static const char_T cv[10]{'T', 'y', 'p', 'e', ' ', '1', ' ', '*', ' ', '1'};
  static const char_T cv1[10]{'T', 'y', 'p', 'e', ' ', '1', ' ', '*', ' ', '2'};
  static const char_T cv2[10]{'T', 'y', 'p', 'e', ' ', '2', ' ', '*', ' ', '1'};
  static const char_T cv4[10]{'T', 'y', 'p', 'e', ' ', '3', ' ', '*', ' ', '1'};
  static const char_T cv6[10]{'T', 'y', 'p', 'e', ' ', '2', ' ', '*', ' ', '2'};
  static const char_T cv7[10]{'T', 'y', 'p', 'e', ' ', '3', ' ', '*', ' ', '2'};
  static const char_T cv3[6]{'T', 'y', 'p', 'e', ' ', '4'};
  static const char_T cv5[6]{'T', 'y', 'p', 'e', ' ', '5'};
  static const int8_T iv[6]{1, 2, 8, 26, 27, 56};
  coder::b_table compressionTable;
  coder::matlab::internal::coder::tabular::private_::varNamesDim ab_emlrtRSI;
  coder::table tensionTable;
  coder::array<cell_wrap_5, 1U> c_b_dataj;
  coder::array<cell_wrap_7, 1U> b_b_dataj;
  coder::array<real_T, 2U> numericRowIndices;
  cell_wrap_5 r;
  cell_wrap_5 r1;
  cell_wrap_5 r2;
  cell_wrap_5 r3;
  cell_wrap_5 r4;
  cell_wrap_5 r5;
  cell_wrap_7 r10;
  cell_wrap_7 r11;
  cell_wrap_7 r6;
  cell_wrap_7 r7;
  cell_wrap_7 r8;
  cell_wrap_7 r9;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T a__1;
  real_T numRowIndices;
  real_T tenStrengh;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  int8_T b_tmp_data[6];
  int8_T tmp_data[6];
  boolean_T rowIndices[6];
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  // findMemberType finds the required member to hold the force
  //    please refer to some form of oracle if you need to understand the mess
  //    I am about to write
  //  This is where normally beam type will be made, but God decleared that
  //  this isn't going to work today... or yesterday
  safteyFactor_Members_size[0] = memberForces_size[0];
  loop_ub = memberForces_size[0];
  if (0 <= loop_ub - 1) {
    std::memset(&safteyFactor_Members_data[0], 0, loop_ub * sizeof(real_T));
  }
  tenStrengh = 230.0 * safteyFactor;
  // N edit this if you need to adjust how much a tension member holds
  st.site = &emlrtRSI;
  // generateTrussTables Generates tables to be looked up for later
  // calculations
  //    Generates predetermined cost and relative strengh tables
  b_st.site = &e_emlrtRSI;
  r.f1.size[0] = 1;
  r.f1.size[1] = 10;
  r1.f1.size[0] = 1;
  r1.f1.size[1] = 10;
  r2.f1.size[0] = 1;
  r2.f1.size[1] = 10;
  for (i = 0; i < 10; i++) {
    r.f1.data[i] = cv[i];
    r1.f1.data[i] = cv1[i];
    r2.f1.data[i] = cv2[i];
  }
  r3.f1.size[0] = 1;
  r3.f1.size[1] = 6;
  for (i = 0; i < 6; i++) {
    r3.f1.data[i] = cv3[i];
  }
  r4.f1.size[0] = 1;
  r4.f1.size[1] = 10;
  for (i = 0; i < 10; i++) {
    r4.f1.data[i] = cv4[i];
  }
  r5.f1.size[0] = 1;
  r5.f1.size[1] = 6;
  for (i = 0; i < 6; i++) {
    r5.f1.data[i] = cv5[i];
  }
  compressionTable.data.f1[0] = r;
  compressionTable.data.f1[1] = r1;
  compressionTable.data.f1[2] = r2;
  compressionTable.data.f1[3] = r3;
  compressionTable.data.f1[4] = r4;
  compressionTable.data.f1[5] = r5;
  for (b_i = 0; b_i < 6; b_i++) {
    compressionTable.data.f2[b_i] = iv[b_i];
  }
  b_st.site = &f_emlrtRSI;
  for (i = 0; i < 10; i++) {
    r6.f1[i] = cv[i];
    r7.f1[i] = cv1[i];
    r8.f1[i] = cv2[i];
    r9.f1[i] = cv4[i];
    r10.f1[i] = cv6[i];
    r11.f1[i] = cv7[i];
  }
  tensionTable.data.f1[0] = r6;
  tensionTable.data.f1[1] = r7;
  tensionTable.data.f1[2] = r8;
  tensionTable.data.f1[3] = r9;
  tensionTable.data.f1[4] = r10;
  tensionTable.data.f1[5] = r11;
  for (b_i = 0; b_i < 6; b_i++) {
    tensionTable.data.f2[b_i] = t0_f2[b_i];
  }
  b_st.site = &g_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  *isPossible = true;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= memberForces_size[0] - 1)) {
    boolean_T guard1{false};
    if (b_i + 1 > memberForces_size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, memberForces_size[0],
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    guard1 = false;
    if (memberForces_data[b_i] == 0.0) {
      int32_T b_dataj;
      b_dataj = beamType_size[0] - 1;
      if (b_i > b_dataj) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &f_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      beamType_data[b_i].f1.size[0] = 1;
      if (b_i > b_dataj) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &f_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      beamType_data[b_i].f1.size[1] = 10;
      if (b_i > b_dataj) {
        emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &f_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      for (i = 0; i < 10; i++) {
        if (b_i > b_dataj) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &p_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        beamType_data[b_i].f1.data[i] = cv[i];
      }
      if (b_i + 1 > safteyFactor_Members_size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, safteyFactor_Members_size[0],
                                      &q_emlrtBCI, (emlrtCTX)sp);
      }
      safteyFactor_Members_data[b_i] = rtInf;
      guard1 = true;
    } else {
      if (b_i + 1 > memberForces_size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, memberForces_size[0],
                                      &n_emlrtBCI, (emlrtCTX)sp);
      }
      if (memberForces_data[b_i] < 0.0) {
        real_T eqivTypeOne;
        int32_T b_dataj;
        int32_T c_i;
        int32_T trueCount;
        st.site = &b_emlrtRSI;
        if (b_i + 1 > memLenghths_size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, memLenghths_size[0],
                                        &e_emlrtBCI, &st);
        }
        // findCompressionStrenghs takes in a load of lenghs, and optionally a
        // saftey multiplyer, then spits out the relative compression strengh
        //    Safteyfactor is a multiplicitve modifiey, is one by default, and
        //    must be greater than 0.
        b_st.site = &m_emlrtRSI;
        eqivTypeOne = 1000.0 * memLenghths_data[b_i];
        c_st.site = &o_emlrtRSI;
        if (eqivTypeOne < 0.0) {
          emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                        "Coder:toolbox:power_domainError",
                                        "Coder:toolbox:power_domainError", 0);
        }
        if (safteyFactor <= 0.0) {
          b_st.site = &n_emlrtRSI;
          y = nullptr;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&b_st, 36, m, &varargin_1[0]);
          emlrtAssign(&y, m);
          c_st.site = &y_emlrtRSI;
          b_error(&c_st, y, &emlrtMCI);
        }
        if (b_i + 1 > memberForces_size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, memberForces_size[0],
                                        &d_emlrtBCI, (emlrtCTX)sp);
        }
        eqivTypeOne = muDoubleScalarAbs(memberForces_data[b_i]) /
                      (758228.0 * muDoubleScalarPower(eqivTypeOne, -2.061) *
                       safteyFactor);
        st.site = &c_emlrtRSI;
        for (c_i = 0; c_i < 6; c_i++) {
          rowIndices[c_i] = (compressionTable.data.f2[c_i] > eqivTypeOne);
        }
        b_st.site = &p_emlrtRSI;
        coder::matlab::internal::coder::tabular::private_::rowNamesDim::
            subs2inds(&b_st, rowIndices, &numRowIndices, &a__1);
        b_st.site = &q_emlrtRSI;
        coder::matlab::internal::coder::tabular::private_::varNamesDim::
            subs2inds(&ab_emlrtRSI);
        b_st.site = &r_emlrtRSI;
        coder::matlab::internal::coder::tabular::private_::varNamesDim::
            logicalIndices2Numeric(&b_st, rowIndices, numericRowIndices);
        c_b_dataj.set_size(&c_emlrtRTEI, &st, numericRowIndices.size(1));
        i = numericRowIndices.size(1);
        for (c_i = 0; c_i < i; c_i++) {
          if (c_i + 1 > numericRowIndices.size(1)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, numericRowIndices.size(1),
                                          &u_emlrtBCI, &st);
          }
          trueCount = static_cast<int32_T>(numericRowIndices[c_i]) - 1;
          if ((trueCount < 0) || (trueCount > 5)) {
            emlrtDynamicBoundsCheckR2012b(trueCount, 0, 5, &i_emlrtBCI, &st);
          }
          if (c_i + 1 > numericRowIndices.size(1)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, numericRowIndices.size(1),
                                          &u_emlrtBCI, &st);
          }
          trueCount = static_cast<int32_T>(numericRowIndices[c_i]) - 1;
          if ((trueCount < 0) || (trueCount > 5)) {
            emlrtDynamicBoundsCheckR2012b(trueCount, 0, 5, &i_emlrtBCI, &st);
          }
          loop_ub = compressionTable.data
                        .f1[static_cast<int32_T>(numericRowIndices[c_i]) - 1]
                        .f1.size[1] -
                    1;
          if (c_i > c_b_dataj.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, c_b_dataj.size(0) - 1,
                                          &j_emlrtBCI, &st);
          }
          c_b_dataj[c_i].f1.size[0] = 1;
          if (c_i + 1 > numericRowIndices.size(1)) {
            emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, numericRowIndices.size(1),
                                          &u_emlrtBCI, &st);
          }
          trueCount = static_cast<int32_T>(numericRowIndices[c_i]) - 1;
          if ((trueCount < 0) || (trueCount > 5)) {
            emlrtDynamicBoundsCheckR2012b(trueCount, 0, 5, &i_emlrtBCI, &st);
          }
          if (c_i > c_b_dataj.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, c_b_dataj.size(0) - 1,
                                          &j_emlrtBCI, &st);
          }
          c_b_dataj[c_i].f1.size[1] =
              compressionTable.data
                  .f1[static_cast<int32_T>(numericRowIndices[c_i]) - 1]
                  .f1.size[1];
          trueCount = c_b_dataj.size(0);
          if (c_i > c_b_dataj.size(0) - 1) {
            emlrtDynamicBoundsCheckR2012b(c_i, 0, c_b_dataj.size(0) - 1,
                                          &j_emlrtBCI, &st);
          }
          for (int32_T i1{0}; i1 <= loop_ub; i1++) {
            if (c_i + 1 > numericRowIndices.size(1)) {
              emlrtDynamicBoundsCheckR2012b(
                  c_i + 1, 1, numericRowIndices.size(1), &s_emlrtBCI, &st);
            }
            b_dataj = static_cast<int32_T>(numericRowIndices[c_i]) - 1;
            if ((b_dataj < 0) || (b_dataj > 5)) {
              emlrtDynamicBoundsCheckR2012b(b_dataj, 0, 5, &r_emlrtBCI, &st);
            }
            if (c_i > trueCount - 1) {
              emlrtDynamicBoundsCheckR2012b(c_i, 0, trueCount - 1, &t_emlrtBCI,
                                            &st);
            }
            c_b_dataj[c_i].f1.data[i1] =
                compressionTable.data.f1[b_dataj].f1.data[i1];
          }
        }
        trueCount = 0;
        b_dataj = 0;
        for (c_i = 0; c_i < 6; c_i++) {
          if (rowIndices[c_i]) {
            trueCount++;
            b_tmp_data[b_dataj] = static_cast<int8_T>(c_i + 1);
            b_dataj++;
          }
        }
        if (c_b_dataj.size(0) == 0) {
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &k_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[0] = 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &k_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[1] = 6;
          b_dataj = beamType_size[0] - 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &k_emlrtBCI, (emlrtCTX)sp);
          }
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &k_emlrtBCI, (emlrtCTX)sp);
          }
          for (i = 0; i < 6; i++) {
            if (b_i > b_dataj) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &ab_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.data[i] = r5.f1.data[i];
          }
          if (b_i + 1 > safteyFactor_Members_size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                          safteyFactor_Members_size[0],
                                          &bb_emlrtBCI, (emlrtCTX)sp);
          }
          safteyFactor_Members_data[b_i] = 56.0 / eqivTypeOne;
          //  warning('Truss unable to hold load')
          *isPossible = false;
          exitg1 = true;
        } else {
          loop_ub = c_b_dataj[0].f1.size[1] - 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &l_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[0] = 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &l_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[1] = c_b_dataj[0].f1.size[1];
          b_dataj = beamType_size[0] - 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &l_emlrtBCI, (emlrtCTX)sp);
          }
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &l_emlrtBCI, (emlrtCTX)sp);
          }
          for (i = 0; i <= loop_ub; i++) {
            if (b_i > b_dataj) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &cb_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.data[i] = c_b_dataj[0].f1.data[i];
          }
          if (1 > trueCount) {
            emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &c_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i + 1 > safteyFactor_Members_size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                          safteyFactor_Members_size[0],
                                          &db_emlrtBCI, (emlrtCTX)sp);
          }
          safteyFactor_Members_data[b_i] =
              compressionTable.data.f2[b_tmp_data[0] - 1] / eqivTypeOne;
          guard1 = true;
        }
      } else {
        real_T eqivTypeOne;
        int32_T b_dataj;
        int32_T c_i;
        int32_T trueCount;
        if (b_i + 1 > memberForces_size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, memberForces_size[0],
                                        &o_emlrtBCI, (emlrtCTX)sp);
        }
        eqivTypeOne = memberForces_data[b_i] / tenStrengh;
        st.site = &d_emlrtRSI;
        for (c_i = 0; c_i < 6; c_i++) {
          rowIndices[c_i] = (t0_f2[c_i] > eqivTypeOne);
        }
        b_st.site = &p_emlrtRSI;
        coder::matlab::internal::coder::tabular::private_::rowNamesDim::
            subs2inds(&b_st, rowIndices, &numRowIndices, &a__1);
        b_st.site = &q_emlrtRSI;
        coder::matlab::internal::coder::tabular::private_::varNamesDim::
            subs2inds(&ab_emlrtRSI);
        b_st.site = &r_emlrtRSI;
        coder::matlab::internal::coder::tabular::private_::varNamesDim::
            logicalIndices2Numeric(&b_st, rowIndices, numericRowIndices);
        b_b_dataj.set_size(&c_emlrtRTEI, &st, numericRowIndices.size(1));
        i = numericRowIndices.size(1);
        for (c_i = 0; c_i < i; c_i++) {
          b_dataj = b_b_dataj.size(0) - 1;
          trueCount = static_cast<int32_T>(numericRowIndices[c_i]) - 1;
          for (int32_T i1{0}; i1 < 10; i1++) {
            if (c_i + 1 > numericRowIndices.size(1)) {
              emlrtDynamicBoundsCheckR2012b(
                  c_i + 1, 1, numericRowIndices.size(1), &s_emlrtBCI, &st);
            }
            if ((trueCount < 0) || (trueCount > 5)) {
              emlrtDynamicBoundsCheckR2012b(trueCount, 0, 5, &r_emlrtBCI, &st);
            }
            if (c_i > b_dataj) {
              emlrtDynamicBoundsCheckR2012b(c_i, 0, b_dataj, &t_emlrtBCI, &st);
            }
            b_b_dataj[c_i].f1[i1] = tensionTable.data.f1[trueCount].f1[i1];
          }
        }
        trueCount = 0;
        b_dataj = 0;
        for (c_i = 0; c_i < 6; c_i++) {
          if (rowIndices[c_i]) {
            trueCount++;
            tmp_data[b_dataj] = static_cast<int8_T>(c_i + 1);
            b_dataj++;
          }
        }
        if (b_b_dataj.size(0) == 0) {
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &g_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[0] = 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &g_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[1] = 10;
          b_dataj = beamType_size[0] - 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &g_emlrtBCI, (emlrtCTX)sp);
          }
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &g_emlrtBCI, (emlrtCTX)sp);
          }
          for (i = 0; i < 10; i++) {
            if (b_i > b_dataj) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &v_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.data[i] = r11.f1[i];
          }
          if (b_i + 1 > safteyFactor_Members_size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                          safteyFactor_Members_size[0],
                                          &x_emlrtBCI, (emlrtCTX)sp);
          }
          safteyFactor_Members_data[b_i] = 7.1999999999999993 / eqivTypeOne;
          //  warning('Truss unable to hold load')
          *isPossible = false;
          exitg1 = true;
        } else {
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &h_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[0] = 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &h_emlrtBCI, (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.size[1] = 10;
          b_dataj = beamType_size[0] - 1;
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &h_emlrtBCI, (emlrtCTX)sp);
          }
          i = beamType_size[0] - 1;
          if (b_i > i) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, i, &h_emlrtBCI, (emlrtCTX)sp);
          }
          for (i = 0; i < 10; i++) {
            if (b_i > b_dataj) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, b_dataj, &w_emlrtBCI,
                                            (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.data[i] = b_b_dataj[0].f1[i];
          }
          if (1 > trueCount) {
            emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &b_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          if (b_i + 1 > safteyFactor_Members_size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                          safteyFactor_Members_size[0],
                                          &y_emlrtBCI, (emlrtCTX)sp);
          }
          safteyFactor_Members_data[b_i] =
              tensionTable.data.f2[tmp_data[0] - 1] / eqivTypeOne;
          guard1 = true;
        }
      }
    }
    if (guard1) {
      b_i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtCTX)sp);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

// End of code generation (findMemberType5.cpp)
