//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType4.cpp
//
// Code generation for function 'findMemberType4'
//

// Include files
#include "findMemberType4.h"
#include "findMemberType4_data.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    13,                // lineNo
    "findMemberType4", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    20,                // lineNo
    "findMemberType4", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    22,                // lineNo
    "findMemberType4", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    36,                // lineNo
    "findMemberType4", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m" // pathName
};

static emlrtRSInfo
    e_emlrtRSI{
        6,                     // lineNo
        "generateTrussTables", // fcnName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\generateTrussTables.m" // pathName
    };

static emlrtRSInfo
    f_emlrtRSI{
        17,                    // lineNo
        "generateTrussTables", // fcnName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\generateTrussTables.m" // pathName
    };

static emlrtRSInfo
    g_emlrtRSI{
        28,                    // lineNo
        "generateTrussTables", // fcnName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\generateTrussTables.m" // pathName
    };

static emlrtRSInfo
    h_emlrtRSI{
        30,                    // lineNo
        "generateTrussTables", // fcnName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\generateTrussTables.m" // pathName
    };

static emlrtRSInfo i_emlrtRSI{
    211,           // lineNo
    "table/table", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\matlab\\datatypes\\codegen\\tabular\\+"
    "matlab\\+internal\\+coder\\@table\\table.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    7,                          // lineNo
    "findCompressionStrengths", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
    "Solver\\findCompressionStrengths.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    10,                         // lineNo
    "findCompressionStrengths", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
    "Solver\\findCompressionStrengths.m" // pathName
};

static emlrtRSInfo
    o_emlrtRSI{
        71,      // lineNo
        "power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

static emlrtMCInfo emlrtMCI{
    27,      // lineNo
    5,       // colNo
    "error", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pName
};

static emlrtRTEInfo
    emlrtRTEI{
        83,         // lineNo
        5,          // colNo
        "fltpower", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

static emlrtBCInfo emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    30,                           // lineNo
    50,                           // colNo
    "posBeams.(\"Member Type\")", // aName
    "findMemberType4",            // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    -1,                           // iFirst
    -1,                           // iLast
    44,                           // lineNo
    50,                           // colNo
    "posBeams.(\"Member Type\")", // aName
    "findMemberType4",            // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    45,                                 // lineNo
    69,                                 // colNo
    "posBeams.(\"Relative Strength\")", // aName
    "findMemberType4",                  // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                                 // iFirst
    -1,                                 // iLast
    31,                                 // lineNo
    69,                                 // colNo
    "posBeams.(\"Relative Strength\")", // aName
    "findMemberType4",                  // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    21,                // lineNo
    40,                // colNo
    "memberForces",    // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    20,                // lineNo
    60,                // colNo
    "memLenghths",     // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    17,                // lineNo
    18,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    38,                // lineNo
    22,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    44,                // lineNo
    22,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    24,                // lineNo
    22,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    30,                // lineNo
    22,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    16,                // lineNo
    8,                 // colNo
    "memberForces",    // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    19,                // lineNo
    12,                // colNo
    "memberForces",    // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    35,                // lineNo
    23,                // colNo
    "memberForces",    // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    17,                // lineNo
    9,                 // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    18,                     // lineNo
    9,                      // colNo
    "safteyFactor_Members", // aName
    "findMemberType4",      // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    38,                // lineNo
    13,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    44,                // lineNo
    13,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    39,                     // lineNo
    13,                     // colNo
    "safteyFactor_Members", // aName
    "findMemberType4",      // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    45,                     // lineNo
    13,                     // colNo
    "safteyFactor_Members", // aName
    "findMemberType4",      // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    24,                // lineNo
    13,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    25,                     // lineNo
    13,                     // colNo
    "safteyFactor_Members", // aName
    "findMemberType4",      // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                // iFirst
    -1,                // iLast
    30,                // lineNo
    13,                // colNo
    "beamType",        // aName
    "findMemberType4", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    31,                     // lineNo
    13,                     // colNo
    "safteyFactor_Members", // aName
    "findMemberType4",      // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", // pName
    0 // checkKind
};

static emlrtRSInfo y_emlrtRSI{
    27,      // lineNo
    "error", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\lang\\error.m" // pathName
};

// Function Declarations
static void error(const emlrtStack *sp, const mxArray *b,
                  emlrtMCInfo *location);

// Function Definitions
static void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b((emlrtCTX)sp, 0, nullptr, 1, &pArray,
                        (const char_T *)"error", true, location);
}

