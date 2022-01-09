//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType5.h
//
// Code generation for function 'findMemberType5'
//

#pragma once

// Include files
#include "findMemberType5_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void findMemberType5(const emlrtStack *sp, const real_T memberForces_data[],
                     const int32_T memberForces_size[1],
                     cell_wrap_0 beamType_data[],
                     const int32_T beamType_size[1],
                     const real_T memLenghths_data[],
                     const int32_T memLenghths_size[1], real_T safteyFactor,
                     real_T safteyFactor_Members_data[],
                     int32_T safteyFactor_Members_size[1],
                     boolean_T *isPossible);

// End of code generation (findMemberType5.h)
