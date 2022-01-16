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
#include "eml_int_forloop_overflow_check.h"
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
    180,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    891,                    // lineNo
    "maxRealVectorOmitNaN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    62,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    54,                      // lineNo
    "vectorMinOrMaxInPlace", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    103,         // lineNo
    "findFirst", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    120,                        // lineNo
    "minOrMaxRealVectorKernel", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\vectorMinOrMaxInPlace.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

static emlrtRSInfo
    cb_emlrtRSI{
        46,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    db_emlrtRSI{
        92,        // lineNo
        "minimum", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo eb_emlrtRSI{
    198,             // lineNo
    "unaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    887,                    // lineNo
    "minRealVectorOmitNaN", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    35,     // lineNo
    "find", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    22,    // lineNo
    "cat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    96,         // lineNo
    "cat_impl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    51,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

static emlrtRSInfo ac_emlrtRSI{
    259,                    // lineNo
    "assertCompatibleSize", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

static emlrtRSInfo bc_emlrtRSI{
    52,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo cc_emlrtRSI{
    45,                          // lineNo
    "applyBinaryScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtRSInfo dc_emlrtRSI{
    66,                          // lineNo
    "applyBinaryScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
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
        41,                   // lineNo
        27,                   // colNo
        "pinNode",            // aName
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
        19,                   // colNo
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
        23,                   // colNo
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
        34,                   // colNo
        "nodeEquationArray",  // aName
        "tensionCalculator3", // fName
        "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
        "Solver\\tensionCalculator3.m", // pName
        0                               // checkKind
    };

static emlrtBCInfo
    m_emlrtBCI{
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
    n_emlrtBCI{
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
    o_emlrtBCI{
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
    p_emlrtBCI{
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
    q_emlrtBCI{
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
    r_emlrtBCI{
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
    126,             // lineNo
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
    s_emlrtBCI{
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
    t_emlrtBCI{
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
    u_emlrtBCI{
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
    v_emlrtBCI{
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
    w_emlrtBCI{
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
    x_emlrtBCI{
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
    y_emlrtBCI{
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
    ab_emlrtBCI{
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
    bb_emlrtBCI{
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
    cb_emlrtBCI{
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
    db_emlrtBCI{
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
    eb_emlrtBCI{
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
    fb_emlrtBCI{
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
    gb_emlrtBCI{
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
    hb_emlrtBCI{
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
    ib_emlrtBCI{
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
    jb_emlrtBCI{
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
    kb_emlrtBCI{
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
    lb_emlrtBCI{
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
    11,                   // lineNo
    15,                   // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo p_emlrtRTEI{
    1,                    // lineNo
    27,                   // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo q_emlrtRTEI{
    17,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    19,                   // lineNo
    18,                   // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo s_emlrtRTEI{
    20,                   // lineNo
    18,                   // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo t_emlrtRTEI{
    33,                   // lineNo
    1,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    47,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo v_emlrtRTEI{
    48,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRTEInfo w_emlrtRTEI{
    54,                   // lineNo
    5,                    // colNo
    "tensionCalculator3", // fName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pName
};

static emlrtRSInfo nd_emlrtRSI{
    72,                   // lineNo
    "tensionCalculator3", // fcnName
    "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\tensionCalculator3.m" // pathName
};

static emlrtRSInfo od_emlrtRSI{
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

void tensionCalculator3(const emlrtStack *sp,
                        const coder::array<real_T, 1U> &nodesX,
                        const coder::array<real_T, 1U> &nodesY, real_T numNodes,
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
  coder::array<int32_T, 1U> ii;
  coder::array<int32_T, 1U> r;
  coder::array<uint32_T, 1U> pinNode;
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
  emlrtStack n_st;
  emlrtStack o_st;
  emlrtStack p_st;
  emlrtStack q_st;
  emlrtStack st;
  real_T col_data[780];
  real_T tmp_data[780];
  real_T n_data[390];
  real_T x_data[390];
  real_T y_data[390];
  real_T d;
  real_T d1;
  real_T d2;
  real_T maximum;
  real_T minimum;
  int32_T ii_data[780];
  int32_T jj_data[780];
  int32_T row_data[780];
  int32_T b_tmp_data[390];
  int32_T b_endNodes_size[2];
  int32_T c_endNodes_size[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T tmp_size[2];
  int32_T x_size[2];
  int32_T a;
  int32_T b_i;
  int32_T b_k;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T idx;
  int32_T k;
  int32_T last;
  int32_T n_size;
  int32_T row_size;
  int32_T y_size;
  uint32_T u;
  int16_T i4;
  boolean_T c_endNodes_data[780];
  boolean_T b_endNodes_data[390];
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
  b_nodesY.set_size(&o_emlrtRTEI, &st, nodesY.size(0));
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
    emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
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
      emlrtDynamicBoundsCheckR2012b(ii[a], 1, nodesX.size(0), &w_emlrtBCI,
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
      emlrtDynamicBoundsCheckR2012b(i1, 1, nodesX.size(0), &x_emlrtBCI,
                                    (emlrtCTX)sp);
    }
  }
  idx = ii.size(0) - 1;
  last = 0;
  for (a = 0; a <= idx; a++) {
    if ((ii[a] < 1) || (ii[a] > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(ii[a], 1, nodesX.size(0), &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (nodesX[ii[a] - 1] == minimum) {
      last++;
    }
  }
  pinNode.set_size(&p_emlrtRTEI, sp, last);
  last = 0;
  for (a = 0; a <= idx; a++) {
    if ((ii[a] < 1) || (ii[a] > nodesX.size(0))) {
      emlrtDynamicBoundsCheckR2012b(ii[a], 1, nodesX.size(0), &y_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (nodesX[ii[a] - 1] == minimum) {
      if (a + 1 > ii.size(0)) {
        emlrtDynamicBoundsCheckR2012b(a + 1, 1, ii.size(0), &ab_emlrtBCI,
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
  nodeEquationArray.set_size(&q_emlrtRTEI, sp, static_cast<int32_T>(d),
                             nodeEquationArray.size(1));
  if (!(numEdges + 3.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numEdges + 3.0, &f_emlrtDCI, (emlrtCTX)sp);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(numEdges + 3.0));
  if (numEdges + 3.0 != d1) {
    emlrtIntegerCheckR2012b(numEdges + 3.0, &e_emlrtDCI, (emlrtCTX)sp);
  }
  nodeEquationArray.set_size(&q_emlrtRTEI, sp, nodeEquationArray.size(0),
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
  xEquationArray.set_size(&r_emlrtRTEI, sp, static_cast<int32_T>(numNodes),
                          xEquationArray.size(1));
  if (!(numEdges >= 0.0)) {
    emlrtNonNegativeCheckR2012b(numEdges, &n_emlrtDCI, (emlrtCTX)sp);
  }
  d1 = static_cast<int32_T>(muDoubleScalarFloor(numEdges));
  if (numEdges != d1) {
    emlrtIntegerCheckR2012b(numEdges, &m_emlrtDCI, (emlrtCTX)sp);
  }
  xEquationArray.set_size(&r_emlrtRTEI, sp, xEquationArray.size(0),
                          static_cast<int32_T>(numEdges));
  if (numNodes != i) {
    emlrtIntegerCheckR2012b(numNodes, &o_emlrtDCI, (emlrtCTX)sp);
  }
  i1 = static_cast<int32_T>(numNodes);
  yEquationArray.set_size(&s_emlrtRTEI, sp, i1, yEquationArray.size(1));
  if (numEdges != d1) {
    emlrtIntegerCheckR2012b(numEdges, &p_emlrtDCI, (emlrtCTX)sp);
  }
  yEquationArray.set_size(&s_emlrtRTEI, sp, yEquationArray.size(0),
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
  forceArray.set_size(&t_emlrtRTEI, sp, static_cast<int32_T>(d));
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
  if (1 > pinNode.size(0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, pinNode.size(0), &g_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  u = pinNode[0] << 1;
  if ((static_cast<int32_T>(u) < 1) || (static_cast<int32_T>(u) > a)) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(u), 1, a, &bb_emlrtBCI,
                                  (emlrtCTX)sp);
  }
  if ((static_cast<int32_T>(numEdges + 1.0) < 1) ||
      (static_cast<int32_T>(numEdges + 1.0) >
       static_cast<int32_T>(numEdges + 3.0))) {
    emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(numEdges + 1.0), 1,
                                  static_cast<int32_T>(numEdges + 3.0),
                                  &bb_emlrtBCI, (emlrtCTX)sp);
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
  if (1 > last) {
    emlrtDynamicBoundsCheckR2012b(1, 1, last, &h_emlrtBCI, (emlrtCTX)sp);
  }
  idx = ii.size(0) - 1;
  last = 0;
  for (a = 0; a <= idx; a++) {
    if (nodesX[ii[a] - 1] == maximum) {
      last++;
    }
  }
  r.set_size(&p_emlrtRTEI, sp, last);
  last = 0;
  for (a = 0; a <= idx; a++) {
    if (nodesX[ii[a] - 1] == maximum) {
      r[last] = a + 1;
      last++;
    }
  }
  a = static_cast<int32_T>(static_cast<uint32_T>(ii[r[0] - 1]) << 1);
  if ((a < 1) || (a > nodeEquationArray.size(0))) {
    emlrtDynamicBoundsCheckR2012b(a, 1, nodeEquationArray.size(0), &cb_emlrtBCI,
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
  if (1 > pinNode.size(0)) {
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
                                  nodeEquationArray.size(1), &db_emlrtBCI,
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
    omp_get_num_procs())) private(tempX, tempY, refArray, y_data, y_size,      \
                                  x_data, n_data, n_size, col_data, q_st, i2,  \
                                  b_endNodes_size, b_endNodes_data, jj_data,   \
                                  row_size, c_endNodes_size, i3,               \
                                  c_endNodes_data, b_i, d2, x_size, tmp_data,  \
                                  tmp_size, i4, p, b_p, b_k, exitg1,           \
                                  b_tmp_data)                                  \
    firstprivate(j_st, k_st, l_st, m_st, n_st, o_st, p_st, ii_data, row_data,  \
                 emlrtHadParallelError)
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
      n_st.prev = &m_st;
      n_st.tls = m_st.tls;
      o_st.prev = &n_st;
      o_st.tls = n_st.tls;
      p_st.prev = &o_st;
      p_st.tls = o_st.tls;
      q_st.prev = &p_st;
      q_st.tls = p_st.tls;
    } catch (...) {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (b_i = 0; b_i <= last; b_i++) {
      if (emlrtHadParallelError)
        continue;
      try {

        tempX.set_size(&u_emlrtRTEI, &j_st, 1, tempX.size(1));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &g_emlrtDCI, &j_st);
        }
        tempX.set_size(&u_emlrtRTEI, &j_st, tempX.size(0),
                       static_cast<int32_T>(numEdges));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &r_emlrtDCI, &j_st);
        }
        y_size = static_cast<int32_T>(numEdges);
        for (i2 = 0; i2 < y_size; i2++) {
          tempX[i2] = 0.0;
        }
        tempY.set_size(&v_emlrtRTEI, &j_st, 1, tempY.size(1));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &h_emlrtDCI, &j_st);
        }
        tempY.set_size(&v_emlrtRTEI, &j_st, tempY.size(0),
                       static_cast<int32_T>(numEdges));
        if (numEdges != static_cast<int32_T>(muDoubleScalarFloor(numEdges))) {
          emlrtIntegerCheckR2012b(numEdges, &s_emlrtDCI, &j_st);
        }
        y_size = static_cast<int32_T>(numEdges);
        for (i2 = 0; i2 < y_size; i2++) {
          tempY[i2] = 0.0;
        }
        k_st.site = &d_emlrtRSI;
        b_endNodes_size[0] = endNodes_size[0];
        b_endNodes_size[1] = 2;
        y_size = endNodes_size[0] * 2;
        for (i2 = 0; i2 < y_size; i2++) {
          b_endNodes_data[i2] =
              (endNodes_data[i2] == static_cast<real_T>(b_i) + 1.0);
        }
        l_st.site = &gb_emlrtRSI;
        coder::b_eml_find(&l_st, b_endNodes_data, b_endNodes_size, ii_data,
                          &y_size, jj_data, &n_size);
        row_size = y_size;
        if (0 <= y_size - 1) {
          std::copy(&ii_data[0], &ii_data[y_size], &row_data[0]);
        }
        for (i2 = 0; i2 < y_size; i2++) {
          n_data[i2] = ii_data[i2];
        }
        k_st.site = &e_emlrtRSI;
        for (i2 = 0; i2 < y_size; i2++) {
          i3 = row_data[i2];
          if ((i3 < 1) || (i3 > endNodes_size[0])) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, endNodes_size[0], &eb_emlrtBCI,
                                          &k_st);
          }
        }
        c_endNodes_size[0] = y_size;
        c_endNodes_size[1] = 2;
        for (i2 = 0; i2 < 2; i2++) {
          for (i3 = 0; i3 < y_size; i3++) {
            c_endNodes_data[i3 + y_size * i2] =
                (endNodes_data[(static_cast<int32_T>(n_data[i3]) +
                                endNodes_size[0] * i2) -
                               1] != static_cast<real_T>(b_i) + 1.0);
          }
        }
        l_st.site = &gb_emlrtRSI;
        coder::b_eml_find(&l_st, c_endNodes_data, c_endNodes_size, ii_data,
                          &y_size, jj_data, &n_size);
        for (i2 = 0; i2 < n_size; i2++) {
          col_data[i2] = jj_data[i2];
        }
        k_st.site = &f_emlrtRSI;
        coder::flipud(col_data, &n_size);
        //  I have no clue why the column data is upside down
        refArray.set_size(&w_emlrtRTEI, &j_st, row_size, n_size);
        for (i2 = 0; i2 < n_size; i2++) {
          for (i3 = 0; i3 < row_size; i3++) {
            y_size = row_data[i3];
            if ((y_size < 1) || (y_size > endNodes_size[0])) {
              emlrtDynamicBoundsCheckR2012b(y_size, 1, endNodes_size[0],
                                            &fb_emlrtBCI, &j_st);
            }
            refArray[i3 + refArray.size(0) * i2] =
                endNodes_data[(row_data[i3] +
                               endNodes_size[0] *
                                   (static_cast<int32_T>(col_data[i2]) - 1)) -
                              1];
          }
        }
        //     I have no clue why the hell the diagonal is the node data i want
        k_st.site = &g_emlrtRSI;
        coder::diag(&k_st, refArray, n_data, &n_size);
        if (static_cast<int32_T>(b_i + 1U) > nodesY.size(0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                        nodesY.size(0), &gb_emlrtBCI, &j_st);
        }
        y_size = n_size;
        for (i2 = 0; i2 < n_size; i2++) {
          d2 = n_data[i2];
          if (d2 != static_cast<int32_T>(muDoubleScalarFloor(d2))) {
            emlrtIntegerCheckR2012b(d2, &t_emlrtDCI, &j_st);
          }
          if ((static_cast<int32_T>(d2) < 1) ||
              (static_cast<int32_T>(d2) > nodesY.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                          nodesY.size(0), &hb_emlrtBCI, &j_st);
          }
          y_data[i2] = nodesY[static_cast<int32_T>(d2) - 1] - nodesY[b_i];
        }
        if (static_cast<int32_T>(b_i + 1U) > nodesX.size(0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_i + 1U), 1,
                                        nodesX.size(0), &ib_emlrtBCI, &j_st);
        }
        for (i2 = 0; i2 < n_size; i2++) {
          d2 = n_data[i2];
          if ((static_cast<int32_T>(d2) < 1) ||
              (static_cast<int32_T>(d2) > nodesX.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d2), 1,
                                          nodesX.size(0), &jb_emlrtBCI, &j_st);
          }
          x_data[i2] = nodesX[static_cast<int32_T>(d2) - 1] - nodesX[b_i];
        }
        k_st.site = &h_emlrtRSI;
        l_st.site = &nb_emlrtRSI;
        m_st.site = &ob_emlrtRSI;
        x_size[0] = n_size;
        x_size[1] = 2;
        if (0 <= n_size - 1) {
          std::copy(&x_data[0], &x_data[n_size], &col_data[0]);
        }
        for (i2 = 0; i2 < n_size; i2++) {
          col_data[i2 + n_size] = y_data[i2];
        }
        coder::power(col_data, x_size, tmp_data, tmp_size);
        k_st.site = &h_emlrtRSI;
        coder::sum(tmp_data, tmp_size, n_data, &n_size);
        k_st.site = &h_emlrtRSI;
        coder::b_sqrt(&k_st, n_data, &n_size);
        k_st.site = &i_emlrtRSI;
        l_st.site = &xb_emlrtRSI;
        m_st.site = &yb_emlrtRSI;
        n_st.site = &ac_emlrtRSI;
        o_st.site = &bc_emlrtRSI;
        p_st.site = &cc_emlrtRSI;
        if (y_size <= n_size) {
          i4 = static_cast<int16_T>(y_size);
        } else {
          i4 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 2)) {
          if (b_k + 1 <= 1) {
            i2 = i4;
            i3 = y_size;
          } else {
            i2 = 1;
            i3 = 1;
          }
          if (i2 != i3) {
            b_p = false;
            exitg1 = true;
          } else {
            b_k++;
          }
        }
        if (b_p) {
          b_p = true;
          b_k = 0;
          exitg1 = false;
          while ((!exitg1) && (b_k < 2)) {
            if (b_k + 1 <= 1) {
              i2 = i4;
              i3 = n_size;
            } else {
              i2 = 1;
              i3 = 1;
            }
            if (i2 != i3) {
              b_p = false;
              exitg1 = true;
            } else {
              b_k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&p_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        p_st.site = &dc_emlrtRSI;
        q_st.site = &ec_emlrtRSI;
        if (y_size <= n_size) {
          i4 = static_cast<int16_T>(y_size);
        } else {
          i4 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 2)) {
          if (b_k + 1 <= 1) {
            i2 = i4;
            i3 = y_size;
          } else {
            i2 = 1;
            i3 = 1;
          }
          if (i2 != i3) {
            b_p = false;
            exitg1 = true;
          } else {
            b_k++;
          }
        }
        if (b_p) {
          b_p = true;
          b_k = 0;
          exitg1 = false;
          while ((!exitg1) && (b_k < 2)) {
            if (b_k + 1 <= 1) {
              i2 = i4;
              i3 = n_size;
            } else {
              i2 = 1;
              i3 = 1;
            }
            if (i2 != i3) {
              b_p = false;
              exitg1 = true;
            } else {
              b_k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&q_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        for (i2 = 0; i2 < y_size; i2++) {
          x_data[i2] /= n_data[i2];
        }
        k_st.site = &j_emlrtRSI;
        l_st.site = &xb_emlrtRSI;
        m_st.site = &yb_emlrtRSI;
        n_st.site = &ac_emlrtRSI;
        o_st.site = &bc_emlrtRSI;
        p_st.site = &cc_emlrtRSI;
        if (y_size <= n_size) {
          i4 = static_cast<int16_T>(y_size);
        } else {
          i4 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 2)) {
          if (b_k + 1 <= 1) {
            i2 = i4;
            i3 = y_size;
          } else {
            i2 = 1;
            i3 = 1;
          }
          if (i2 != i3) {
            b_p = false;
            exitg1 = true;
          } else {
            b_k++;
          }
        }
        if (b_p) {
          b_p = true;
          b_k = 0;
          exitg1 = false;
          while ((!exitg1) && (b_k < 2)) {
            if (b_k + 1 <= 1) {
              i2 = i4;
              i3 = n_size;
            } else {
              i2 = 1;
              i3 = 1;
            }
            if (i2 != i3) {
              b_p = false;
              exitg1 = true;
            } else {
              b_k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&p_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        p_st.site = &dc_emlrtRSI;
        q_st.site = &ec_emlrtRSI;
        if (y_size <= n_size) {
          i4 = static_cast<int16_T>(y_size);
        } else {
          i4 = static_cast<int16_T>(n_size);
        }
        p = true;
        b_p = true;
        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 2)) {
          if (b_k + 1 <= 1) {
            i2 = i4;
            i3 = y_size;
          } else {
            i2 = 1;
            i3 = 1;
          }
          if (i2 != i3) {
            b_p = false;
            exitg1 = true;
          } else {
            b_k++;
          }
        }
        if (b_p) {
          b_p = true;
          b_k = 0;
          exitg1 = false;
          while ((!exitg1) && (b_k < 2)) {
            if (b_k + 1 <= 1) {
              i2 = i4;
              i3 = n_size;
            } else {
              i2 = 1;
              i3 = 1;
            }
            if (i2 != i3) {
              b_p = false;
              exitg1 = true;
            } else {
              b_k++;
            }
          }
          if (!b_p) {
            p = false;
          }
        } else {
          p = false;
        }
        if (!p) {
          emlrtErrorWithMessageIdR2018a(&q_st, &e_emlrtRTEI, "MATLAB:dimagree",
                                        "MATLAB:dimagree", 0);
        }
        for (i2 = 0; i2 < y_size; i2++) {
          y_data[i2] /= n_data[i2];
        }
        for (i2 = 0; i2 < row_size; i2++) {
          i3 = row_data[i2];
          if ((i3 < 1) || (i3 > static_cast<int32_T>(numEdges))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(numEdges),
                                          &kb_emlrtBCI, &j_st);
          }
          b_tmp_data[i2] = i3 - 1;
        }
        tmp_size[0] = 1;
        tmp_size[1] = row_size;
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &y_size, 1, &emlrtECI,
                                      &j_st);
        for (i2 = 0; i2 < row_size; i2++) {
          tempX[b_tmp_data[i2]] = x_data[i2];
        }
        // Odd rows are sum Fx
        for (i2 = 0; i2 < row_size; i2++) {
          i3 = row_data[i2];
          if ((i3 < 1) || (i3 > static_cast<int32_T>(numEdges))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, static_cast<int32_T>(numEdges),
                                          &lb_emlrtBCI, &j_st);
          }
          b_tmp_data[i2] = i3 - 1;
        }
        tmp_size[0] = 1;
        tmp_size[1] = row_size;
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, &y_size, 1, &b_emlrtECI,
                                      &j_st);
        for (i2 = 0; i2 < row_size; i2++) {
          tempY[b_tmp_data[i2]] = y_data[i2];
        }
        // Even rows are sum Fy
        if (b_i + 1 > xEquationArray.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, xEquationArray.size(0),
                                        &emlrtBCI, &j_st);
        }
        tmp_size[0] = 1;
        tmp_size[1] = xEquationArray.size(1);
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, tempX.size(), 2,
                                      &c_emlrtECI, &j_st);
        y_size = tempX.size(1);
        for (i2 = 0; i2 < y_size; i2++) {
          xEquationArray[b_i + xEquationArray.size(0) * i2] = tempX[i2];
        }
        if (b_i + 1 > yEquationArray.size(0)) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, yEquationArray.size(0),
                                        &d_emlrtBCI, &j_st);
        }
        tmp_size[0] = 1;
        tmp_size[1] = yEquationArray.size(1);
        emlrtSubAssignSizeCheckR2012b(&tmp_size[0], 2, tempY.size(), 2,
                                      &d_emlrtECI, &j_st);
        y_size = tempY.size(1);
        for (i2 = 0; i2 < y_size; i2++) {
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
      emlrtHeapReferenceStackLeaveScope(&j_st, 3);
    }
  }
  emlrtExitParallelRegion((emlrtCTX)sp,
                          static_cast<boolean_T>(omp_in_parallel()));
  if (1.0 > numNodes) {
    last = 0;
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
    last = static_cast<int32_T>(numNodes);
  }
  u = static_cast<uint32_T>(numNodes) << 1;
  if (1U > u) {
    i = 1;
    i1 = 0;
  } else {
    if (1 > nodeEquationArray.size(0)) {
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
  if (1.0 > numEdges) {
    a = 0;
  } else {
    if (1 > nodeEquationArray.size(1)) {
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
  st.site = &od_emlrtRSI;
  iv[0] = div_s32_floor(&st, i1 - 1, i) + 1;
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
  if (1.0 > numNodes) {
    last = 0;
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
    last = static_cast<int32_T>(numNodes);
  }
  if (2U > u) {
    i = 1;
    i1 = 1;
    a = 0;
  } else {
    if (2 > nodeEquationArray.size(0)) {
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
  if (1.0 > numEdges) {
    k = 0;
  } else {
    if (1 > nodeEquationArray.size(1)) {
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
  st.site = &nd_emlrtRSI;
  iv[0] = div_s32_floor(&st, a - i, i1) + 1;
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
