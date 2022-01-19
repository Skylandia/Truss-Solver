//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tensionCalculator3_initialize.cpp
//
// Code generation for function 'tensionCalculator3_initialize'
//

// Include files
#include "tensionCalculator3_initialize.h"
#include "tensionCalculator3_data.h"

// Function Definitions
void tensionCalculator3_initialize()
{
  omp_init_nest_lock(&tensionCalculator3_nestLockGlobal);
  isInitialized_tensionCalculator3 = true;
}

// End of code generation (tensionCalculator3_initialize.cpp)
