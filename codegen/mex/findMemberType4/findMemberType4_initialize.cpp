//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType4_initialize.cpp
//
// Code generation for function 'findMemberType4_initialize'
//

// Include files
#include "findMemberType4_initialize.h"
#include "_coder_findMemberType4_mex.h"
#include "findMemberType4_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void findMemberType4_once();

// Function Definitions
static void findMemberType4_once()
{
  mex_InitInfAndNan();
  // Allocate instance data
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  // Initialize Coverage Information
  covrtScriptInit(
      &emlrtCoverageInstance,
      "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\findMemberType4.m", 0U,
      1U, 8U, 4U, 0U, 0U, 0U, 1U, 0U, 0U, 0U);
  // Initialize Function Information
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "findMemberType4", 0, -1, 2083);
  // Initialize Basic Block Information
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 1U, 690, -1, 756);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 3U, 1057, -1, 1303);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 4U, 1329, -1, 1454);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 2U, 796, -1, 1015);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 6U, 1666, -1, 1904);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 7U, 1930, -1, 2055);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 5U, 1497, -1, 1624);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 258, -1, 622);
  // Initialize If Information
  covrtIfInit(&emlrtCoverageInstance, 0U, 0U, 658, 681, 761, 2075);
  covrtIfInit(&emlrtCoverageInstance, 0U, 1U, 761, 787, 1484, 2075);
  covrtIfInit(&emlrtCoverageInstance, 0U, 2U, 1024, 1044, 1312, 1466);
  covrtIfInit(&emlrtCoverageInstance, 0U, 3U, 1633, 1653, 1913, 2067);
  // Initialize MCDC Information
  // Initialize For Information
  covrtForInit(&emlrtCoverageInstance, 0U, 0U, 623, 653, 2079);
  // Initialize While Information
  // Initialize Switch Information
  // Start callback for coverage engine
  covrtScriptStart(&emlrtCoverageInstance, 0U);
  // Allocate instance data
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  // Initialize Coverage Information
  covrtScriptInit(
      &emlrtCoverageInstance,
      "C:\\Users\\Mack\\Documents\\MATLAB\\Truss Solver\\generateTrussTables.m",
      1U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  // Initialize Function Information
  covrtFcnInit(&emlrtCoverageInstance, 1U, 0U, "generateTrussTables", 0, -1,
               1363);
  // Initialize Basic Block Information
  covrtBasicBlockInit(&emlrtCoverageInstance, 1U, 0U, 241, -1, 1357);
  // Initialize If Information
  // Initialize MCDC Information
  // Initialize For Information
  // Initialize While Information
  // Initialize Switch Information
  // Start callback for coverage engine
  covrtScriptStart(&emlrtCoverageInstance, 1U);
  // Allocate instance data
  covrtAllocateInstanceData(&emlrtCoverageInstance);
  // Initialize Coverage Information
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Mack\\Documents\\MATLAB\\Truss "
                  "Solver\\findCompressionStrengths.m",
                  2U, 1U, 2U, 2U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);
  // Initialize Function Information
  covrtFcnInit(&emlrtCoverageInstance, 2U, 0U, "findCompressionStrengths", 0,
               -1, 562);
  // Initialize Basic Block Information
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 1U, 494, -1, 554);
  covrtBasicBlockInit(&emlrtCoverageInstance, 2U, 0U, 332, -1, 387);
  // Initialize If Information
  covrtIfInit(&emlrtCoverageInstance, 2U, 0U, 388, 402, -1, 558);
  covrtIfInit(&emlrtCoverageInstance, 2U, 1U, 407, 427, -1, 489);
  // Initialize MCDC Information
  // Initialize For Information
  // Initialize While Information
  // Initialize Switch Information
  // Start callback for coverage engine
  covrtScriptStart(&emlrtCoverageInstance, 2U);
}

void findMemberType4_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    findMemberType4_once();
  }
}

// End of code generation (findMemberType4_initialize.cpp)
