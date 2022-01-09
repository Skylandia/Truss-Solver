//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_findMemberType5_api.h
//
// Code generation for function 'findMemberType5'
//

#ifndef _CODER_FINDMEMBERTYPE5_API_H
#define _CODER_FINDMEMBERTYPE5_API_H

// Include files
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Type Definitions
typedef struct {
  coder::bounded_array<char_T, 25U, 2U> f1;
} cell_wrap_0;

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void findMemberType5(real_T memberForces_data[], int32_T memberForces_size[1],
                     cell_wrap_0 beamType_data[], int32_T beamType_size[1],
                     real_T memLenghths_data[], int32_T memLenghths_size[1],
                     real_T safteyFactor, real_T safteyFactor_Members_data[],
                     int32_T safteyFactor_Members_size[1],
                     boolean_T *isPossible);

void findMemberType5_api(const mxArray *const prhs[4], int32_T nlhs,
                         const mxArray *plhs[3]);

void findMemberType5_atexit();

void findMemberType5_initialize();

void findMemberType5_terminate();

void findMemberType5_xil_shutdown();

void findMemberType5_xil_terminate();

#endif
// End of code generation (_coder_findMemberType5_api.h)
