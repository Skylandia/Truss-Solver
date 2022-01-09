//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_findMemberType4_api.h
//
// Code generation for function 'findMemberType4'
//

#ifndef _CODER_FINDMEMBERTYPE4_API_H
#define _CODER_FINDMEMBERTYPE4_API_H

// Include files
#include "coder_bounded_array.h"
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Type Definitions
struct matlab_internal_coder_tabular_private_metaDim_tag_0 {
  real_T length;
};
typedef matlab_internal_coder_tabular_private_metaDim_tag_0 metaDim;

struct rtString_tag_0 {
};
typedef rtString_tag_0 rtString;

struct matlab_internal_coder_tabular_private_rowNamesDim_tag_0 {
  rtString labels;
};
typedef matlab_internal_coder_tabular_private_rowNamesDim_tag_0 rowNamesDim;

enum matlab_internal_coder_tabular_Continuity
{
  unset = 0, // Default value
  continuous,
  step,
  event
};
typedef matlab_internal_coder_tabular_Continuity Continuity;

typedef struct {
  char_T f1[10];
} cell_wrap_4;

typedef struct {
  coder::bounded_array<real_T, 390U, 2U> f1;
  coder::bounded_array<cell_wrap_4, 195U, 1U> f2;
  coder::bounded_array<real_T, 195U, 1U> f3;
  coder::bounded_array<real_T, 195U, 1U> f4;
  coder::bounded_array<real_T, 195U, 1U> f5;
} cell_5;

typedef struct {
  coder::bounded_array<char_T, 10U, 2U> f1;
} cell_wrap_6;

struct matlab_internal_coder_tabular_private_varNamesDim_tag_0 {
  real_T length;
  Continuity continuity[5];
  boolean_T hasDescrs;
  boolean_T hasUnits;
  boolean_T hasContinuity;
  boolean_T hasCustomProps;
};
typedef matlab_internal_coder_tabular_private_varNamesDim_tag_0 varNamesDim;

struct table_tag_0 {
  metaDim b_metaDim;
  rowNamesDim rowDim;
  varNamesDim varDim;
  cell_5 data;
};
typedef table_tag_0 table;

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void findMemberType4(table *edgesTable, real_T safteyFactor,
                     cell_wrap_6 beamType_data[], int32_T beamType_size[1],
                     real_T safteyFactor_Members_data[],
                     int32_T safteyFactor_Members_size[1],
                     boolean_T *isPossible);

void findMemberType4_api(const mxArray *const prhs[2], int32_T nlhs,
                         const mxArray *plhs[3]);

void findMemberType4_atexit();

void findMemberType4_initialize();

void findMemberType4_terminate();

void findMemberType4_xil_shutdown();

void findMemberType4_xil_terminate();

#endif
// End of code generation (_coder_findMemberType4_api.h)
