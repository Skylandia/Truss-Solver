//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_tensionCalculator3_api.cpp
//
// Code generation for function 'tensionCalculator3'
//

// Include files
#include "_coder_tensionCalculator3_api.h"
#include "_coder_tensionCalculator3_mex.h"
#include "coder_array_mex.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131611U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "tensionCalculator3",                                 // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

// Function Declarations
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *endNodes,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T *ret_size);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nodesX,
                             const char_T *identifier, real_T **y_data,
                             int32_T *y_size);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T **y_data, int32_T *y_size);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *numNodes,
                               const char_T *identifier);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u);

// Function Definitions
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims{0};
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *endNodes,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(endNodes), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&endNodes);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  real_T *r;
  d_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T *ret_size)
{
  static const int32_T dims{99};
  const boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, ret_size);
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2]{195, 2};
  int32_T iv[2];
  const boolean_T bv[2]{true, false};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *nodesX,
                             const char_T *identifier, real_T **y_data,
                             int32_T *y_size)
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  int32_T i;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(nodesX), &thisId, &r, &i);
  *y_size = i;
  *y_data = r;
  emlrtDestroyArray(&nodesX);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T **y_data, int32_T *y_size)
{
  real_T *r;
  int32_T i;
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r, &i);
  *y_size = i;
  *y_data = r;
  emlrtDestroyArray(&u);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *numNodes,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(numNodes), &thisId);
  emlrtDestroyArray(&numNodes);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *emlrt_marshallOut(const coder::array<real_T, 1U> &u)
{
  static const int32_T i{0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &(((coder::array<real_T, 1U> *)&u)->data())[0]);
  emlrtSetDimensions((mxArray *)m, ((coder::array<real_T, 1U> *)&u)->size(), 1);
  emlrtAssign(&y, m);
  return y;
}

void tensionCalculator3_api(const mxArray *const prhs[7], const mxArray **plhs)
{
  coder::array<real_T, 1U> tensionArray;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*endNodes_data)[390];
  real_T(*nodesX_data)[99];
  real_T(*nodesY_data)[99];
  real_T numEdges;
  real_T numNodes;
  real_T weightMagnitude;
  real_T weightNode;
  int32_T endNodes_size[2];
  int32_T nodesX_size;
  int32_T nodesY_size;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  // Marshall function inputs
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "nodesX", (real_T **)&nodesX_data,
                   &nodesX_size);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "nodesY", (real_T **)&nodesY_data,
                   &nodesY_size);
  numNodes = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "numNodes");
  numEdges = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "numEdges");
  b_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "endNodes",
                     (real_T **)&endNodes_data, endNodes_size);
  weightMagnitude =
      emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "weightMagnitude");
  weightNode = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "weightNode");
  // Invoke the target function
  tensionCalculator3(*nodesX_data, *(int32_T(*)[1]) & nodesX_size, *nodesY_data,
                     *(int32_T(*)[1]) & nodesY_size, numNodes, numEdges,
                     *endNodes_data, endNodes_size, weightMagnitude, weightNode,
                     tensionArray);
  // Marshall function outputs
  tensionArray.no_free();
  *plhs = emlrt_marshallOut(tensionArray);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void tensionCalculator3_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  tensionCalculator3_xil_terminate();
  tensionCalculator3_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void tensionCalculator3_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void tensionCalculator3_terminate()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (_coder_tensionCalculator3_api.cpp)
