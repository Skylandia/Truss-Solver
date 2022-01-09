//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tensionCalculator3.h
//
// Code generation for function 'tensionCalculator3'
//

#ifndef TENSIONCALCULATOR3_H
#define TENSIONCALCULATOR3_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "omp.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
extern void tensionCalculator3(const double nodesX_data[],
                               const int nodesX_size[1],
                               const double nodesY_data[],
                               const int nodesY_size[1], double numNodes,
                               double numEdges, const double endNodes_data[],
                               const int endNodes_size[2],
                               double weightMagnitude, double weightNode,
                               coder::array<double, 1U> &tensionArray);

#endif
// End of code generation (tensionCalculator3.h)
