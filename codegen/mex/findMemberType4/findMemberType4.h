//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType4.h
//
// Code generation for function 'findMemberType4'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "table.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void findMemberType4(const emlrtStack *sp, const coder::e_table *edgesTable,
                     real_T safteyFactor, cell_wrap_6 beamType_data[],
                     int32_T beamType_size[1],
                     real_T safteyFactor_Members_data[],
                     int32_T safteyFactor_Members_size[1],
                     boolean_T *isPossible);

// End of code generation (findMemberType4.h)
