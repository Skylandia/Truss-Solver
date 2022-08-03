//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tensionCalculator3.cpp
//
// Code generation for function 'tensionCalculator3'
//

// Include files
#include "tensionCalculator3.h"
#include "diag.h"
#include "div.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "flipud.h"
#include "mldivide.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "tensionCalculator3_data.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include "omp.h"

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    11,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    12,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    13,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    51,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    52,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    53,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    56,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    60,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    61,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    62,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    73,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pathName
};

static emlrtRSInfo
    s_emlrtRSI{
        44,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    t_emlrtRSI{
        79,        // lineNo
        "maximum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo u_emlrtRSI{
    191,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    902,                    // lineNo
    "maxRealVectorOmitNaN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    72,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    64,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    113,         // lineNo
    "findFirst", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    130,                        // lineNo
    "minOrMaxRealVectorKernel", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

static emlrtRSInfo
    cb_emlrtRSI{
        46,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    db_emlrtRSI{
        92,        // lineNo
        "minimum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo eb_emlrtRSI{
    209,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    898,                    // lineNo
    "minRealVectorOmitNaN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    35,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    26,    // lineNo
    "cat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    100,        // lineNo
    "cat_impl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    51,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

static emlrtDCInfo emlrtDCI{
    45,                   // lineNo
    12,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtRTEInfo b_emlrtRTEI{
    45,                   // lineNo
    10,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtECInfo emlrtECI{
    -1,                   // nDims
    64,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtECInfo b_emlrtECI{
    -1,                   // nDims
    65,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtBCInfo emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    66,                   // lineNo
    20,                   // colNo
    "xEquationArray",     // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtECInfo c_emlrtECI{
    -1,                   // nDims
    66,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtBCInfo b_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    71,                   // lineNo
    63,                   // colNo
    "xEquationArray",     // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    71,                   // lineNo
    67,                   // colNo
    "xEquationArray",     // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    67,                   // lineNo
    20,                   // colNo
    "yEquationArray",     // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtECInfo d_emlrtECI{
    -1,                   // nDims
    67,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    72,                   // lineNo
    63,                   // colNo
    "yEquationArray",     // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    72,                   // lineNo
    67,                   // colNo
    "yEquationArray",     // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    37,                   // lineNo
    27,                   // colNo
    "pinNode",            // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    38,                   // lineNo
    30,                   // colNo
    "rollerNode",         // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    41,                   // lineNo
    27,                   // colNo
    "pinNode",            // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    71,                   // lineNo
    19,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    71,                   // lineNo
    23,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    71,                   // lineNo
    34,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    71,                   // lineNo
    36,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtECInfo e_emlrtECI{
    -1,                   // nDims
    71,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtBCInfo n_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    72,                   // lineNo
    19,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    72,                   // lineNo
    23,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo p_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    72,                   // lineNo
    34,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo q_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    72,                   // lineNo
    36,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtECInfo f_emlrtECI{
    -1,                   // nDims
    72,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtBCInfo r_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    14,                   // lineNo
    21,                   // colNo
    "baseIndx",           // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtRTEInfo c_emlrtRTEI{
    275,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    135,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

static emlrtBCInfo s_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    34,                   // lineNo
    12,                   // colNo
    "forceArray",         // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    34,                   // lineNo
    12,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo c_emlrtDCI{
    17,                   // lineNo
    25,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    17,                   // lineNo
    25,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    4      // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    17,                   // lineNo
    36,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    17,                   // lineNo
    36,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    4      // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    47,                   // lineNo
    21,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    48,                   // lineNo
    21,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtBCInfo t_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    12,                   // lineNo
    24,                   // colNo
    "nodesX",             // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    13,                   // lineNo
    24,                   // colNo
    "nodesX",             // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    14,                   // lineNo
    28,                   // colNo
    "nodesX",             // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    15,                   // lineNo
    25,                   // colNo
    "nodesX",             // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    15,                   // lineNo
    18,                   // colNo
    "baseIndx",           // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    17,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    17,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    4      // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    19,                   // lineNo
    24,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo l_emlrtDCI{
    19,                   // lineNo
    24,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    4      // checkKind
};

static emlrtDCInfo m_emlrtDCI{
    19,                   // lineNo
    33,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    19,                   // lineNo
    33,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    4      // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    20,                   // lineNo
    24,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    20,                   // lineNo
    33,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo q_emlrtDCI{
    33,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    37,                   // lineNo
    19,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    37,                   // lineNo
    33,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    38,                   // lineNo
    19,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    38,                   // lineNo
    35,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    41,                   // lineNo
    19,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    41,                   // lineNo
    34,                   // colNo
    "nodeEquationArray",  // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    47,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    48,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    52,                   // lineNo
    29,                   // colNo
    "endNodes",           // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    54,                   // lineNo
    23,                   // colNo
    "endNodes",           // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    58,                   // lineNo
    36,                   // colNo
    "yVectorLoop",        // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    58,                   // lineNo
    19,                   // colNo
    "yVectorLoop",        // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    58,                   // lineNo
    19,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    1      // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    59,                   // lineNo
    36,                   // colNo
    "xVectorLoop",        // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    59,                   // lineNo
    19,                   // colNo
    "xVectorLoop",        // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    64,                   // lineNo
    13,                   // colNo
    "tempX",              // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                   // iFirst
    -1,                   // iLast
    65,                   // lineNo
    13,                   // colNo
    "tempY",              // aName
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m", // pName
    0      // checkKind
};

static emlrtRTEInfo j_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    11,                   // lineNo
    15,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    1,                    // lineNo
    27,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    17,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    19,                   // lineNo
    18,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    20,                   // lineNo
    18,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    33,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    47,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    48,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo x_emlrtRTEI{
    51,                   // lineNo
    20,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo y_emlrtRTEI{
    36,     // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    52,                   // lineNo
    20,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    37,     // lineNo
    5,      // colNo
    "find", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    54,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    58,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    59,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    297,   // lineNo
    14,    // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo
    gb_emlrtRTEI{
        31,            // lineNo
        30,            // colNo
        "unsafeSxfun", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unsafeSxfun.m" // pName
    };

static emlrtRTEInfo hb_emlrtRTEI{
    64,                   // lineNo
    13,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    65,                   // lineNo
    13,                   // colNo
    "tensionCalculator3", // fName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pName
};

static emlrtRSInfo id_emlrtRSI{
    52,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    71,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    72,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:"
    "\\Users\\Mack\\OneDrive\\Documents\\MATLAB\\trussSolver\\tensionCalculator"
    "3.m" // pathName
};

// Function Declarations
static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator);

// Function Definitions
static int32_T div_s32(const emlrtStack *sp, int32_T numerator,
                       int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(nullptr, (emlrtCTX)sp);
  } else {
    uint32_T b_denominator;
    uint32_T b_numerator;
    if (numerator < 0) {
      b_numerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      b_numerator = static_cast<uint32_T>(numerator);
    }
    if (denominator < 0) {
      b_denominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      b_denominator = static_cast<uint32_T>(denominator);
    }
    b_numerator /= b_denominator;
    if ((numerator < 0) != (denominator < 0)) {
      quotient = -static_cast<int32_T>(b_numerator);
    } else {
      quotient = static_cast<int32_T>(b_numerator);
    }
  }
  return quotient;
}

emlrtCTX emlrtGetRootTLSGlobal()
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void tensionCalculator3(const emlrtStack *sp,
                        const coder::array<real_T, 1U> &nodesX,
                        const coder::array<real_T, 1U> &nodesY, real_T numNodes,
                        real_T numEdges,
                        const coder::array<real_T, 2U> &endNodes,
                        real_T weightMagnitude, real_T weightNode,
                        coder::array<real_T, 1U> &tensionArray)
{
  coder::array<real_T, 2U> nodeEquationArray;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> refArray;
  coder::array<real_T, 2U> tempX;
  coder::array<real_T, 2U> tempY;
  coder::array<real_T, 2U> x;
  coder::array<real_T, 2U> xEquationArray;
  coder::array<real_T, 2U> yEquationArray;
  coder::array<real_T, 1U> b_x;
  coder::array<real_T, 1U> forceArray;
  coder::array<real_T, 1U> n;
  coder::array<real_T, 1U> y;
  coder::array<int32_T, 1U> b_ii;
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> jj;
  coder::array<int32_T, 1U> r;
  coder::array<int32_T, 1U> row;
  coder::array<uint32_T, 1U> pinNode;
  coder::array<boolean_T, 2U> b_endNodes;
  coder::array<boolean_T, 1U> b_nodesY;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack l_st;
  emlrtStack m_st;
  emlrtStack st;
  real_T d;
  real_T d1;
  real_T maximum;
  real_T minimum;
  real_T varargin_1;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T iv2[2];
  int32_T a;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T loop_ub;
  uint32_T u;
  boolean_T emlrtHadParallelError{false};
  boolean_T exitg1;
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
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  // Calculates all the Tension(+) and compression(-) forces in every member
  // and enters them into the 'Force in Member' column in the trussGraph table
  //    trussGraph: must be created by GenerateTrussGraph
  //    weightMagnitude: is a scalar, this is the weight on both trusses
  //    weightNode: is the node number in the trussGraph at which the weight is
  //    placed
  //  Locations of pin and roller nodes, pin is the left node and roller is the
  //  right
  st.site = &emlrtRSI;
  b_nodesY.set_size(&p_emlrtRTEI, &st, nodesY.size(0));
  last = nodesY.size(0);
  for (i = 0; i < last; i++) {
    b_nodesY[i] = (nodesY[i] == 0.0);
  }
  b_st.site = &l_emlrtRSI;
  coder::eml_find(&b_st, b_nodesY, ii);
  st.site = &b_emlrtRSI;
  last = ii.size(0);
  for (i = 0; i < last; i++) {
    i1 = ii[i];
    if ((i1 < 1) || (i1 > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX.size(0), &t_emlrtBCI, &st);
    }
  }
  b_st.site = &r_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  if (ii.size(0) < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  e_st.site = &u_emlrtRSI;
  f_st.site = &v_emlrtRSI;
  last = ii.size(0);
  if (ii.size(0) <= 2) {
    if (ii.size(0) == 1) {
      maximum = nodesX[ii[0] - 1];
    } else {
      d = nodesX[ii[1] - 1];
      maximum = nodesX[ii[0] - 1];
      if ((maximum < d) || (muDoubleScalarIsNaN(nodesX[ii[0] - 1]) &&
                            (!muDoubleScalarIsNaN(d)))) {
        maximum = d;
      }
    }
  } else {
    g_st.site = &x_emlrtRSI;
    maximum = nodesX[ii[0] - 1];
    if (!muDoubleScalarIsNaN(maximum)) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &y_emlrtRSI;
      if (ii.size(0) > 2147483646) {
        i_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(nodesX[ii[k - 1] - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx != 0) {
      g_st.site = &w_emlrtRSI;
      maximum = nodesX[ii[idx - 1] - 1];
      a = idx + 1;
      h_st.site = &ab_emlrtRSI;
      if ((idx + 1 <= ii.size(0)) && (ii.size(0) > 2147483646)) {
        i_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        d = nodesX[ii[k - 1] - 1];
        if (maximum < d) {
          maximum = d;
        }
      }
    }
  }
  st.site = &c_emlrtRSI;
  last = ii.size(0);
  for (i = 0; i < last; i++) {
    i1 = ii[i];
    if ((i1 < 1) || (i1 > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX.size(0), &u_emlrtBCI, &st);
    }
  }
  b_st.site = &bb_emlrtRSI;
  c_st.site = &cb_emlrtRSI;
  d_st.site = &db_emlrtRSI;
  e_st.site = &eb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  last = ii.size(0);
  if (ii.size(0) <= 2) {
    if (ii.size(0) == 1) {
      minimum = nodesX[ii[0] - 1];
    } else {
      d = nodesX[ii[1] - 1];
      minimum = nodesX[ii[0] - 1];
      if ((minimum > d) || (muDoubleScalarIsNaN(nodesX[ii[0] - 1]) &&
                            (!muDoubleScalarIsNaN(nodesX[ii[1] - 1])))) {
        minimum = d;
      }
    }
  } else {
    g_st.site = &x_emlrtRSI;
    if (!muDoubleScalarIsNaN(nodesX[ii[0] - 1])) {
      idx = 1;
    } else {
      idx = 0;
      h_st.site = &y_emlrtRSI;
      if (ii.size(0) > 2147483646) {
        i_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!muDoubleScalarIsNaN(nodesX[ii[k - 1] - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      minimum = nodesX[ii[0] - 1];
    } else {
      g_st.site = &w_emlrtRSI;
      minimum = nodesX[ii[idx - 1] - 1];
      a = idx + 1;
      h_st.site = &ab_emlrtRSI;
      if ((idx + 1 <= ii.size(0)) && (ii.size(0) > 2147483646)) {
        i_st.site = &p_emlrtRSI;
        coder::check_forloop_overflow_error(&i_st);
      }
      for (k = a; k <= last; k++) {
        d = nodesX[ii[k - 1] - 1];
        if (minimum > d) {
          minimum = d;
        }
      }
    }
  }
  last = ii.size(0);
  for (i = 0; i < last; i++) {
    i1 = ii[i];
    if ((i1 < 1) || (i1 > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX.size(0), &v_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  idx = ii.size(0);
  for (a = 0; a < idx; a++) {
    if ((ii[a] < 1) || (ii[a] > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(ii[a], 1, nodesX.size(0), &v_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((nodesX[ii[a] - 1] == maximum) && (a + 1 > ii.size(0))) {
      emlrtDynamicBoundsCheckR2012b(a + 1, 1, ii.size(0), &r_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  last = ii.size(0);
  for (i = 0; i < last; i++) {
    i1 = ii[i];
    if ((i1 < 1) || (i1 > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX.size(0), &w_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  idx = ii.size(0) - 1;
  last = 0;
  for (a = 0; a <= idx; a++) {
    if ((ii[a] < 1) || (ii[a] > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(ii[a], 1, nodesX.size(0), &w_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (nodesX[ii[a] - 1] == minimum) {
      last++;
    }
  }
  pinNode.set_size(&q_emlrtRTEI, sp, last);
  last = 0;
  for (a = 0; a <= idx; a++) {
    if ((ii[a] < 1) || (ii[a] > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(ii[a], 1, nodesX.size(0), &w_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (nodesX[ii[a] - 1] == minimum) {
      if (a + 1 > ii.size(0)) {
        emlrtDynamicBoundsCheckR2012b(a + 1, 1, ii.size(0), &x_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      pinNode[last] = static_cast<uint32_T>(ii[a]);
      last++;
    }
  }
  d = numNodes * 2.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &d_emlrtDCI, (emlrtCTX)sp);
  }
  minimum = static_cast<int32_T>(muDoubleScalarFloor(d));
  if (d != minimum) {
    emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtCTX)sp);
  }
  nodeEquationArray.set_size(&r_emlrtRTEI, sp, static_cast<int32_T>(d),
                             nodeEquationArray.size(1));
  if (!(numEdges + 3.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numEdges + 3.0, &f_emlrtDCI, (emlrtCTX)sp);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(numEdges + 3.0));
  if (numEdges + 3.0 != d1) {
    emlrtIntegerCheckR2012b(numEdges + 3.0, &e_emlrtDCI, (emlrtCTX)sp);
  }
  nodeEquationArray.set_size(&r_emlrtRTEI, sp, nodeEquationArray.size(0),
                             static_cast<int32_T>(numEdges + 3.0));
  if (d != minimum) {
    emlrtIntegerCheckR2012b(d, &i_emlrtDCI, (emlrtCTX)sp);
  }
  if (!(numEdges + 3.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numEdges + 3.0, &j_emlrtDCI, (emlrtCTX)sp);
  }
  if (numEdges + 3.0 != d1) {
    emlrtIntegerCheckR2012b(numEdges + 3.0, &i_emlrtDCI, (emlrtCTX)sp);
  }
  last = static_cast<int32_T>(d) * static_cast<int32_T>(numEdges + 3.0);
  for (i = 0; i < last; i++) {
    nodeEquationArray[i] = 0.0;
  }
  if (!(numNodes >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numNodes, &l_emlrtDCI, (emlrtCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(numNodes));
  if (numNodes != i) {
    emlrtIntegerCheckR2012b(numNodes, &k_emlrtDCI, (emlrtCTX)sp);
  }
  xEquationArray.set_size(&s_emlrtRTEI, sp, static_cast<int32_T>(numNodes),
                          xEquationArray.size(1));
  if (!(numEdges >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numEdges, &n_emlrtDCI, (emlrtCTX)sp);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(numEdges));
  if (numEdges != d1) {
    emlrtIntegerCheckR2012b(numEdges, &m_emlrtDCI, (emlrtCTX)sp);
  }
  xEquationArray.set_size(&s_emlrtRTEI, sp, xEquationArray.size(0),
                          static_cast<int32_T>(numEdges));
  if (numNodes != i) {
    emlrtIntegerCheckR2012b(numNodes, &o_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = static_cast<int32_T>(numNodes);
  yEquationArray.set_size(&t_emlrtRTEI, sp, i1, yEquationArray.size(1));
  if (numEdges != d1) {
    emlrtIntegerCheckR2012b(numEdges, &p_emlrtDCI, (emlrtCTX)sp);
  }
  yEquationArray.set_size(&t_emlrtRTEI, sp, yEquationArray.size(0),
                          static_cast<int32_T>(numEdges));
  //  NodeX then NodeY
  //  columns are members then FPin then FRoller
  //  array dimensions are members x nodes +2
  //  Node Equation Array layout
  //         member1 member2... FyPin FyFroller FxPin (will be 0)
  //  Node1x
  //  Node1y
  //  Node2x
  //  ...
  if (d != minimum) {
    emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtCTX)sp);
  }
  forceArray.set_size(&u_emlrtRTEI, sp, static_cast<int32_T>(d));
  if (d != minimum) {
    emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtCTX)sp);
  }
  last = static_cast<int32_T>(d);
  for (a = 0; a < last; a++) {
    forceArray[a] = 0.0;
  }
  a = i1 * 2;
  d = weightNode * 2.0;
  if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
    emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > a)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, a, &s_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  forceArray[static_cast<int32_T>(d) - 1] = muDoubleScalarAbs(weightMagnitude);
  //  Setting supports for pin and roller nodes
  if (pinNode.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, pinNode.size(0), &g_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  u = pinNode[0] << 1;
  if ((static_cast<int32_T>(u) < 1) || (static_cast<int32_T>(u) > a)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1, a, &y_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(numEdges + 1.0) < 1) ||
      (static_cast<int32_T>(numEdges + 1.0) >
       static_cast<int32_T>(numEdges + 3.0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges + 1.0), 1,
                                  static_cast<int32_T>(numEdges + 3.0),
                                  &ab_emlrtBCI, (emlrtCTX)sp);
  }
  nodeEquationArray[(static_cast<int32_T>(u) +
                     nodeEquationArray.size(0) *
                         (static_cast<int32_T>(numEdges + 1.0) - 1)) -
                    1] = 1.0;
  idx = ii.size(0);
  last = 0;
  for (a = 0; a < idx; a++) {
    if (nodesX[ii[a] - 1] == maximum) {
      last++;
    }
  }
  if (last < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, last, &h_emlrtBCI, (emlrtCTX)sp);
  }
  idx = ii.size(0) - 1;
  last = 0;
  for (a = 0; a <= idx; a++) {
    if (nodesX[ii[a] - 1] == maximum) {
      last++;
    }
  }
  r.set_size(&q_emlrtRTEI, sp, last);
  last = 0;
  for (a = 0; a <= idx; a++) {
    if (nodesX[ii[a] - 1] == maximum) {
      r[last] = a + 1;
      last++;
    }
  }
  a = static_cast<int32_T>(static_cast<uint32_T>(ii[r[0] - 1]) << 1);
  if ((a < 1) || (a > nodeEquationArray.size(0))) {
    emlrtDynamicBoundsCheckR2012b(a, 1, nodeEquationArray.size(0), &bb_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(numEdges + 2.0) < 1) ||
      (static_cast<int32_T>(numEdges + 2.0) > nodeEquationArray.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges + 2.0), 1,
                                  nodeEquationArray.size(1), &cb_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  nodeEquationArray[(a + nodeEquationArray.size(0) *
                             (static_cast<int32_T>(numEdges + 2.0) - 1)) -
                    1] = 1.0;
  //  force x on pin which will be 0
  if (pinNode.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(1, 1, pinNode.size(0), &i_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(u - 1U) < 1) ||
      (static_cast<int32_T>(u - 1U) > nodeEquationArray.size(0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u - 1U), 1,
                                  nodeEquationArray.size(0), &db_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(numEdges + 3.0) < 1) ||
      (static_cast<int32_T>(numEdges + 3.0) > nodeEquationArray.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges + 3.0), 1,
                                  nodeEquationArray.size(1), &eb_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  nodeEquationArray[(static_cast<int32_T>(u) +
                     nodeEquationArray.size(0) *
                         (static_cast<int32_T>(numEdges + 3.0) - 1)) -
                    2] = 1.0;
  //  For every node
  if (i1 != i) {
    emlrtIntegerCheckR2012b(numNodes, &emlrtDCI, (emlrtCTX)sp);
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, numNodes, mxDOUBLE_CLASS,
                                static_cast<int32_T>(numNodes), &b_emlrtRTEI,
                                (emlrtCTX)sp);
  last = i1 - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp,
                           static_cast<boolean_T>(omp_in_parallel()));
#pragma omp parallel num_threads(emlrtAllocRegionTLSs(                         \
    sp->tls, omp_in_parallel(), omp_get_max_threads(),                         \
    omp_get_num_procs())) private(r1, x, jj, b_ii, b_endNodes, tempX, tempY,   \
                                  row, refArray, n, b_x, y, m_st, loop_ub, i2, \
                                  i3, b_loop_ub, varargin_1, iv2)              \
    firstprivate(j_st, k_st, l_st, emlrtHadParallelError)
  {
    try {

      j_st.prev = sp;
      j_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      j_st.site = nullptr;
      k_st.prev = &j_st;
      k_st.tls = j_st.tls;
      l_st.prev = &k_st;
      l_st.tls = k_st.tls;
      m_st.prev = &l_st;
      m_st.tls = l_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (b_i = 0; b_i <= last; b_i++) {
      if (emlrtHadParallelError)
        continue;
      try {

        tempX.set_size(&v_emlrtRTEI, &j_st, 1, tempX.size(1));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &g_emlrtDCI, &j_st);
        }
        tempX.set_size(&v_emlrtRTEI, &j_st, tempX.size(0),
                       static_cast<int32_T>(numEdges));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &r_emlrtDCI, &j_st);
        }
        loop_ub = static_cast<int32_T>(numEdges);
        for (i2 = 0; i2 < loop_ub; i2++) {
          tempX[i2] = 0.0;
        }
        tempY.set_size(&w_emlrtRTEI, &j_st, 1, tempY.size(1));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &h_emlrtDCI, &j_st);
        }
        tempY.set_size(&w_emlrtRTEI, &j_st, tempY.size(0),
                       static_cast<int32_T>(numEdges));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &s_emlrtDCI, &j_st);
        }
        loop_ub = static_cast<int32_T>(numEdges);
        for (i2 = 0; i2 < loop_ub; i2++) {
          tempY[i2] = 0.0;
        }
        k_st.site = &d_emlrtRSI;
        b_endNodes.set_size(&x_emlrtRTEI, &k_st, endNodes.size(0), 2);
        loop_ub = endNodes.size(0) * 2;
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_endNodes[i2] = (endNodes[i2] == static_cast<real_T>(b_i) + 1.0);
        }
        l_st.site = &gb_emlrtRSI;
        coder::b_eml_find(&l_st, b_endNodes, b_ii, jj);
        loop_ub = b_ii.size(0);
        row.set_size(&y_emlrtRTEI, &k_st, b_ii.size(0));
        for (i2 = 0; i2 < loop_ub; i2++) {
          row[i2] = b_ii[i2];
        }
        k_st.site = &e_emlrtRSI;
        loop_ub = row.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          i3 = row[i2];
          if ((i3 < 1) || (i3 > endNodes.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, endNodes.size(0), &fb_emlrtBCI,
                                          &k_st);
          }
        }
        b_endNodes.set_size(&ab_emlrtRTEI, &k_st, row.size(0), 2);
        loop_ub = row.size(0);
        for (i2 = 0; i2 < 2; i2++) {
          for (i3 = 0; i3 < loop_ub; i3++) {
            b_endNodes[i3 + b_endNodes.size(0) * i2] =
                (endNodes[(row[i3] + endNodes.size(0) * i2) - 1] !=
                 static_cast<real_T>(b_i) + 1.0);
          }
        }
        l_st.site = &gb_emlrtRSI;
        coder::b_eml_find(&l_st, b_endNodes, b_ii, jj);
        loop_ub = jj.size(0);
        n.set_size(&bb_emlrtRTEI, &k_st, jj.size(0));
        for (i2 = 0; i2 < loop_ub; i2++) {
          n[i2] = jj[i2];
        }
        k_st.site = &f_emlrtRSI;
        coder::flipud(n);
        //  I have no clue why the column data is upside down
        refArray.set_size(&cb_emlrtRTEI, &j_st, row.size(0), n.size(0));
        loop_ub = n.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_loop_ub = row.size(0);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            if ((row[i3] < 1) || (row[i3] > endNodes.size(0))) {
              emlrtDynamicBoundsCheckR2012b(row[i3], 1, endNodes.size(0),
                                            &gb_emlrtBCI, &j_st);
            }
            refArray[i3 + refArray.size(0) * i2] =
                endNodes[(row[i3] + endNodes.size(0) *
                                        (static_cast<int32_T>(n[i2]) - 1)) -
                         1];
          }
        }
        //     I have no clue why the hell the diagonal is the node data i want
        k_st.site = &g_emlrtRSI;
        coder::diag(&k_st, refArray, n);
        if (static_cast<int32_T>(b_i + 1U) > nodesY.size(0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                        nodesY.size(0), &hb_emlrtBCI, &j_st);
        }
        y.set_size(&db_emlrtRTEI, &j_st, n.size(0));
        loop_ub = n.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          if (n[i2] != static_cast<int32_T>(muDoubleScalarFloor(n[i2]))) {
            emlrtIntegerCheckR2012b(n[i2], &t_emlrtDCI, &j_st);
          }
          i3 = static_cast<int32_T>(n[i2]);
          if ((i3 < 1) || (i3 > nodesY.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, nodesY.size(0), &ib_emlrtBCI,
                                          &j_st);
          }
          y[i2] = nodesY[i3 - 1] - nodesY[b_i];
        }
        if (static_cast<int32_T>(b_i + 1U) > nodesX.size(0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                        nodesX.size(0), &jb_emlrtBCI, &j_st);
        }
        b_x.set_size(&eb_emlrtRTEI, &j_st, n.size(0));
        loop_ub = n.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          i3 = static_cast<int32_T>(n[i2]);
          if ((i3 < 1) || (i3 > nodesX.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(n[i2]), 1,
                                          nodesX.size(0), &kb_emlrtBCI, &j_st);
          }
          b_x[i2] = nodesX[i3 - 1] - nodesX[b_i];
        }
        k_st.site = &h_emlrtRSI;
        l_st.site = &nb_emlrtRSI;
        m_st.site = &ob_emlrtRSI;
        if (y.size(0) != b_x.size(0)) {
          emlrtErrorWithMessageIdR2018a(
              &m_st, &c_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
        }
        x.set_size(&fb_emlrtRTEI, &j_st, b_x.size(0), 2);
        loop_ub = b_x.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          x[i2] = b_x[i2];
        }
        loop_ub = y.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          x[i2 + x.size(0)] = y[i2];
        }
        r1.set_size(&gb_emlrtRTEI, &j_st, x.size(0), 2);
        loop_ub = x.size(0) * 2;
        for (i2 = 0; i2 < loop_ub; i2++) {
          varargin_1 = x[i2];
          r1[i2] = varargin_1 * varargin_1;
        }
        k_st.site = &h_emlrtRSI;
        coder::sum(&k_st, r1, n);
        k_st.site = &h_emlrtRSI;
        coder::b_sqrt(&k_st, n);
        k_st.site = &i_emlrtRSI;
        l_st.site = &xb_emlrtRSI;
        m_st.site = &yb_emlrtRSI;
        if ((b_x.size(0) != 1) && (n.size(0) != 1) &&
            (b_x.size(0) != n.size(0))) {
          emlrtErrorWithMessageIdR2018a(&m_st, &j_emlrtRTEI,
                                        "MATLAB:sizeDimensionsMustMatch",
                                        "MATLAB:sizeDimensionsMustMatch", 0);
        }
        if (b_x.size(0) == n.size(0)) {
          loop_ub = b_x.size(0);
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_x[i2] = b_x[i2] / n[i2];
          }
        } else {
          m_st.site = &id_emlrtRSI;
          rdivide(&m_st, b_x, n);
        }
        k_st.site = &j_emlrtRSI;
        l_st.site = &xb_emlrtRSI;
        m_st.site = &yb_emlrtRSI;
        if ((y.size(0) != 1) && (n.size(0) != 1) && (y.size(0) != n.size(0))) {
          emlrtErrorWithMessageIdR2018a(&m_st, &j_emlrtRTEI,
                                        "MATLAB:sizeDimensionsMustMatch",
                                        "MATLAB:sizeDimensionsMustMatch", 0);
        }
        if (y.size(0) == n.size(0)) {
          loop_ub = y.size(0);
          for (i2 = 0; i2 < loop_ub; i2++) {
            y[i2] = y[i2] / n[i2];
          }
        } else {
          m_st.site = &id_emlrtRSI;
          rdivide(&m_st, y, n);
        }
        b_ii.set_size(&hb_emlrtRTEI, &j_st, row.size(0));
        loop_ub = row.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          if ((row[i2] < 1) || (row[i2] > static_cast<int32_T>(numEdges))) {
            emlrtDynamicBoundsCheckR2012b(row[i2], 1,
                                          static_cast<int32_T>(numEdges),
                                          &lb_emlrtBCI, &j_st);
          }
          b_ii[i2] = row[i2] - 1;
        }
        iv2[0] = 1;
        iv2[1] = b_ii.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv2[0], 2, b_x.size(), 1, &emlrtECI,
                                      &j_st);
        loop_ub = b_ii.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          tempX[b_ii[i2]] = b_x[i2];
        }
        // Odd rows are sum Fx
        b_ii.set_size(&ib_emlrtRTEI, &j_st, row.size(0));
        loop_ub = row.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          if ((row[i2] < 1) || (row[i2] > static_cast<int32_T>(numEdges))) {
            emlrtDynamicBoundsCheckR2012b(row[i2], 1,
                                          static_cast<int32_T>(numEdges),
                                          &mb_emlrtBCI, &j_st);
          }
          b_ii[i2] = row[i2] - 1;
        }
        iv2[0] = 1;
        iv2[1] = b_ii.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv2[0], 2, y.size(), 1, &b_emlrtECI,
                                      &j_st);
        loop_ub = b_ii.size(0);
        for (i2 = 0; i2 < loop_ub; i2++) {
          tempY[b_ii[i2]] = y[i2];
        }
        // Even rows are sum Fy
        if (b_i + 1 > xEquationArray.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, xEquationArray.size(0),
                                        &emlrtBCI, &j_st);
        }
        iv2[0] = 1;
        iv2[1] = xEquationArray.size(1);
        emlrtSubAssignSizeCheckR2012b(&iv2[0], 2, tempX.size(), 2, &c_emlrtECI,
                                      &j_st);
        loop_ub = tempX.size(1);
        for (i2 = 0; i2 < loop_ub; i2++) {
          xEquationArray[b_i + xEquationArray.size(0) * i2] = tempX[i2];
        }
        if (b_i + 1 > yEquationArray.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, yEquationArray.size(0),
                                        &d_emlrtBCI, &j_st);
        }
        iv2[0] = 1;
        iv2[1] = yEquationArray.size(1);
        emlrtSubAssignSizeCheckR2012b(&iv2[0], 2, tempY.size(), 2, &d_emlrtECI,
                                      &j_st);
        loop_ub = tempY.size(1);
        for (i2 = 0; i2 < loop_ub; i2++) {
          yEquationArray[b_i + yEquationArray.size(0) * i2] = tempY[i2];
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&j_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&j_st, 12);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  if (numNodes < 1.0) {
    last = 0;
  } else {
    if (xEquationArray.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, xEquationArray.size(0), &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (static_cast<int32_T>(numNodes) > xEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numNodes), 1,
                                    xEquationArray.size(0), &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    last = static_cast<int32_T>(numNodes);
  }
  u = static_cast<uint32_T>(numNodes) << 1;
  if (u < 1U) {
    i = 1;
    i1 = 0;
  } else {
    if (nodeEquationArray.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nodeEquationArray.size(0),
                                    &j_emlrtBCI, (emlrtCTX)sp);
    }
    i = 2;
    if ((static_cast<int32_T>(u) < 1) ||
        (static_cast<int32_T>(u) > nodeEquationArray.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                    nodeEquationArray.size(0), &k_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = static_cast<int32_T>(u);
  }
  if (numEdges < 1.0) {
    a = 0;
  } else {
    if (nodeEquationArray.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nodeEquationArray.size(1),
                                    &l_emlrtBCI, (emlrtCTX)sp);
    }
    if ((static_cast<int32_T>(numEdges) < 1) ||
        (static_cast<int32_T>(numEdges) > nodeEquationArray.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges), 1,
                                    nodeEquationArray.size(1), &m_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    a = static_cast<int32_T>(numEdges);
  }
  st.site = &jd_emlrtRSI;
  iv[0] = div_s32(&st, i1 - 1, i) + 1;
  iv[1] = a;
  iv1[0] = last;
  iv1[1] = xEquationArray.size(1);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &e_emlrtECI,
                                (emlrtCTX)sp);
  idx = xEquationArray.size(1);
  for (i1 = 0; i1 < idx; i1++) {
    for (a = 0; a < last; a++) {
      nodeEquationArray[i * a + nodeEquationArray.size(0) * i1] =
          xEquationArray[a + xEquationArray.size(0) * i1];
    }
  }
  if (numNodes < 1.0) {
    last = 0;
  } else {
    if (yEquationArray.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, yEquationArray.size(0), &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (static_cast<int32_T>(numNodes) > yEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numNodes), 1,
                                    yEquationArray.size(0), &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    last = static_cast<int32_T>(numNodes);
  }
  if (u < 2U) {
    i = 1;
    i1 = 1;
    a = 0;
  } else {
    if (nodeEquationArray.size(0) < 2) {
      emlrtDynamicBoundsCheckR2012b(2, 1, nodeEquationArray.size(0),
                                    &n_emlrtBCI, (emlrtCTX)sp);
    }
    i = 2;
    i1 = 2;
    if ((static_cast<int32_T>(u) < 1) ||
        (static_cast<int32_T>(u) > nodeEquationArray.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                    nodeEquationArray.size(0), &o_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    a = static_cast<int32_T>(u);
  }
  if (numEdges < 1.0) {
    k = 0;
  } else {
    if (nodeEquationArray.size(1) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nodeEquationArray.size(1),
                                    &p_emlrtBCI, (emlrtCTX)sp);
    }
    if ((static_cast<int32_T>(numEdges) < 1) ||
        (static_cast<int32_T>(numEdges) > nodeEquationArray.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges), 1,
                                    nodeEquationArray.size(1), &q_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    k = static_cast<int32_T>(numEdges);
  }
  st.site = &kd_emlrtRSI;
  iv[0] = div_s32(&st, a - i, i1) + 1;
  iv[1] = k;
  iv1[0] = last;
  iv1[1] = yEquationArray.size(1);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI,
                                (emlrtCTX)sp);
  idx = yEquationArray.size(1);
  for (a = 0; a < idx; a++) {
    for (k = 0; k < last; k++) {
      nodeEquationArray[((i + i1 * k) + nodeEquationArray.size(0) * a) - 1] =
          yEquationArray[k + yEquationArray.size(0) * a];
    }
  }
  st.site = &k_emlrtRSI;
  coder::mldivide(&st, nodeEquationArray, forceArray, tensionArray);
  // Solving the systems to find the tension array
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

// End of code generation (tensionCalculator3.cpp)
