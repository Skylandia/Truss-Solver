//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// _coder_tensionCalculator3_api.h
//
// Code generation for function 'tensionCalculator3'
//

#ifndef _CODER_TENSIONCALCULATOR3_API_H
#define _CODER_TENSIONCALCULATOR3_API_H

// Include files
#include "coder_array_mex.h"
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void tensionCalculator3(real_T nodesX_data[], int32_T nodesX_size[1],
                        real_T nodesY_data[], int32_T nodesY_size[1],
                        real_T numNodes, real_T numEdges,
                        real_T endNodes_data[], int32_T endNodes_size[2],
                        real_T weightMagnitude, real_T weightNode,
                        coder::array<real_T, 1U> *tensionArray);

void tensionCalculator3_api(const mxArray *const prhs[7], const mxArray **plhs);

void tensionCalculator3_atexit();

void tensionCalculator3_initialize();

void tensionCalculator3_terminate();

void tensionCalculator3_xil_shutdown();

void tensionCalculator3_xil_terminate();

#endif
// End of code generation (_coder_tensionCalculator3_api.h)
