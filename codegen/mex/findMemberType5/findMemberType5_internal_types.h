//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType5_internal_types.h
//
// Code generation for function 'findMemberType5'
//

#pragma once

// Include files
#include "findMemberType5_types.h"
#include "rtwtypes.h"
#include "emlrt.h"

// Type Definitions
struct cell_wrap_7 {
  char_T f1[10];
};

struct cell_8 {
  cell_wrap_7 f1[6];
  real_T f2[6];
  real_T f3[6];
};

struct emxArray_char_T_1x10 {
  char_T data[10];
  int32_T size[2];
};

struct cell_wrap_5 {
  emxArray_char_T_1x10 f1;
};

struct cell_6 {
  cell_wrap_5 f1[6];
  real_T f2[6];
  real_T f3[6];
};

struct emxArray_char_T_1x0 {
  int32_T size[2];
};

struct rtDesignRangeCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtRunTimeErrorInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

// End of code generation (findMemberType5_internal_types.h)
