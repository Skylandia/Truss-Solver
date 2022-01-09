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
#include "find.h"
#include "flipud.h"
#include "mldivide.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "sum.h"
#include "tensionCalculator3_data.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    11,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    12,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    13,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    51,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    52,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    53,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    56,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    60,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    61,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    62,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    73,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    39,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pathName
};

static emlrtRSInfo
    s_emlrtRSI{
        44,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    t_emlrtRSI{
        79,        // lineNo
        "maximum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo u_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

static emlrtRSInfo
    v_emlrtRSI{
        46,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo x_emlrtRSI{
    35,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    22,    // lineNo
    "cat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    96,         // lineNo
    "cat_impl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" // pathName
};

static emlrtRSInfo qb_emlrtRSI{
    51,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    259,                    // lineNo
    "assertCompatibleSize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    52,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    45,                          // lineNo
    "applyBinaryScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    66,                          // lineNo
    "applyBinaryScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    127,        // lineNo
    "flatIter", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtDCInfo
    emlrtDCI{
        45,                   // lineNo
        12,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtRTEInfo b_emlrtRTEI{
    45,                   // lineNo
    10,                   // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtECInfo emlrtECI{
    -1,                   // nDims
    64,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtECInfo b_emlrtECI{
    -1,                   // nDims
    65,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtBCInfo
    emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        66,                   // lineNo
        20,                   // colNo
        "xEquationArray",     // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtECInfo c_emlrtECI{
    -1,                   // nDims
    66,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtBCInfo
    b_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        71,                   // lineNo
        63,                   // colNo
        "xEquationArray",     // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    c_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        71,                   // lineNo
        67,                   // colNo
        "xEquationArray",     // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    d_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        67,                   // lineNo
        20,                   // colNo
        "yEquationArray",     // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtECInfo d_emlrtECI{
    -1,                   // nDims
    67,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtBCInfo
    e_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        72,                   // lineNo
        63,                   // colNo
        "yEquationArray",     // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    f_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        72,                   // lineNo
        67,                   // colNo
        "yEquationArray",     // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    g_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        37,                   // lineNo
        27,                   // colNo
        "pinNode",            // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    h_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        38,                   // lineNo
        30,                   // colNo
        "rollerNode",         // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    i_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        71,                   // lineNo
        19,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    j_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        71,                   // lineNo
        23,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    k_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        71,                   // lineNo
        34,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    l_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        71,                   // lineNo
        36,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtECInfo e_emlrtECI{
    -1,                   // nDims
    71,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtBCInfo
    m_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        72,                   // lineNo
        19,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    n_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        72,                   // lineNo
        23,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    o_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        72,                   // lineNo
        34,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    p_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        72,                   // lineNo
        36,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtECInfo f_emlrtECI{
    -1,                   // nDims
    72,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtBCInfo
    q_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        14,                   // lineNo
        21,                   // colNo
        "baseIndx",           // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtRTEInfo d_emlrtRTEI{
    124,             // lineNo
    27,              // colNo
    "unaryMinOrMax", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    19,             // lineNo
    23,             // colNo
    "scalexpAlloc", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc."
    "m" // pName
};

static emlrtBCInfo
    r_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        34,                   // lineNo
        12,                   // colNo
        "forceArray",         // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtDCInfo
    b_emlrtDCI{
        34,                   // lineNo
        12,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    c_emlrtDCI{
        17,                   // lineNo
        25,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    d_emlrtDCI{
        17,                   // lineNo
        25,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        4                               // checkKind
    };

static emlrtDCInfo
    e_emlrtDCI{
        17,                   // lineNo
        36,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    f_emlrtDCI{
        17,                   // lineNo
        36,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        4                               // checkKind
    };

static emlrtDCInfo
    g_emlrtDCI{
        47,                   // lineNo
        21,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    h_emlrtDCI{
        48,                   // lineNo
        21,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtBCInfo
    s_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        12,                   // lineNo
        24,                   // colNo
        "nodesX",             // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    t_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        13,                   // lineNo
        24,                   // colNo
        "nodesX",             // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    u_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        14,                   // lineNo
        28,                   // colNo
        "nodesX",             // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    v_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        14,                   // lineNo
        21,                   // colNo
        "nodesX",             // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    w_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        15,                   // lineNo
        25,                   // colNo
        "nodesX",             // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    x_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        15,                   // lineNo
        18,                   // colNo
        "nodesX",             // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    y_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        15,                   // lineNo
        9,                    // colNo
        "baseIndx",           // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtDCInfo
    i_emlrtDCI{
        17,                   // lineNo
        1,                    // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    j_emlrtDCI{
        17,                   // lineNo
        1,                    // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        4                               // checkKind
    };

static emlrtDCInfo
    k_emlrtDCI{
        19,                   // lineNo
        24,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    l_emlrtDCI{
        19,                   // lineNo
        24,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        4                               // checkKind
    };

static emlrtDCInfo
    m_emlrtDCI{
        19,                   // lineNo
        33,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    n_emlrtDCI{
        19,                   // lineNo
        33,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        4                               // checkKind
    };

static emlrtDCInfo
    o_emlrtDCI{
        20,                   // lineNo
        24,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    p_emlrtDCI{
        20,                   // lineNo
        33,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    q_emlrtDCI{
        33,                   // lineNo
        1,                    // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtBCInfo
    ab_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        37,                   // lineNo
        1,                    // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    bb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        38,                   // lineNo
        1,                    // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    cb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        41,                   // lineNo
        1,                    // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtDCInfo
    r_emlrtDCI{
        47,                   // lineNo
        5,                    // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtDCInfo
    s_emlrtDCI{
        48,                   // lineNo
        5,                    // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtBCInfo
    db_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        52,                   // lineNo
        29,                   // colNo
        "endNodes",           // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    eb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        54,                   // lineNo
        23,                   // colNo
        "endNodes",           // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    fb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        58,                   // lineNo
        24,                   // colNo
        "yVectorLoop",        // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    gb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        58,                   // lineNo
        19,                   // colNo
        "yVectorLoop",        // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtDCInfo
    t_emlrtDCI{
        58,                   // lineNo
        19,                   // colNo
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        1                               // checkKind
    };

static emlrtBCInfo
    hb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        59,                   // lineNo
        24,                   // colNo
        "xVectorLoop",        // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    ib_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        59,                   // lineNo
        19,                   // colNo
        "xVectorLoop",        // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    jb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        64,                   // lineNo
        13,                   // colNo
        "tempX",              // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    kb_emlrtBCI{
        -1,                   // iFirst
        -1,                   // iLast
        65,                   // lineNo
        13,                   // colNo
        "tempY",              // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtRTEInfo o_emlrtRTEI{
    17,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    19,                   // lineNo
    18,                   // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    20,                   // lineNo
    18,                   // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    33,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    47,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    48,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    54,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRSInfo fd_emlrtRSI{
    72,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    71,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

// Function Declarations
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator,
                             int32_T denominator);

// Function Definitions
static int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator,
                             int32_T denominator)
{
  int32_T quotient;
  if (denominator == 0) {
    emlrtDivisionByZeroErrorR2012b(nullptr, (emlrtCTX)sp);
  } else {
    uint32_T absDenominator;
    uint32_T absNumerator;
    uint32_T tempAbsQuotient;
    boolean_T quotientNeedsNegation;
    if (numerator < 0) {
      absNumerator = ~static_cast<uint32_T>(numerator) + 1U;
    } else {
      absNumerator = static_cast<uint32_T>(numerator);
    }
    if (denominator < 0) {
      absDenominator = ~static_cast<uint32_T>(denominator) + 1U;
    } else {
      absDenominator = static_cast<uint32_T>(denominator);
    }
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
      quotient = -static_cast<int32_T>(tempAbsQuotient);
    } else {
      quotient = static_cast<int32_T>(tempAbsQuotient);
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

void tensionCalculator3(const emlrtStack *sp, const real_T nodesX_data[],
                        const int32_T nodesX_size[1],
                        const real_T nodesY_data[],
                        const int32_T nodesY_size[1], real_T numNodes,
                        real_T numEdges, const real_T endNodes_data[],
                        const int32_T endNodes_size[2], real_T weightMagnitude,
                        real_T weightNode,
                        coder::array<real_T, 1U> &tensionArray)
{
  coder::array<real_T, 2U> nodeEquationArray;
  coder::array<real_T, 2U> refArray;
  coder::array<real_T, 2U> tempX;
  coder::array<real_T, 2U> tempY;
  coder::array<real_T, 2U> xEquationArray;
  coder::array<real_T, 2U> yEquationArray;
  coder::array<real_T, 1U> forceArray;
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
  emlrtStack st;
  real_T b_tmp_data[780];
  real_T col_data[780];
  real_T n_data[390];
  real_T x_data[390];
  real_T y_data[390];
  real_T d;
  real_T d1;
  real_T d2;
  real_T maximum;
  real_T minimum;
  int32_T b_ii_data[780];
  int32_T jj_data[780];
  int32_T row_data[780];
  int32_T c_tmp_data[390];
  int32_T ii_data[99];
  int32_T b_endNodes_size[2];
  int32_T c_endNodes_size[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T tmp_size[2];
  int32_T x_size[2];
  int32_T b_i;
  int32_T end_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T idx;
  int32_T ii_size;
  int32_T k;
  int32_T loop_ub;
  int32_T n_size;
  int32_T row_size;
  int32_T trueCount;
  int32_T y_size;
  uint32_T u;
  int16_T i6;
  int8_T pinNode_data[99];
  int8_T tmp_data[99];
  boolean_T c_endNodes_data[780];
  boolean_T b_endNodes_data[390];
  boolean_T b_nodesY_data[99];
  boolean_T b_p;
  boolean_T emlrtHadParallelError{false};
  boolean_T exitg1;
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
  // Calculates all the Tension(+) and compression(-) forces in every member
  // and enters them into the 'Force in Member' column in the trussGraph table
  //    trussGraph: must be created by GenerateTrussGraph
  //    weightMagnitude: is a scalar, this is the weight on both trusses
  //    weightNode: is the node number in the trussGraph at which the weight is
  //    placed
  //  Locations of pin and roller nodes, pin is the left node and roller is the
  //  right
  st.site = &emlrtRSI;
  loop_ub = nodesY_size[0];
  for (i = 0; i < loop_ub; i++) {
    b_nodesY_data[i] = (nodesY_data[i] == 0.0);
  }
  b_st.site = &l_emlrtRSI;
  coder::eml_find(&b_st, b_nodesY_data, nodesY_size[0], ii_data, &ii_size);
  st.site = &b_emlrtRSI;
  for (i = 0; i < ii_size; i++) {
    i1 = ii_data[i];
    if ((i1 < 1) || (i1 > nodesX_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX_size[0], &s_emlrtBCI, &st);
    }
  }
  b_st.site = &r_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  if (ii_size < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  if (ii_size <= 2) {
    if (ii_size == 1) {
      maximum = nodesX_data[ii_data[0] - 1];
    } else {
      d = nodesX_data[ii_data[1] - 1];
      maximum = nodesX_data[ii_data[0] - 1];
      if ((maximum < d) || (muDoubleScalarIsNaN(nodesX_data[ii_data[0] - 1]) &&
                            (!muDoubleScalarIsNaN(d)))) {
        maximum = d;
      }
    }
  } else {
    maximum = nodesX_data[ii_data[0] - 1];
    if (!muDoubleScalarIsNaN(maximum)) {
      idx = 1;
    } else {
      idx = 0;
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub <= ii_size)) {
        if (!muDoubleScalarIsNaN(nodesX_data[ii_data[loop_ub - 1] - 1])) {
          idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }
    if (idx != 0) {
      maximum = nodesX_data[ii_data[idx - 1] - 1];
      i = idx + 1;
      for (loop_ub = i; loop_ub <= ii_size; loop_ub++) {
        d = nodesX_data[ii_data[loop_ub - 1] - 1];
        if (maximum < d) {
          maximum = d;
        }
      }
    }
  }
  st.site = &c_emlrtRSI;
  for (i = 0; i < ii_size; i++) {
    i1 = ii_data[i];
    if ((i1 < 1) || (i1 > nodesX_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX_size[0], &t_emlrtBCI, &st);
    }
  }
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  if (ii_size <= 2) {
    if (ii_size == 1) {
      minimum = nodesX_data[ii_data[0] - 1];
    } else {
      d = nodesX_data[ii_data[1] - 1];
      minimum = nodesX_data[ii_data[0] - 1];
      if ((minimum > d) ||
          (muDoubleScalarIsNaN(nodesX_data[ii_data[0] - 1]) &&
           (!muDoubleScalarIsNaN(nodesX_data[ii_data[1] - 1])))) {
        minimum = d;
      }
    }
  } else {
    if (!muDoubleScalarIsNaN(nodesX_data[ii_data[0] - 1])) {
      idx = 1;
    } else {
      idx = 0;
      loop_ub = 2;
      exitg1 = false;
      while ((!exitg1) && (loop_ub <= ii_size)) {
        if (!muDoubleScalarIsNaN(nodesX_data[ii_data[loop_ub - 1] - 1])) {
          idx = loop_ub;
          exitg1 = true;
        } else {
          loop_ub++;
        }
      }
    }
    if (idx == 0) {
      minimum = nodesX_data[ii_data[0] - 1];
    } else {
      minimum = nodesX_data[ii_data[idx - 1] - 1];
      i = idx + 1;
      for (loop_ub = i; loop_ub <= ii_size; loop_ub++) {
        d = nodesX_data[ii_data[loop_ub - 1] - 1];
        if (minimum > d) {
          minimum = d;
        }
      }
    }
  }
  for (i = 0; i < ii_size; i++) {
    i1 = ii_data[i];
    if ((i1 < 1) || (i1 > nodesX_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX_size[0], &u_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  for (loop_ub = 0; loop_ub < ii_size; loop_ub++) {
    i = ii_data[loop_ub];
    if ((i < 1) || (i > nodesX_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, nodesX_size[0], &v_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((nodesX_data[i - 1] == maximum) && (loop_ub + 1 > ii_size)) {
      emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, ii_size, &q_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  for (i = 0; i < ii_size; i++) {
    i1 = ii_data[i];
    if ((i1 < 1) || (i1 > nodesX_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX_size[0], &w_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  end_tmp = ii_size - 1;
  trueCount = 0;
  for (loop_ub = 0; loop_ub <= end_tmp; loop_ub++) {
    i = ii_data[loop_ub];
    if ((i < 1) || (i > nodesX_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, nodesX_size[0], &x_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (nodesX_data[i - 1] == minimum) {
      trueCount++;
    }
  }
  idx = 0;
  for (loop_ub = 0; loop_ub <= end_tmp; loop_ub++) {
    i = ii_data[loop_ub];
    if ((i < 1) || (i > nodesX_size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, nodesX_size[0], &x_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (nodesX_data[i - 1] == minimum) {
      if (loop_ub + 1 > ii_size) {
        emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, ii_size, &y_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      pinNode_data[idx] = static_cast<int8_T>(i);
      idx++;
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
  nodeEquationArray.set_size(&o_emlrtRTEI, sp, static_cast<int32_T>(d),
                             nodeEquationArray.size(1));
  if (!(numEdges + 3.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numEdges + 3.0, &f_emlrtDCI, (emlrtCTX)sp);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(numEdges + 3.0));
  if (numEdges + 3.0 != d1) {
    emlrtIntegerCheckR2012b(numEdges + 3.0, &e_emlrtDCI, (emlrtCTX)sp);
  }
  nodeEquationArray.set_size(&o_emlrtRTEI, sp, nodeEquationArray.size(0),
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
  loop_ub = static_cast<int32_T>(d) * static_cast<int32_T>(numEdges + 3.0);
  for (i = 0; i < loop_ub; i++) {
    nodeEquationArray[i] = 0.0;
  }
  if (!(numNodes >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numNodes, &l_emlrtDCI, (emlrtCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(numNodes));
  if (numNodes != i) {
    emlrtIntegerCheckR2012b(numNodes, &k_emlrtDCI, (emlrtCTX)sp);
  }
  xEquationArray.set_size(&p_emlrtRTEI, sp, static_cast<int32_T>(numNodes),
                          xEquationArray.size(1));
  if (!(numEdges >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numEdges, &n_emlrtDCI, (emlrtCTX)sp);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(numEdges));
  if (numEdges != d1) {
    emlrtIntegerCheckR2012b(numEdges, &m_emlrtDCI, (emlrtCTX)sp);
  }
  xEquationArray.set_size(&p_emlrtRTEI, sp, xEquationArray.size(0),
                          static_cast<int32_T>(numEdges));
  if (numNodes != i) {
    emlrtIntegerCheckR2012b(numNodes, &o_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = static_cast<int32_T>(numNodes);
  yEquationArray.set_size(&q_emlrtRTEI, sp, i1, yEquationArray.size(1));
  if (numEdges != d1) {
    emlrtIntegerCheckR2012b(numEdges, &p_emlrtDCI, (emlrtCTX)sp);
  }
  yEquationArray.set_size(&q_emlrtRTEI, sp, yEquationArray.size(0),
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
  forceArray.set_size(&r_emlrtRTEI, sp, static_cast<int32_T>(d));
  if (d != minimum) {
    emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtCTX)sp);
  }
  loop_ub = static_cast<int32_T>(d);
  for (i2 = 0; i2 < loop_ub; i2++) {
    forceArray[i2] = 0.0;
  }
  i2 = i1 * 2;
  d = weightNode * 2.0;
  if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
    emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > i2)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, i2, &r_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  forceArray[static_cast<int32_T>(d) - 1] = muDoubleScalarAbs(weightMagnitude);
  //  Setting supports for pin and roller nodes
  if (1 > trueCount) {
    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &g_emlrtBCI, (emlrtCTX)sp);
  }
  i3 = pinNode_data[0] << 1;
  if ((i3 < 1) || (i3 > i2)) {
    emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &ab_emlrtBCI, (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(numEdges + 1.0) < 1) ||
      (static_cast<int32_T>(numEdges + 1.0) >
       static_cast<int32_T>(numEdges + 3.0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges + 1.0), 1,
                                  static_cast<int32_T>(numEdges + 3.0),
                                  &ab_emlrtBCI, (emlrtCTX)sp);
  }
  nodeEquationArray[(i3 + nodeEquationArray.size(0) *
                              (static_cast<int32_T>(numEdges + 1.0) - 1)) -
                    1] = 1.0;
  trueCount = 0;
  for (loop_ub = 0; loop_ub < ii_size; loop_ub++) {
    if (nodesX_data[ii_data[loop_ub] - 1] == maximum) {
      trueCount++;
    }
  }
  if (1 > trueCount) {
    emlrtDynamicBoundsCheckR2012b(1, 1, trueCount, &h_emlrtBCI, (emlrtCTX)sp);
  }
  idx = 0;
  for (loop_ub = 0; loop_ub <= end_tmp; loop_ub++) {
    if (nodesX_data[ii_data[loop_ub] - 1] == maximum) {
      tmp_data[idx] = static_cast<int8_T>(loop_ub + 1);
      idx++;
    }
  }
  i2 = ii_data[tmp_data[0] - 1] << 1;
  if ((i2 < 1) || (i2 > nodeEquationArray.size(0))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, nodeEquationArray.size(0),
                                  &bb_emlrtBCI, (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(numEdges + 2.0) < 1) ||
      (static_cast<int32_T>(numEdges + 2.0) > nodeEquationArray.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges + 2.0), 1,
                                  nodeEquationArray.size(1), &bb_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  nodeEquationArray[(i2 + nodeEquationArray.size(0) *
                              (static_cast<int32_T>(numEdges + 2.0) - 1)) -
                    1] = 1.0;
  //  force x on pin which will be 0
  if ((i3 - 1 < 1) || (i3 - 1 > nodeEquationArray.size(0))) {
    emlrtDynamicBoundsCheckR2012b(i3 - 1, 1, nodeEquationArray.size(0),
                                  &cb_emlrtBCI, (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(numEdges + 3.0) < 1) ||
      (static_cast<int32_T>(numEdges + 3.0) > nodeEquationArray.size(1))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges + 3.0), 1,
                                  nodeEquationArray.size(1), &cb_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  nodeEquationArray[(i3 + nodeEquationArray.size(0) *
                              (static_cast<int32_T>(numEdges + 3.0) - 1)) -
                    2] = 1.0;
  //  For every node
  if (i1 != i) {
    emlrtIntegerCheckR2012b(numNodes, &emlrtDCI, (emlrtCTX)sp);
  }
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, numNodes, mxDOUBLE_CLASS,
                                static_cast<int32_T>(numNodes), &b_emlrtRTEI,
                                (emlrtCTX)sp);
  idx = i1 - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp,
                           static_cast<boolean_T>(omp_in_parallel()));
#pragma omp parallel num_threads(emlrtAllocRegionTLSs(                         \
    sp->tls, omp_in_parallel(), omp_get_max_threads(),                         \
    omp_get_num_procs())) private(tempX, tempY, refArray, y_data, y_size,      \
                                  x_data, n_data, n_size, col_data, l_st, i4,  \
                                  b_endNodes_size, b_endNodes_data, jj_data,   \
                                  row_size, c_endNodes_size, i5,               \
                                  c_endNodes_data, b_i, d2, x_size,            \
                                  b_tmp_data, tmp_size, i6, p, b_p, k, exitg1, \
                                  c_tmp_data)                                  \
    firstprivate(e_st, f_st, g_st, h_st, i_st, j_st, k_st, b_ii_data,          \
                 row_data, emlrtHadParallelError)
  {
    try {

      e_st.prev = sp;
      e_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      e_st.site = nullptr;
      f_st.prev = &e_st;
      f_st.tls = e_st.tls;
      g_st.prev = &f_st;
      g_st.tls = f_st.tls;
      h_st.prev = &g_st;
      h_st.tls = g_st.tls;
      i_st.prev = &h_st;
      i_st.tls = h_st.tls;
      j_st.prev = &i_st;
      j_st.tls = i_st.tls;
      k_st.prev = &j_st;
      k_st.tls = j_st.tls;
      l_st.prev = &k_st;
      l_st.tls = k_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (b_i = 0; b_i <= idx; b_i++) {
      if (emlrtHadParallelError)
        continue;
      try {

        tempX.set_size(&s_emlrtRTEI, &e_st, 1, tempX.size(1));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &g_emlrtDCI, &e_st);
        }
        tempX.set_size(&s_emlrtRTEI, &e_st, tempX.size(0),
                       static_cast<int32_T>(numEdges));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &r_emlrtDCI, &e_st);
        }
        y_size = static_cast<int32_T>(numEdges);
        for (i4 = 0; i4 < y_size; i4++) {
          tempX[i4] = 0.0;
        }
        tempY.set_size(&t_emlrtRTEI, &e_st, 1, tempY.size(1));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &h_emlrtDCI, &e_st);
        }
        tempY.set_size(&t_emlrtRTEI, &e_st, tempY.size(0),
                       static_cast<int32_T>(numEdges));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &s_emlrtDCI, &e_st);
        }
        y_size = static_cast<int32_T>(numEdges);
        for (i4 = 0; i4 < y_size; i4++) {
          tempY[i4] = 0.0;
        }
        f_st.site = &d_emlrtRSI;
        b_endNodes_size[0] = endNodes_size[0];
        b_endNodes_size[1] = 2;
        y_size = endNodes_size[0] * 2;
        for (i4 = 0; i4 < y_size; i4++) {
          b_endNodes_data[i4] =
              (endNodes_data[i4] == static_cast<real_T>(b_i) + 1.0);
        }
        g_st.site = &x_emlrtRSI;
        coder::b_eml_find(&g_st, b_endNodes_data, b_endNodes_size, b_ii_data,
                          &y_size, jj_data, &n_size);
        row_size = y_size;
        if (0 <= y_size - 1) {
          std::copy(&b_ii_data[0], &b_ii_data[y_size], &row_data[0]);
        }
        for (i4 = 0; i4 < y_size; i4++) {
          n_data[i4] = b_ii_data[i4];
        }
        f_st.site = &e_emlrtRSI;
        for (i4 = 0; i4 < y_size; i4++) {
          i5 = row_data[i4];
          if ((i5 < 1) || (i5 > endNodes_size[0])) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, endNodes_size[0], &db_emlrtBCI,
                                          &f_st);
          }
        }
        c_endNodes_size[0] = y_size;
        c_endNodes_size[1] = 2;
        for (i4 = 0; i4 < 2; i4++) {
          for (i5 = 0; i5 < y_size; i5++) {
            c_endNodes_data[i5 + y_size * i4] =
                (endNodes_data[(static_cast<int32_T>(n_data[i5]) +
                                endNodes_size[0] * i4) -
                               1] != static_cast<real_T>(b_i) + 1.0);
          }
        }
        g_st.site = &x_emlrtRSI;
        coder::b_eml_find(&g_st, c_endNodes_data, c_endNodes_size, b_ii_data,
                          &y_size, jj_data, &n_size);
        for (i4 = 0; i4 < n_size; i4++) {
          col_data[i4] = jj_data[i4];
        }
        f_st.site = &f_emlrtRSI;
        coder::flipud(col_data, &n_size);
        //  I have no clue why the column data is upside down
        refArray.set_size(&u_emlrtRTEI, &e_st, row_size, n_size);
        for (i4 = 0; i4 < n_size; i4++) {
          for (i5 = 0; i5 < row_size; i5++) {
            y_size = row_data[i5];
            if ((y_size < 1) || (y_size > endNodes_size[0])) {
              emlrtDynamicBoundsCheckR2012b(y_size, 1, endNodes_size[0],
                                            &eb_emlrtBCI, &e_st);
            }
            refArray[i5 + refArray.size(0) * i4] =
                endNodes_data[(row_data[i5] +
                               endNodes_size[0] *
                                   (static_cast<int32_T>(col_data[i4]) - 1)) -
                              1];
          }
        }
        //     I have no clue why the hell the diagonal is the node data i want
        f_st.site = &g_emlrtRSI;
        coder::diag(&f_st, refArray, n_data, &n_size);
        if (static_cast<int32_T>(b_i + 1U) > nodesY_size[0]) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                        nodesY_size[0], &fb_emlrtBCI, &e_st);
        }
        y_size = n_size;
        for (i4 = 0; i4 < n_size; i4++) {
          d2 = n_data[i4];
          if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
            emlrtIntegerCheckR2012b(d2, &t_emlrtDCI, &e_st);
          }
          if ((static_cast<int32_T>(d2) < 1) ||
              (static_cast<int32_T>(d2) > nodesY_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                          nodesY_size[0], &gb_emlrtBCI, &e_st);
          }
          y_data[i4] =
              nodesY_data[static_cast<int32_T>(d2) - 1] - nodesY_data[b_i];
        }
        if (static_cast<int32_T>(b_i + 1U) > nodesX_size[0]) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                        nodesX_size[0], &hb_emlrtBCI, &e_st);
        }
        for (i4 = 0; i4 < n_size; i4++) {
          d2 = n_data[i4];
          if ((static_cast<int32_T>(d2) < 1) ||
              (static_cast<int32_T>(d2) > nodesX_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                          nodesX_size[0], &ib_emlrtBCI, &e_st);
          }
          x_data[i4] =
              nodesX_data[static_cast<int32_T>(d2) - 1] - nodesX_data[b_i];
        }
        f_st.site = &h_emlrtRSI;
        g_st.site = &fb_emlrtRSI;
        h_st.site = &gb_emlrtRSI;
        x_size[0] = n_size;
        x_size[1] = 2;
        if (0 <= n_size - 1) {
          std::copy(&x_data[0], &x_data[n_size], &col_data[0]);
        }
        for (i4 = 0; i4 < n_size; i4++) {
          col_data[i4 + n_size] = y_data[i4];
        }
        coder::power(col_data, x_size, b_tmp_data, tmp_size);
        f_st.site = &h_emlrtRSI;
        coder::sum(b_tmp_data, tmp_size, n_data, &n_size);
        f_st.site = &h_emlrtRSI;
        coder::b_sqrt(&f_st, n_data, &n_size);
        f_st.site = &i_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        h_st.site = &qb_emlrtRSI;
        i_st.site = &rb_emlrtRSI;
        j_st.site = &sb_emlrtRSI;
        k_st.site = &tb_emlrtRSI;
        if (y_size <= n_size) {
          i6 = static_cast<int16_T>(y_size);
        } else {
          i6 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k < 2)) {
          if (k + 1 <= 1) {
            i4 = i6;
            i5 = y_size;
          } else {
            i4 = 1;
            i5 = 1;
          }
          if (i4 != i5) {
            b_p = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
        if (b_p) {
          b_p = true;
          k = 0;
          exitg1 = false;
          while ((!exitg1) && (k < 2)) {
            if (k + 1 <= 1) {
              i4 = i6;
              i5 = n_size;
            } else {
              i4 = 1;
              i5 = 1;
            }
            if (i4 != i5) {
              b_p = false;
              exitg1 = true;
            } else {
              k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&k_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        k_st.site = &ub_emlrtRSI;
        l_st.site = &vb_emlrtRSI;
        if (y_size <= n_size) {
          i6 = static_cast<int16_T>(y_size);
        } else {
          i6 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k < 2)) {
          if (k + 1 <= 1) {
            i4 = i6;
            i5 = y_size;
          } else {
            i4 = 1;
            i5 = 1;
          }
          if (i4 != i5) {
            b_p = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
        if (b_p) {
          b_p = true;
          k = 0;
          exitg1 = false;
          while ((!exitg1) && (k < 2)) {
            if (k + 1 <= 1) {
              i4 = i6;
              i5 = n_size;
            } else {
              i4 = 1;
              i5 = 1;
            }
            if (i4 != i5) {
              b_p = false;
              exitg1 = true;
            } else {
              k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&l_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        for (i4 = 0; i4 < y_size; i4++) {
          x_data[i4] /= n_data[i4];
        }
        f_st.site = &j_emlrtRSI;
        g_st.site = &pb_emlrtRSI;
        h_st.site = &qb_emlrtRSI;
        i_st.site = &rb_emlrtRSI;
        j_st.site = &sb_emlrtRSI;
        k_st.site = &tb_emlrtRSI;
        if (y_size <= n_size) {
          i6 = static_cast<int16_T>(y_size);
        } else {
          i6 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k < 2)) {
          if (k + 1 <= 1) {
            i4 = i6;
            i5 = y_size;
          } else {
            i4 = 1;
            i5 = 1;
          }
          if (i4 != i5) {
            b_p = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
        if (b_p) {
          b_p = true;
          k = 0;
          exitg1 = false;
          while ((!exitg1) && (k < 2)) {
            if (k + 1 <= 1) {
              i4 = i6;
              i5 = n_size;
            } else {
              i4 = 1;
              i5 = 1;
            }
            if (i4 != i5) {
              b_p = false;
              exitg1 = true;
            } else {
              k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&k_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        k_st.site = &ub_emlrtRSI;
        l_st.site = &vb_emlrtRSI;
        if (y_size <= n_size) {
          i6 = static_cast<int16_T>(y_size);
        } else {
          i6 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k < 2)) {
          if (k + 1 <= 1) {
            i4 = i6;
            i5 = y_size;
          } else {
            i4 = 1;
            i5 = 1;
          }
          if (i4 != i5) {
            b_p = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
        if (b_p) {
          b_p = true;
          k = 0;
          exitg1 = false;
          while ((!exitg1) && (k < 2)) {
            if (k + 1 <= 1) {
              i4 = i6;
              i5 = n_size;
            } else {
              i4 = 1;
              i5 = 1;
            }
            if (i4 != i5) {
              b_p = false;
              exitg1 = true;
            } else {
              k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&l_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        for (i4 = 0; i4 < y_size; i4++) {
          y_data[i4] /= n_data[i4];
        }
        for (i4 = 0; i4 < row_size; i4++) {
          i5 = row_data[i4];
          if ((i5 < 1) || (i5 > static_cast<int32_T>(numEdges))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, static_cast<int32_T>(numEdges),
                                          &jb_emlrtBCI, &e_st);
          }
          c_tmp_data[i4] = i5 - 1;
        }
        tmp_size[0] = 1;
        tmp_size[1] = row_size;
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &y_size, 1, &emlrtECI,
                                      &e_st);
        for (i4 = 0; i4 < row_size; i4++) {
          tempX[c_tmp_data[i4]] = x_data[i4];
        }
        // Odd rows are sum Fx
        for (i4 = 0; i4 < row_size; i4++) {
          i5 = row_data[i4];
          if ((i5 < 1) || (i5 > static_cast<int32_T>(numEdges))) {
            emlrtDynamicBoundsCheckR2012b(i5, 1, static_cast<int32_T>(numEdges),
                                          &kb_emlrtBCI, &e_st);
          }
          c_tmp_data[i4] = i5 - 1;
        }
        tmp_size[0] = 1;
        tmp_size[1] = row_size;
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &y_size, 1, &b_emlrtECI,
                                      &e_st);
        for (i4 = 0; i4 < row_size; i4++) {
          tempY[c_tmp_data[i4]] = y_data[i4];
        }
        // Even rows are sum Fy
        if (b_i + 1 > xEquationArray.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, xEquationArray.size(0),
                                        &emlrtBCI, &e_st);
        }
        tmp_size[0] = 1;
        tmp_size[1] = xEquationArray.size(1);
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, tempX.size(), 2,
                                      &c_emlrtECI, &e_st);
        y_size = tempX.size(1);
        for (i4 = 0; i4 < y_size; i4++) {
          xEquationArray[b_i + xEquationArray.size(0) * i4] = tempX[i4];
        }
        if (b_i + 1 > yEquationArray.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, yEquationArray.size(0),
                                        &d_emlrtBCI, &e_st);
        }
        tmp_size[0] = 1;
        tmp_size[1] = yEquationArray.size(1);
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, tempY.size(), 2,
                                      &d_emlrtECI, &e_st);
        y_size = tempY.size(1);
        for (i4 = 0; i4 < y_size; i4++) {
          yEquationArray[b_i + yEquationArray.size(0) * i4] = tempY[i4];
        }
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&e_st);
        }
      } catch (...) {
        emlrtHadParallelError = true;
      }
    }
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&e_st, 3);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  if (1.0 > numNodes) {
    loop_ub = 0;
  } else {
    if (1 > xEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, xEquationArray.size(0), &b_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (static_cast<int32_T>(numNodes) > xEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numNodes), 1,
                                    xEquationArray.size(0), &c_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = static_cast<int32_T>(numNodes);
  }
  u = static_cast<uint32_T>(numNodes) << 1;
  if (1U > u) {
    i = 1;
    i1 = 0;
  } else {
    if (1 > nodeEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nodeEquationArray.size(0),
                                    &i_emlrtBCI, (emlrtCTX)sp);
    }
    i = 2;
    if ((static_cast<int32_T>(u) < 1) ||
        (static_cast<int32_T>(u) > nodeEquationArray.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                    nodeEquationArray.size(0), &j_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i1 = static_cast<int32_T>(u);
  }
  if (1.0 > numEdges) {
    i2 = 0;
  } else {
    if (1 > nodeEquationArray.size(1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nodeEquationArray.size(1),
                                    &k_emlrtBCI, (emlrtCTX)sp);
    }
    if ((static_cast<int32_T>(numEdges) < 1) ||
        (static_cast<int32_T>(numEdges) > nodeEquationArray.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges), 1,
                                    nodeEquationArray.size(1), &l_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i2 = static_cast<int32_T>(numEdges);
  }
  st.site = &gd_emlrtRSI;
  iv[0] = div_s32_floor(&st, i1 - 1, i) + 1;
  iv[1] = i2;
  iv1[0] = loop_ub;
  iv1[1] = xEquationArray.size(1);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &e_emlrtECI,
                                (emlrtCTX)sp);
  idx = xEquationArray.size(1);
  for (i1 = 0; i1 < idx; i1++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      nodeEquationArray[i * i2 + nodeEquationArray.size(0) * i1] =
          xEquationArray[i2 + xEquationArray.size(0) * i1];
    }
  }
  if (1.0 > numNodes) {
    loop_ub = 0;
  } else {
    if (1 > yEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, yEquationArray.size(0), &e_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (static_cast<int32_T>(numNodes) > yEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numNodes), 1,
                                    yEquationArray.size(0), &f_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    loop_ub = static_cast<int32_T>(numNodes);
  }
  if (2U > u) {
    i = 1;
    i1 = 1;
    i2 = 0;
  } else {
    if (2 > nodeEquationArray.size(0)) {
      emlrtDynamicBoundsCheckR2012b(2, 1, nodeEquationArray.size(0),
                                    &m_emlrtBCI, (emlrtCTX)sp);
    }
    i = 2;
    i1 = 2;
    if ((static_cast<int32_T>(u) < 1) ||
        (static_cast<int32_T>(u) > nodeEquationArray.size(0))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1,
                                    nodeEquationArray.size(0), &n_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i2 = static_cast<int32_T>(u);
  }
  if (1.0 > numEdges) {
    i3 = 0;
  } else {
    if (1 > nodeEquationArray.size(1)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, nodeEquationArray.size(1),
                                    &o_emlrtBCI, (emlrtCTX)sp);
    }
    if ((static_cast<int32_T>(numEdges) < 1) ||
        (static_cast<int32_T>(numEdges) > nodeEquationArray.size(1))) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges), 1,
                                    nodeEquationArray.size(1), &p_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    i3 = static_cast<int32_T>(numEdges);
  }
  st.site = &fd_emlrtRSI;
  iv[0] = div_s32_floor(&st, i2 - i, i1) + 1;
  iv[1] = i3;
  iv1[0] = loop_ub;
  iv1[1] = yEquationArray.size(1);
  emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI,
                                (emlrtCTX)sp);
  idx = yEquationArray.size(1);
  for (i2 = 0; i2 < idx; i2++) {
    for (i3 = 0; i3 < loop_ub; i3++) {
      nodeEquationArray[((i + i1 * i3) + nodeEquationArray.size(0) * i2) - 1] =
          yEquationArray[i3 + yEquationArray.size(0) * i2];
    }
  }
  st.site = &k_emlrtRSI;
  coder::mldivide(&st, nodeEquationArray, forceArray, tensionArray);
  // Solving the systems to find the tension array
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

// End of code generation (tensionCalculator3.cpp)