void findMemberType4(const emlrtStack *sp, const coder::e_table *edgesTable,
                     real_T safteyFactor, cell_wrap_6 beamType_data[],
                     int32_T beamType_size[1],
                     real_T safteyFactor_Members_data[],
                     int32_T safteyFactor_Members_size[1],
                     boolean_T *isPossible)
{
  static const real_T dv[6]{
      1.0, 2.0, 2.28, 3.5999999999999996, 4.56, 7.1999999999999993};
  static const int32_T iv3[2]{1, 36};
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
  static const int8_T iv1[6]{1, 2, 1, 1, 1, 1};
  static const int8_T iv2[6]{1, 2, 2, 3, 4, 6};
  coder::b_table b_posBeams;
  coder::c_table tensionTable;
  coder::d_table compressionTable;
  coder::table posBeams;
  cell_wrap_4 r10;
  cell_wrap_4 r11;
  cell_wrap_4 r6;
  cell_wrap_4 r7;
  cell_wrap_4 r8;
  cell_wrap_4 r9;
  cell_wrap_6 r;
  cell_wrap_6 r1;
  cell_wrap_6 r2;
  cell_wrap_6 r3;
  cell_wrap_6 r4;
  cell_wrap_6 r5;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *m;
  const mxArray *y;
  real_T tenStrengh;
  int32_T b_i;
  int32_T beamType;
  int32_T i;
  int32_T loop_ub;
  boolean_T b_tensionTable[6];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  covrtLogFcn(&emlrtCoverageInstance, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0, 0);
  // findMemberType finds the required member to hold the force
  //    please refer to some form of oracle if you need to understand the mess
  //    I am about to write
  beamType_size[0] = edgesTable->data.f2.size[0];
  i = edgesTable->data.f2.size[0];
  for (loop_ub = 0; loop_ub < i; loop_ub++) {
    beamType_data[loop_ub].f1.size[0] = 1;
    beamType_data[loop_ub].f1.size[1] = 10;
    for (beamType = 0; beamType < 10; beamType++) {
      beamType_data[loop_ub].f1.data[beamType] =
          edgesTable->data.f2.data[loop_ub].f1[beamType];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  safteyFactor_Members_size[0] = edgesTable->data.f3.size[0];
  loop_ub = edgesTable->data.f3.size[0];
  if (0 <= loop_ub - 1) {
    std::copy(&edgesTable->data.f3.data[0], &edgesTable->data.f3.data[loop_ub],
              &safteyFactor_Members_data[0]);
  }
  tenStrengh = 230.0 * safteyFactor;
  // N edit this if you need to adjust how much a tension member holds
  st.site = &emlrtRSI;
  covrtLogFcn(&emlrtCoverageInstance, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 1, 0);
  // generateTrussTables Generates tables to be looked up for later
  // calculations
  //    Generates predetermined cost and relative strengh tables
  b_st.site = &e_emlrtRSI;
  compressionTable.arrayProps.Description.size[0] = 1;
  compressionTable.arrayProps.Description.size[1] = 0;
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
  c_st.site = &i_emlrtRSI;
  compressionTable.varDim.hasUnits = false;
  compressionTable.varDim.units[0].f1.size[0] = 1;
  compressionTable.varDim.units[0].f1.size[1] = 0;
  compressionTable.varDim.units[1].f1.size[0] = 1;
  compressionTable.varDim.units[1].f1.size[1] = 0;
  compressionTable.varDim.units[2].f1.size[0] = 1;
  compressionTable.varDim.units[2].f1.size[1] = 0;
  compressionTable.varDim.hasDescrs = false;
  compressionTable.varDim.descrs[0].f1.size[0] = 1;
  compressionTable.varDim.descrs[0].f1.size[1] = 0;
  compressionTable.varDim.descrs[1].f1.size[0] = 1;
  compressionTable.varDim.descrs[1].f1.size[1] = 0;
  compressionTable.varDim.descrs[2].f1.size[0] = 1;
  compressionTable.varDim.descrs[2].f1.size[1] = 0;
  compressionTable.varDim.hasContinuity = false;
  compressionTable.varDim.continuity[0] =
      coder::matlab::internal::coder::tabular::unset;
  compressionTable.varDim.continuity[1] =
      coder::matlab::internal::coder::tabular::unset;
  compressionTable.varDim.continuity[2] =
      coder::matlab::internal::coder::tabular::unset;
  compressionTable.data.f1[0] = r;
  compressionTable.data.f1[1] = r1;
  compressionTable.data.f1[2] = r2;
  compressionTable.data.f1[3] = r3;
  compressionTable.data.f1[4] = r4;
  compressionTable.data.f1[5] = r5;
  for (b_i = 0; b_i < 6; b_i++) {
    compressionTable.data.f2[b_i] = iv[b_i];
    compressionTable.data.f3[b_i] = iv1[b_i];
  }
  b_st.site = &f_emlrtRSI;
  tensionTable.arrayProps.Description.size[0] = 1;
  tensionTable.arrayProps.Description.size[1] = 0;
  for (i = 0; i < 10; i++) {
    r6.f1[i] = cv[i];
    r7.f1[i] = cv1[i];
    r8.f1[i] = cv2[i];
    r9.f1[i] = cv4[i];
    r10.f1[i] = cv6[i];
    r11.f1[i] = cv7[i];
  }
  c_st.site = &i_emlrtRSI;
  tensionTable.rowDim = compressionTable.rowDim;
  tensionTable.varDim.hasUnits = false;
  tensionTable.varDim.units[0].f1.size[0] = 1;
  tensionTable.varDim.units[0].f1.size[1] = 0;
  tensionTable.varDim.units[1].f1.size[0] = 1;
  tensionTable.varDim.units[1].f1.size[1] = 0;
  tensionTable.varDim.units[2].f1.size[0] = 1;
  tensionTable.varDim.units[2].f1.size[1] = 0;
  tensionTable.varDim.hasDescrs = false;
  tensionTable.varDim.descrs[0].f1.size[0] = 1;
  tensionTable.varDim.descrs[0].f1.size[1] = 0;
  tensionTable.varDim.descrs[1].f1.size[0] = 1;
  tensionTable.varDim.descrs[1].f1.size[1] = 0;
  tensionTable.varDim.descrs[2].f1.size[0] = 1;
  tensionTable.varDim.descrs[2].f1.size[1] = 0;
  tensionTable.varDim.hasContinuity = false;
  tensionTable.varDim.continuity[0] =
      coder::matlab::internal::coder::tabular::unset;
  tensionTable.varDim.continuity[1] =
      coder::matlab::internal::coder::tabular::unset;
  tensionTable.varDim.continuity[2] =
      coder::matlab::internal::coder::tabular::unset;
  tensionTable.data.f1[0] = r6;
  tensionTable.data.f1[1] = r7;
  tensionTable.data.f1[2] = r8;
  tensionTable.data.f1[3] = r9;
  tensionTable.data.f1[4] = r10;
  tensionTable.data.f1[5] = r11;
  for (b_i = 0; b_i < 6; b_i++) {
    tensionTable.data.f2[b_i] = dv[b_i];
    tensionTable.data.f3[b_i] = iv2[b_i];
  }
  b_st.site = &g_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  b_st.site = &h_emlrtRSI;
  c_st.site = &i_emlrtRSI;
  *isPossible = true;
  b_i = 0;
  int32_T exitg1;
  do {
    exitg1 = 0;
    if (b_i <= edgesTable->data.f4.size[0] - 1) {
      boolean_T guard1{false};
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 1);
      if (b_i + 1 > edgesTable->data.f4.size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, edgesTable->data.f4.size[0],
                                      &l_emlrtBCI, (emlrtCTX)sp);
      }
      guard1 = false;
      if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 0,
                     edgesTable->data.f4.data[b_i] == 0.0)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0, 1);
        if (b_i > beamType_size[0] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                        &g_emlrtBCI, (emlrtCTX)sp);
        }
        beamType_data[b_i].f1.size[0] = 1;
        if (b_i > beamType_size[0] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                        &g_emlrtBCI, (emlrtCTX)sp);
        }
        beamType_data[b_i].f1.size[1] = 10;
        beamType = beamType_size[0] - 1;
        if (b_i > beamType_size[0] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                        &g_emlrtBCI, (emlrtCTX)sp);
        }
        if (b_i > beamType_size[0] - 1) {
          emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                        &g_emlrtBCI, (emlrtCTX)sp);
        }
        for (i = 0; i < 10; i++) {
          if (b_i > beamType) {
            emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType, &o_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          beamType_data[b_i].f1.data[i] = cv[i];
        }
        if (b_i + 1 > safteyFactor_Members_size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                        safteyFactor_Members_size[0],
                                        &p_emlrtBCI, (emlrtCTX)sp);
        }
        safteyFactor_Members_data[b_i] = rtInf;
        guard1 = true;
      } else {
        if (b_i + 1 > edgesTable->data.f4.size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, edgesTable->data.f4.size[0],
                                        &m_emlrtBCI, (emlrtCTX)sp);
        }
        if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 1,
                       edgesTable->data.f4.data[b_i] < 0.0)) {
          real_T eqivTypeOne;
          covrtLogBasicBlock(&emlrtCoverageInstance, 0, 2);
          st.site = &b_emlrtRSI;
          if (b_i + 1 > edgesTable->data.f5.size[0]) {
            emlrtDynamicBoundsCheckR2012b(
                b_i + 1, 1, edgesTable->data.f5.size[0], &f_emlrtBCI, &st);
          }
          covrtLogFcn(&emlrtCoverageInstance, 2, 0);
          covrtLogBasicBlock(&emlrtCoverageInstance, 2, 0);
          // findCompressionStrenghs takes in a load of lenghs, and optionally a
          // saftey multiplyer, then spits out the relative compression strengh
          //    Safteyfactor is a multiplicitve modifiey, is one by default, and
          //    must be greater than 0.
          b_st.site = &m_emlrtRSI;
          eqivTypeOne = 1000.0 * edgesTable->data.f5.data[b_i];
          c_st.site = &o_emlrtRSI;
          if (eqivTypeOne < 0.0) {
            emlrtErrorWithMessageIdR2018a(&c_st, &emlrtRTEI,
                                          "Coder:toolbox:power_domainError",
                                          "Coder:toolbox:power_domainError", 0);
          }
          covrtLogIf(&emlrtCoverageInstance, 2, 0, 0, true);
          if (covrtLogIf(&emlrtCoverageInstance, 2, 0, 1,
                         safteyFactor <= 0.0)) {
            b_st.site = &n_emlrtRSI;
            y = nullptr;
            m = emlrtCreateCharArray(2, &iv3[0]);
            emlrtInitCharArrayR2013a(&b_st, 36, m, &varargin_1[0]);
            emlrtAssign(&y, m);
            c_st.site = &y_emlrtRSI;
            error(&c_st, y, &emlrtMCI);
          }
          covrtLogBasicBlock(&emlrtCoverageInstance, 2, 1);
          if (b_i + 1 > edgesTable->data.f4.size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                          edgesTable->data.f4.size[0],
                                          &e_emlrtBCI, (emlrtCTX)sp);
          }
          eqivTypeOne = muDoubleScalarAbs(edgesTable->data.f4.data[b_i]) /
                        (758228.0 * muDoubleScalarPower(eqivTypeOne, -2.061) *
                         safteyFactor);
          for (i = 0; i < 6; i++) {
            b_tensionTable[i] = (compressionTable.data.f2[i] > eqivTypeOne);
          }
          st.site = &c_emlrtRSI;
          compressionTable.parenReference(&st, b_tensionTable, &b_posBeams);
          if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 2,
                         b_posBeams.data.f1.size(0) == 0)) {
            covrtLogBasicBlock(&emlrtCoverageInstance, 0, 3);
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &j_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[0] = 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &j_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[1] = 6;
            beamType = beamType_size[0] - 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &j_emlrtBCI, (emlrtCTX)sp);
            }
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &j_emlrtBCI, (emlrtCTX)sp);
            }
            for (i = 0; i < 6; i++) {
              if (b_i > beamType) {
                emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType, &u_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              beamType_data[b_i].f1.data[i] = r5.f1.data[i];
            }
            if (b_i + 1 > safteyFactor_Members_size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                            safteyFactor_Members_size[0],
                                            &v_emlrtBCI, (emlrtCTX)sp);
            }
            safteyFactor_Members_data[b_i] = 56.0 / eqivTypeOne;
            //  warning('Truss unable to hold load')
            *isPossible = false;
            exitg1 = 1;
          } else {
            covrtLogBasicBlock(&emlrtCoverageInstance, 0, 4);
            if (0 > b_posBeams.data.f1.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(0, 0,
                                            b_posBeams.data.f1.size(0) - 1,
                                            &emlrtBCI, (emlrtCTX)sp);
            }
            loop_ub = b_posBeams.data.f1[0].f1.size[1] - 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &k_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[0] = 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &k_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[1] = b_posBeams.data.f1[0].f1.size[1];
            beamType = beamType_size[0] - 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &k_emlrtBCI, (emlrtCTX)sp);
            }
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &k_emlrtBCI, (emlrtCTX)sp);
            }
            for (i = 0; i <= loop_ub; i++) {
              if (b_i > beamType) {
                emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType, &w_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              beamType_data[b_i].f1.data[i] = b_posBeams.data.f1[0].f1.data[i];
            }
            if (1 > b_posBeams.data.f2.size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, b_posBeams.data.f2.size[0],
                                            &d_emlrtBCI, (emlrtCTX)sp);
            }
            if (b_i + 1 > safteyFactor_Members_size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                            safteyFactor_Members_size[0],
                                            &x_emlrtBCI, (emlrtCTX)sp);
            }
            safteyFactor_Members_data[b_i] =
                b_posBeams.data.f2.data[0] / eqivTypeOne;
            guard1 = true;
          }
        } else {
          real_T eqivTypeOne;
          covrtLogBasicBlock(&emlrtCoverageInstance, 0, 5);
          if (b_i + 1 > edgesTable->data.f4.size[0]) {
            emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                          edgesTable->data.f4.size[0],
                                          &n_emlrtBCI, (emlrtCTX)sp);
          }
          eqivTypeOne = edgesTable->data.f4.data[b_i] / tenStrengh;
          for (i = 0; i < 6; i++) {
            b_tensionTable[i] = (tensionTable.data.f2[i] > eqivTypeOne);
          }
          st.site = &d_emlrtRSI;
          tensionTable.parenReference(&st, b_tensionTable, &posBeams);
          if (covrtLogIf(&emlrtCoverageInstance, 0, 0, 3,
                         posBeams.data.f1.size(0) == 0)) {
            covrtLogBasicBlock(&emlrtCoverageInstance, 0, 6);
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &h_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[0] = 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &h_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[1] = 10;
            beamType = beamType_size[0] - 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &h_emlrtBCI, (emlrtCTX)sp);
            }
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &h_emlrtBCI, (emlrtCTX)sp);
            }
            for (i = 0; i < 10; i++) {
              if (b_i > beamType) {
                emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType, &q_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              beamType_data[b_i].f1.data[i] = r11.f1[i];
            }
            if (b_i + 1 > safteyFactor_Members_size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                            safteyFactor_Members_size[0],
                                            &s_emlrtBCI, (emlrtCTX)sp);
            }
            safteyFactor_Members_data[b_i] = 7.1999999999999993 / eqivTypeOne;
            //  warning('Truss unable to hold load')
            *isPossible = false;
            exitg1 = 1;
          } else {
            covrtLogBasicBlock(&emlrtCoverageInstance, 0, 7);
            if (0 > posBeams.data.f1.size(0) - 1) {
              emlrtDynamicBoundsCheckR2012b(0, 0, posBeams.data.f1.size(0) - 1,
                                            &b_emlrtBCI, (emlrtCTX)sp);
            }
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &i_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[0] = 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &i_emlrtBCI, (emlrtCTX)sp);
            }
            beamType_data[b_i].f1.size[1] = 10;
            beamType = beamType_size[0] - 1;
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &i_emlrtBCI, (emlrtCTX)sp);
            }
            if (b_i > beamType_size[0] - 1) {
              emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType_size[0] - 1,
                                            &i_emlrtBCI, (emlrtCTX)sp);
            }
            for (i = 0; i < 10; i++) {
              if (b_i > beamType) {
                emlrtDynamicBoundsCheckR2012b(b_i, 0, beamType, &r_emlrtBCI,
                                              (emlrtCTX)sp);
              }
              beamType_data[b_i].f1.data[i] = posBeams.data.f1[0].f1[i];
            }
            if (1 > posBeams.data.f2.size[0]) {
              emlrtDynamicBoundsCheckR2012b(1, 1, posBeams.data.f2.size[0],
                                            &c_emlrtBCI, (emlrtCTX)sp);
            }
            if (b_i + 1 > safteyFactor_Members_size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1,
                                            safteyFactor_Members_size[0],
                                            &t_emlrtBCI, (emlrtCTX)sp);
            }
            safteyFactor_Members_data[b_i] =
                posBeams.data.f2.data[0] / eqivTypeOne;
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
    } else {
      covrtLogFor(&emlrtCoverageInstance, 0, 0, 0, 0);
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

// End of code generation (findMemberType4.cpp)
