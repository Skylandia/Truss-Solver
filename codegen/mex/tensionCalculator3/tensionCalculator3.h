//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tensionCalculator3.h
//
// Code generation for function 'tensionCalculator3'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
emlrtCTX emlrtGetRootTLSGlobal();

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

void tensionCalculator3(const emlrtStack *sp,
                        const coder::array<real_T, 1U> &nodesX,
                        const coder::array<real_T, 1U> &nodesY, real_T numNodes,
                        real_T numEdges, const real_T endNodes_data[],
                        const int32_T endNodes_size[2], real_T weightMagnitude,
                        real_T weightNode,
                        coder::array<real_T, 1U> &tensionArray);

// End of code generation (tensionCalculator3.h)
