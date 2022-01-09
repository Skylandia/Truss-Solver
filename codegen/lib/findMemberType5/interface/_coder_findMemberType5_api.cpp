//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_findMemberType5_api.cpp
//
// Code generation for function 'findMemberType5'
//

// Include files
#include "_coder_findMemberType5_api.h"
#include "_coder_findMemberType5_mex.h"
#include "coder_bounded_array.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131610U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "findMemberType5",                                    // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

// Function Declarations
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               char_T ret_data[], int32_T ret_size[2]);

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T *ret_size);

static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static const mxArray *b_emlrt_marshallOut(const boolean_T u);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *beamType,
                             const char_T *identifier, cell_wrap_0 y_data[],
                             int32_T *y_size);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_0 y_data[], int32_T *y_size);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             char_T y_data[], int32_T y_size[2]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *memberForces,
                             const char_T *identifier, real_T **y_data,
                             int32_T *y_size);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T **y_data, int32_T *y_size);

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *safteyFactor,
                               const char_T *identifier);

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId);

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T *u_size);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const cell_wrap_0 u_data[],
                                        const int32_T u_size);

// Function Definitions
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               char_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2]{1, 25};
  int32_T iv[2];
  const boolean_T bv[2]{false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 1, false);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T *ret_size)
{
  static const int32_T dims{195};
  const boolean_T b{true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, ret_size);
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

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

static const mxArray *b_emlrt_marshallOut(const boolean_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateLogicalScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *beamType,
                             const char_T *identifier, cell_wrap_0 y_data[],
                             int32_T *y_size)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(beamType), &thisId, y_data, y_size);
  emlrtDestroyArray(&beamType);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             cell_wrap_0 y_data[], int32_T *y_size)
{
  emlrtMsgIdentifier thisId;
  int32_T n;
  int32_T sizes;
  char_T str[11];
  boolean_T b;
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  b = true;
  n = 195;
  emlrtCheckVsCell((emlrtCTX)sp, parentId, u, 1U, &n, &b, &sizes);
  *y_size = sizes;
  for (n = 0; n < sizes; n++) {
    sprintf(&str[0], "%d", n + 1);
    thisId.fIdentifier = &str[0];
    emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((emlrtCTX)sp, parentId, u, n)),
                     &thisId, y_data[n].f1.data, y_data[n].f1.size);
  }
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             char_T y_data[], int32_T y_size[2])
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *memberForces,
                             const char_T *identifier, real_T **y_data,
                             int32_T *y_size)
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  int32_T i;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  emlrt_marshallIn(sp, emlrtAlias(memberForces), &thisId, &r, &i);
  *y_size = i;
  *y_data = r;
  emlrtDestroyArray(&memberForces);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                             const emlrtMsgIdentifier *parentId,
                             real_T **y_data, int32_T *y_size)
{
  b_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *safteyFactor,
                               const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(safteyFactor), &thisId);
  emlrtDestroyArray(&safteyFactor);
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

static const mxArray *emlrt_marshallOut(const real_T u_data[],
                                        const int32_T *u_size)
{
  static const int32_T i{0};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(1, (const void *)&i, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u_data[0]);
  emlrtSetDimensions((mxArray *)m, u_size, 1);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const cell_wrap_0 u_data[],
                                        const int32_T u_size)
{
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T iv[2];
  char_T b_u_data[25];
  y = nullptr;
  emlrtAssign(&y, emlrtCreateCellArrayR2014a(1, &u_size));
  for (int32_T i{0}; i < u_size; i++) {
    int32_T loop_ub;
    loop_ub = u_data[i].f1.size[1];
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_u_data[i1] = u_data[i].f1.data[i1];
    }
    b_y = nullptr;
    iv[0] = 1;
    iv[1] = u_data[i].f1.size[1];
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, u_data[i].f1.size[1], m,
                             &b_u_data[0]);
    emlrtAssign(&b_y, m);
    emlrtSetCell(y, i, b_y);
  }
  return y;
}

void findMemberType5_api(const mxArray *const prhs[4], int32_T nlhs,
                         const mxArray *plhs[3])
{
  coder::bounded_array<cell_wrap_0, 195U, 1U> beamType;
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real_T(*memLenghths_data)[195];
  real_T(*memberForces_data)[195];
  real_T(*safteyFactor_Members_data)[195];
  real_T safteyFactor;
  int32_T memLenghths_size;
  int32_T memberForces_size;
  int32_T safteyFactor_Members_size;
  boolean_T isPossible;
  st.tls = emlrtRootTLSGlobal;
  safteyFactor_Members_data = (real_T(*)[195])mxMalloc(sizeof(real_T[195]));
  // Marshall function inputs
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "memberForces",
                   (real_T **)&memberForces_data, &memberForces_size);
  emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "beamType", beamType.data,
                   &beamType.size[0]);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "memLenghths",
                   (real_T **)&memLenghths_data, &memLenghths_size);
  safteyFactor = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "safteyFactor");
  // Invoke the target function
  findMemberType5(*memberForces_data, *(int32_T(*)[1]) & memberForces_size,
                  beamType.data, beamType.size, *memLenghths_data,
                  *(int32_T(*)[1]) & memLenghths_size, safteyFactor,
                  *safteyFactor_Members_data,
                  *(int32_T(*)[1]) & safteyFactor_Members_size, &isPossible);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(&st, beamType.data, beamType.size[0]);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(*safteyFactor_Members_data,
                                &safteyFactor_Members_size);
  }
  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(isPossible);
  }
}

void findMemberType5_atexit()
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
  findMemberType5_xil_terminate();
  findMemberType5_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void findMemberType5_initialize()
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

void findMemberType5_terminate()
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

// End of code generation (_coder_findMemberType5_api.cpp)
