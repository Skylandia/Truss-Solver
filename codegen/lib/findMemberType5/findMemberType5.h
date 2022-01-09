//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType5.h
//
// Code generation for function 'findMemberType5'
//

#ifndef FINDMEMBERTYPE5_H
#define FINDMEMBERTYPE5_H

// Include files
#include "findMemberType5_types.h"
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
extern void
findMemberType5(const double memberForces_data[],
                const int memberForces_size[1], cell_wrap_0 beamType_data[],
                const int beamType_size[1], const double memLenghths_data[],
                const int memLenghths_size[1], double safteyFactor,
                double safteyFactor_Members_data[],
                int safteyFactor_Members_size[1], boolean_T *isPossible);

#endif
// End of code generation (findMemberType5.h)
