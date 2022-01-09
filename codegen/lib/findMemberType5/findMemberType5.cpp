//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// findMemberType5.cpp
//
// Code generation for function 'findMemberType5'
//

// Include files
#include "findMemberType5.h"
#include "findMemberType5_types.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_array.h"
#include "coder_bounded_array.h"
#include <cmath>
#include <cstring>

// Function Declarations
static double rt_powd_snf(double u0, double u1);

// Function Definitions
static double rt_powd_snf(double u0, double u1)
{
  double y;
  if (std::isnan(u0) || std::isnan(u1)) {
    y = rtNaN;
  } else {
    double d;
    double d1;
    d = std::abs(u0);
    d1 = std::abs(u1);
    if (std::isinf(u1)) {
      if (d == 1.0) {
        y = 1.0;
      } else if (d > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = std::sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > std::floor(u1))) {
      y = rtNaN;
    } else {
      y = std::pow(u0, u1);
    }
  }
  return y;
}

void findMemberType5(const double memberForces_data[],
                     const int memberForces_size[1],
                     cell_wrap_0 beamType_data[], const int[1],
                     const double memLenghths_data[], const int[1],
                     double safteyFactor, double safteyFactor_Members_data[],
                     int safteyFactor_Members_size[1], boolean_T *isPossible)
{
  static const double t1_f2[6]{
      1.0, 2.0, 2.28, 3.5999999999999996, 4.56, 7.1999999999999993};
  static const char cv[10]{'T', 'y', 'p', 'e', ' ', '1', ' ', '*', ' ', '1'};
  static const char cv1[10]{'T', 'y', 'p', 'e', ' ', '1', ' ', '*', ' ', '2'};
  static const char cv2[10]{'T', 'y', 'p', 'e', ' ', '2', ' ', '*', ' ', '1'};
  static const char cv4[10]{'T', 'y', 'p', 'e', ' ', '3', ' ', '*', ' ', '1'};
  static const char cv6[10]{'T', 'y', 'p', 'e', ' ', '2', ' ', '*', ' ', '2'};
  static const char cv7[10]{'T', 'y', 'p', 'e', ' ', '3', ' ', '*', ' ', '2'};
  static const char cv3[6]{'T', 'y', 'p', 'e', ' ', '4'};
  static const char cv5[6]{'T', 'y', 'p', 'e', ' ', '5'};
  static const signed char t0_f2[6]{1, 2, 8, 26, 27, 56};
  coder::b_table tensionTable;
  coder::matlab::internal::coder::tabular::private_::varNamesDim r12;
  coder::table compressionTable;
  coder::array<cell_wrap_5, 1U> b_b_dataj;
  coder::array<cell_wrap_7, 1U> b_dataj;
  coder::array<double, 2U> numericRowIndices;
  cell_wrap_5 r;
  cell_wrap_5 r1;
  cell_wrap_5 r2;
  cell_wrap_5 r3;
  cell_wrap_5 r4;
  cell_wrap_5 r5;
  cell_wrap_7 r10;
  cell_wrap_7 r11;
  cell_wrap_7 r6;
  cell_wrap_7 r7;
  cell_wrap_7 r8;
  cell_wrap_7 r9;
  double a__1;
  double numRowIndices;
  double tenStrengh;
  int b_i;
  int i;
  int loop_ub;
  signed char b_tmp_data[6];
  signed char tmp_data[6];
  boolean_T rowIndices[6];
  boolean_T exitg1;
  // findMemberType finds the required member to hold the force
  //    please refer to some form of oracle if you need to understand the mess
  //    I am about to write
  //  This is where normally beam type will be made, but God decleared that
  //  this isn't going to work today... or yesterday
  safteyFactor_Members_size[0] = memberForces_size[0];
  loop_ub = memberForces_size[0];
  if (0 <= loop_ub - 1) {
    std::memset(&safteyFactor_Members_data[0], 0, loop_ub * sizeof(double));
  }
  tenStrengh = 230.0 * safteyFactor;
  // N edit this if you need to adjust how much a tension member holds
  // generateTrussTables Generates tables to be looked up for later
  // calculations
  //    Generates predetermined cost and relative strengh tables
  r.f1.size[0] = 1;
  r.f1.size[1] = 10;
  r1.f1.size[0] = 1;
  r1.f1.size[1] = 10;
  r2.f1.size[0] = 1;
  r2.f1.size[1] = 10;
  for (i = 0; i < 10; i++) {
    r.f1.data[i] = cv[i];
    r1.f1.data[i] = cv1[i];
    r2.f1.data[i] = cv2[i];
  }
  r3.f1.size[0] = 1;
  r3.f1.size[1] = 6;
  for (i = 0; i < 6; i++) {
    r3.f1.data[i] = cv3[i];
  }
  r4.f1.size[0] = 1;
  r4.f1.size[1] = 10;
  for (i = 0; i < 10; i++) {
    r4.f1.data[i] = cv4[i];
  }
  r5.f1.size[0] = 1;
  r5.f1.size[1] = 6;
  for (i = 0; i < 6; i++) {
    r5.f1.data[i] = cv5[i];
  }
  compressionTable.data.f1[0] = r;
  compressionTable.data.f1[1] = r1;
  compressionTable.data.f1[2] = r2;
  compressionTable.data.f1[3] = r3;
  compressionTable.data.f1[4] = r4;
  compressionTable.data.f1[5] = r5;
  for (b_i = 0; b_i < 6; b_i++) {
    compressionTable.data.f2[b_i] = t0_f2[b_i];
  }
  for (i = 0; i < 10; i++) {
    r6.f1[i] = cv[i];
    r7.f1[i] = cv1[i];
    r8.f1[i] = cv2[i];
    r9.f1[i] = cv4[i];
    r10.f1[i] = cv6[i];
    r11.f1[i] = cv7[i];
  }
  tensionTable.data.f1[0] = r6;
  tensionTable.data.f1[1] = r7;
  tensionTable.data.f1[2] = r8;
  tensionTable.data.f1[3] = r9;
  tensionTable.data.f1[4] = r10;
  tensionTable.data.f1[5] = r11;
  for (b_i = 0; b_i < 6; b_i++) {
    tensionTable.data.f2[b_i] = t1_f2[b_i];
  }
  *isPossible = true;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i <= memberForces_size[0] - 1)) {
    if (memberForces_data[b_i] == 0.0) {
      beamType_data[b_i].f1.size[0] = 1;
      beamType_data[b_i].f1.size[1] = 10;
      for (i = 0; i < 10; i++) {
        beamType_data[b_i].f1.data[i] = cv[i];
      }
      safteyFactor_Members_data[b_i] = rtInf;
      b_i++;
    } else if (memberForces_data[b_i] < 0.0) {
      double eqivTypeOne;
      int c_i;
      // findCompressionStrenghs takes in a load of lenghs, and optionally a
      // saftey multiplyer, then spits out the relative compression strengh
      //    Safteyfactor is a multiplicitve modifiey, is one by default, and
      //    must be greater than 0.
      eqivTypeOne =
          std::abs(memberForces_data[b_i]) /
          (758228.0 * rt_powd_snf(1000.0 * memLenghths_data[b_i], -2.061) *
           safteyFactor);
      for (c_i = 0; c_i < 6; c_i++) {
        rowIndices[c_i] = (t0_f2[c_i] > eqivTypeOne);
      }
      coder::matlab::internal::coder::tabular::private_::rowNamesDim::subs2inds(
          rowIndices, &numRowIndices, &a__1);
      coder::matlab::internal::coder::tabular::private_::varNamesDim::subs2inds(
          &r12);
      coder::matlab::internal::coder::tabular::private_::varNamesDim::
          logicalIndices2Numeric(rowIndices, numericRowIndices);
      b_b_dataj.set_size(numericRowIndices.size(1));
      i = numericRowIndices.size(1);
      for (c_i = 0; c_i < i; c_i++) {
        b_b_dataj[c_i].f1.size[0] = 1;
        b_b_dataj[c_i].f1.size[1] =
            compressionTable.data
                .f1[static_cast<int>(numericRowIndices[c_i]) - 1]
                .f1.size[1];
        loop_ub = compressionTable.data
                      .f1[static_cast<int>(numericRowIndices[c_i]) - 1]
                      .f1.size[1];
        for (int i1{0}; i1 < loop_ub; i1++) {
          b_b_dataj[c_i].f1.data[i1] =
              compressionTable.data
                  .f1[static_cast<int>(numericRowIndices[c_i]) - 1]
                  .f1.data[i1];
        }
      }
      loop_ub = 0;
      for (c_i = 0; c_i < 6; c_i++) {
        if (rowIndices[c_i]) {
          b_tmp_data[loop_ub] = static_cast<signed char>(c_i + 1);
          loop_ub++;
        }
      }
      if (b_b_dataj.size(0) == 0) {
        beamType_data[b_i].f1.size[0] = 1;
        beamType_data[b_i].f1.size[1] = 6;
        for (i = 0; i < 6; i++) {
          beamType_data[b_i].f1.data[i] = r5.f1.data[i];
        }
        safteyFactor_Members_data[b_i] = 56.0 / eqivTypeOne;
        //  warning('Truss unable to hold load')
        *isPossible = false;
        exitg1 = true;
      } else {
        beamType_data[b_i].f1.size[0] = 1;
        beamType_data[b_i].f1.size[1] = b_b_dataj[0].f1.size[1];
        loop_ub = b_b_dataj[0].f1.size[1];
        for (i = 0; i < loop_ub; i++) {
          beamType_data[b_i].f1.data[i] = b_b_dataj[0].f1.data[i];
        }
        safteyFactor_Members_data[b_i] =
            compressionTable.data.f2[b_tmp_data[0] - 1] / eqivTypeOne;
        b_i++;
      }
    } else {
      double eqivTypeOne;
      int c_i;
      eqivTypeOne = memberForces_data[b_i] / tenStrengh;
      for (c_i = 0; c_i < 6; c_i++) {
        rowIndices[c_i] = (t1_f2[c_i] > eqivTypeOne);
      }
      coder::matlab::internal::coder::tabular::private_::rowNamesDim::subs2inds(
          rowIndices, &numRowIndices, &a__1);
      coder::matlab::internal::coder::tabular::private_::varNamesDim::subs2inds(
          &r12);
      coder::matlab::internal::coder::tabular::private_::varNamesDim::
          logicalIndices2Numeric(rowIndices, numericRowIndices);
      b_dataj.set_size(numericRowIndices.size(1));
      i = numericRowIndices.size(1);
      for (c_i = 0; c_i < i; c_i++) {
        for (int i1{0}; i1 < 10; i1++) {
          b_dataj[c_i].f1[i1] =
              tensionTable.data.f1[static_cast<int>(numericRowIndices[c_i]) - 1]
                  .f1[i1];
        }
      }
      loop_ub = 0;
      for (c_i = 0; c_i < 6; c_i++) {
        if (rowIndices[c_i]) {
          tmp_data[loop_ub] = static_cast<signed char>(c_i + 1);
          loop_ub++;
        }
      }
      if (b_dataj.size(0) == 0) {
        beamType_data[b_i].f1.size[0] = 1;
        beamType_data[b_i].f1.size[1] = 10;
        for (i = 0; i < 10; i++) {
          beamType_data[b_i].f1.data[i] = r11.f1[i];
        }
        safteyFactor_Members_data[b_i] = 7.1999999999999993 / eqivTypeOne;
        //  warning('Truss unable to hold load')
        *isPossible = false;
        exitg1 = true;
      } else {
        beamType_data[b_i].f1.size[0] = 1;
        beamType_data[b_i].f1.size[1] = 10;
        for (i = 0; i < 10; i++) {
          beamType_data[b_i].f1.data[i] = b_dataj[0].f1[i];
        }
        safteyFactor_Members_data[b_i] =
            tensionTable.data.f2[tmp_data[0] - 1] / eqivTypeOne;
        b_i++;
      }
    }
  }
}

// End of code generation (findMemberType5.cpp)
