//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tensionCalculator3_terminate.cpp
//
// Code generation for function 'tensionCalculator3_terminate'
//

// Include files
#include "tensionCalculator3_terminate.h"
#include "tensionCalculator3_data.h"

// Function Definitions
void tensionCalculator3_terminate()
{
  omp_destroy_nest_lock(&tensionCalculator3_nestLockGlobal);
  isInitialized_tensionCalculator3 = false;
}

// End of code generation (tensionCalculator3_terminate.cpp)
