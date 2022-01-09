//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// tensionCalculator3.cpp
//
// Code generation for function 'tensionCalculator3'
//

// Include files
#include "tensionCalculator3.h"
#include "find.h"
#include "mldivide.h"
#include "sum.h"
#include "tensionCalculator3_data.h"
#include "tensionCalculator3_initialize.h"
#include "coder_array.h"
#include <algorithm>
#include <cmath>

// Function Definitions
void tensionCalculator3(const double nodesX_data[], const int nodesX_size[1],
                        const double nodesY_data[], const int nodesY_size[1],
                        double numNodes, double numEdges,
                        const double endNodes_data[],
                        const int endNodes_size[2], double weightMagnitude,
                        double weightNode,
                        coder::array<double, 1U> &tensionArray)
{
  coder::array<double, 2U> nodeEquationArray;
  coder::array<double, 2U> tempX;
  coder::array<double, 2U> tempY;
  coder::array<double, 2U> xEquationArray;
  coder::array<double, 2U> yEquationArray;
  double a_data[780];
  double b_y_data[780];
  double b_x_data[390];
  double n_data[390];
  double y_data[390];
  double d1;
  double maximum;
  double minimum;
  int col_data[780];
  int ii_data[780];
  int row_data[780];
  int b_tmp_data[390];
  int b_endNodes_size[2];
  int c_endNodes_size[2];
  int y_size[2];
  int b_i;
  int baseIndx_size;
  int c_i;
  int col_size;
  int col_tmp;
  int d_i;
  int i;
  int idx;
  int ii;
  int md2;
  int row_size;
  unsigned int u;
  int x_size;
  int xtmp;
  signed char baseIndx_data[99];
  signed char pinNode_data[99];
  signed char tmp_data[99];
  boolean_T c_endNodes_data[780];
  boolean_T b_endNodes_data[390];
  boolean_T x_data[99];
  boolean_T exitg1;
  (void)nodesX_size;
  if (!isInitialized_tensionCalculator3) {
    tensionCalculator3_initialize();
  }
  // Calculates all the Tension(+) and compression(-) forces in every member
  // and enters them into the 'Force in Member' column in the trussGraph table
  //    trussGraph: must be created by GenerateTrussGraph
  //    weightMagnitude: is a scalar, this is the weight on both trusses
  //    weightNode: is the node number in the trussGraph at which the weight is
  //    placed
  //  Locations of pin and roller nodes, pin is the left node and roller is the
  //  right
  x_size = nodesY_size[0];
  idx = nodesY_size[0];
  for (i = 0; i < idx; i++) {
    x_data[i] = (nodesY_data[i] == 0.0);
  }
  idx = 0;
  baseIndx_size = nodesY_size[0];
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x_size - 1)) {
    if (x_data[ii]) {
      idx++;
      baseIndx_data[idx - 1] = static_cast<signed char>(ii + 1);
      if (idx >= x_size) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (nodesY_size[0] == 1) {
    if (idx == 0) {
      baseIndx_size = 0;
    }
  } else if (1 > idx) {
    baseIndx_size = 0;
  } else {
    baseIndx_size = idx;
  }
  if (baseIndx_size <= 2) {
    double d;
    if (baseIndx_size == 1) {
      maximum = nodesX_data[baseIndx_data[0] - 1];
    } else {
      maximum = nodesX_data[baseIndx_data[0] - 1];
      d = nodesX_data[baseIndx_data[baseIndx_size - 1] - 1];
      if ((maximum < d) ||
          (std::isnan(nodesX_data[baseIndx_data[0] - 1]) && (!std::isnan(d)))) {
        maximum = d;
      }
    }
    if (baseIndx_size == 1) {
      minimum = nodesX_data[baseIndx_data[0] - 1];
    } else {
      minimum = nodesX_data[baseIndx_data[0] - 1];
      i = baseIndx_data[baseIndx_size - 1] - 1;
      d = nodesX_data[i];
      if ((minimum > d) || (std::isnan(nodesX_data[baseIndx_data[0] - 1]) &&
                            (!std::isnan(nodesX_data[i])))) {
        minimum = d;
      }
    }
  } else {
    double d;
    maximum = nodesX_data[baseIndx_data[0] - 1];
    if (!std::isnan(maximum)) {
      idx = 1;
    } else {
      idx = 0;
      ii = 2;
      exitg1 = false;
      while ((!exitg1) && (ii <= baseIndx_size)) {
        if (!std::isnan(nodesX_data[baseIndx_data[ii - 1] - 1])) {
          idx = ii;
          exitg1 = true;
        } else {
          ii++;
        }
      }
    }
    if (idx != 0) {
      maximum = nodesX_data[baseIndx_data[idx - 1] - 1];
      i = idx + 1;
      for (ii = i; ii <= baseIndx_size; ii++) {
        d = nodesX_data[baseIndx_data[ii - 1] - 1];
        if (maximum < d) {
          maximum = d;
        }
      }
    }
    if (!std::isnan(nodesX_data[baseIndx_data[0] - 1])) {
      idx = 1;
    } else {
      idx = 0;
      ii = 2;
      exitg1 = false;
      while ((!exitg1) && (ii <= baseIndx_size)) {
        if (!std::isnan(nodesX_data[baseIndx_data[ii - 1] - 1])) {
          idx = ii;
          exitg1 = true;
        } else {
          ii++;
        }
      }
    }
    if (idx == 0) {
      minimum = nodesX_data[baseIndx_data[0] - 1];
    } else {
      minimum = nodesX_data[baseIndx_data[idx - 1] - 1];
      i = idx + 1;
      for (ii = i; ii <= baseIndx_size; ii++) {
        d = nodesX_data[baseIndx_data[ii - 1] - 1];
        if (minimum > d) {
          minimum = d;
        }
      }
    }
  }
  ii = baseIndx_size - 1;
  idx = 0;
  for (b_i = 0; b_i <= ii; b_i++) {
    signed char i1;
    i1 = baseIndx_data[b_i];
    if (nodesX_data[i1 - 1] == minimum) {
      pinNode_data[idx] = i1;
      idx++;
    }
  }
  idx = static_cast<int>(numNodes * 2.0);
  nodeEquationArray.set_size(idx, static_cast<int>(numEdges + 3.0));
  ii = idx * static_cast<int>(numEdges + 3.0);
  for (i = 0; i < ii; i++) {
    nodeEquationArray[i] = 0.0;
  }
  xEquationArray.set_size(static_cast<int>(numNodes),
                          static_cast<int>(numEdges));
  yEquationArray.set_size(static_cast<int>(numNodes),
                          static_cast<int>(numEdges));
  //  NodeX then NodeY
  //  columns are members then FPin then FRoller
  //  array dimensions are members x nodes +2
  //  Node Equation Array layout
  //         member1 member2... FyPin FyFroller FxPin (will be 0)
  //  Node1x
  //  Node1y
  //  Node2x
  //  ...
  tensionArray.set_size(idx);
  for (i = 0; i < idx; i++) {
    tensionArray[i] = 0.0;
  }
  tensionArray[static_cast<int>(weightNode * 2.0) - 1] =
      std::abs(weightMagnitude);
  //  Setting supports for pin and roller nodes
  x_size = pinNode_data[0] << 1;
  nodeEquationArray[(x_size + nodeEquationArray.size(0) *
                                  (static_cast<int>(numEdges + 1.0) - 1)) -
                    1] = 1.0;
  ii = baseIndx_size - 1;
  idx = 0;
  for (b_i = 0; b_i <= ii; b_i++) {
    if (nodesX_data[baseIndx_data[b_i] - 1] == maximum) {
      tmp_data[idx] = static_cast<signed char>(b_i + 1);
      idx++;
    }
  }
  nodeEquationArray[((baseIndx_data[tmp_data[0] - 1] << 1) +
                     nodeEquationArray.size(0) *
                         (static_cast<int>(numEdges + 2.0) - 1)) -
                    1] = 1.0;
  //  force x on pin which will be 0
  nodeEquationArray[(x_size + nodeEquationArray.size(0) *
                                  (static_cast<int>(numEdges + 3.0) - 1)) -
                    2] = 1.0;
  //  For every node
  ii = static_cast<int>(numNodes) - 1;
#pragma omp parallel for num_threads(omp_get_max_threads()) private(           \
    tempX, tempY, y_data, xtmp, b_x_data, n_data, md2, col_data, col_size,     \
    b_endNodes_size, ii_data, b_endNodes_data, row_size, c_endNodes_size,      \
    row_data, c_endNodes_data, d_i, col_tmp, y_size, d1, b_y_data, b_tmp_data, \
    c_i) firstprivate(a_data)

  for (c_i = 0; c_i <= ii; c_i++) {
    tempX.set_size(1, static_cast<int>(numEdges));
    md2 = static_cast<int>(numEdges);
    tempY.set_size(1, static_cast<int>(numEdges));
    for (col_size = 0; col_size < md2; col_size++) {
      tempX[col_size] = 0.0;
      tempY[col_size] = 0.0;
    }
    b_endNodes_size[0] = endNodes_size[0];
    b_endNodes_size[1] = 2;
    md2 = endNodes_size[0] * 2;
    for (col_size = 0; col_size < md2; col_size++) {
      b_endNodes_data[col_size] =
          (endNodes_data[col_size] == static_cast<double>(c_i) + 1.0);
    }
    coder::eml_find(b_endNodes_data, b_endNodes_size, ii_data, &md2, col_data,
                    &col_size);
    row_size = md2;
    for (col_size = 0; col_size < md2; col_size++) {
      xtmp = ii_data[col_size];
      row_data[col_size] = xtmp;
      n_data[col_size] = xtmp;
    }
    c_endNodes_size[0] = md2;
    c_endNodes_size[1] = 2;
    for (col_size = 0; col_size < 2; col_size++) {
      for (xtmp = 0; xtmp < md2; xtmp++) {
        c_endNodes_data[xtmp + md2 * col_size] =
            (endNodes_data[(static_cast<int>(n_data[xtmp]) +
                            endNodes_size[0] * col_size) -
                           1] != static_cast<double>(c_i) + 1.0);
      }
    }
    coder::eml_find(c_endNodes_data, c_endNodes_size, ii_data, &md2, col_data,
                    &col_size);
    md2 = col_size >> 1;
    for (d_i = 0; d_i < md2; d_i++) {
      xtmp = col_data[d_i];
      col_tmp = (col_size - d_i) - 1;
      col_data[d_i] = col_data[col_tmp];
      col_data[col_tmp] = xtmp;
    }
    //  I have no clue why the column data is upside down
    //     I have no clue why the hell the diagonal is the node data i want
    if ((row_size == 1) && (col_size == 1)) {
      md2 = 1;
      n_data[0] =
          endNodes_data[(row_data[0] + endNodes_size[0] * (col_data[0] - 1)) -
                        1];
    } else {
      if (row_size < col_size) {
        md2 = row_size;
      } else {
        md2 = col_size;
      }
      if (0 >= col_size) {
        md2 = 0;
      }
      col_size = md2 - 1;
      for (col_tmp = 0; col_tmp <= col_size; col_tmp++) {
        n_data[col_tmp] =
            endNodes_data[(row_data[col_tmp] +
                           endNodes_size[0] * (col_data[col_tmp] - 1)) -
                          1];
      }
    }
    xtmp = md2;
    for (col_size = 0; col_size < md2; col_size++) {
      y_data[col_size] = nodesY_data[static_cast<int>(n_data[col_size]) - 1] -
                         nodesY_data[c_i];
    }
    for (col_size = 0; col_size < md2; col_size++) {
      b_x_data[col_size] = nodesX_data[static_cast<int>(n_data[col_size]) - 1] -
                           nodesX_data[c_i];
    }
    if (0 <= md2 - 1) {
      std::copy(&b_x_data[0], &b_x_data[md2], &a_data[0]);
    }
    for (col_size = 0; col_size < md2; col_size++) {
      a_data[col_size + md2] = y_data[col_size];
    }
    y_size[0] = static_cast<short>(md2);
    y_size[1] = 2;
    md2 = static_cast<short>(md2) << 1;
    for (col_tmp = 0; col_tmp < md2; col_tmp++) {
      d1 = a_data[col_tmp];
      b_y_data[col_tmp] = d1 * d1;
    }
    coder::sum(b_y_data, y_size, n_data, &md2);
    for (col_tmp = 0; col_tmp < md2; col_tmp++) {
      n_data[col_tmp] = std::sqrt(n_data[col_tmp]);
    }
    for (col_size = 0; col_size < xtmp; col_size++) {
      b_x_data[col_size] /= n_data[col_size];
    }
    for (col_size = 0; col_size < xtmp; col_size++) {
      y_data[col_size] /= n_data[col_size];
    }
    for (col_size = 0; col_size < row_size; col_size++) {
      b_tmp_data[col_size] = row_data[col_size] - 1;
    }
    for (col_size = 0; col_size < row_size; col_size++) {
      tempX[b_tmp_data[col_size]] = b_x_data[col_size];
    }
    // Odd rows are sum Fx
    for (col_size = 0; col_size < row_size; col_size++) {
      b_tmp_data[col_size] = row_data[col_size] - 1;
    }
    for (col_size = 0; col_size < row_size; col_size++) {
      tempY[b_tmp_data[col_size]] = y_data[col_size];
    }
    // Even rows are sum Fy
    md2 = tempX.size(1);
    for (col_size = 0; col_size < md2; col_size++) {
      xEquationArray[c_i + xEquationArray.size(0) * col_size] = tempX[col_size];
    }
    md2 = tempY.size(1);
    for (col_size = 0; col_size < md2; col_size++) {
      yEquationArray[c_i + yEquationArray.size(0) * col_size] = tempY[col_size];
    }
  }
  if (1.0 > numNodes) {
    idx = 0;
  } else {
    idx = static_cast<int>(numNodes);
  }
  u = static_cast<unsigned int>(numNodes) << 1;
  if (1U > u) {
    i = 1;
  } else {
    i = 2;
  }
  ii = xEquationArray.size(1);
  for (x_size = 0; x_size < ii; x_size++) {
    for (b_i = 0; b_i < idx; b_i++) {
      nodeEquationArray[i * b_i + nodeEquationArray.size(0) * x_size] =
          xEquationArray[b_i + xEquationArray.size(0) * x_size];
    }
  }
  if (1.0 > numNodes) {
    idx = 0;
  } else {
    idx = static_cast<int>(numNodes);
  }
  if (2U > u) {
    i = 0;
    x_size = 1;
  } else {
    i = 1;
    x_size = 2;
  }
  ii = yEquationArray.size(1);
  for (b_i = 0; b_i < ii; b_i++) {
    for (baseIndx_size = 0; baseIndx_size < idx; baseIndx_size++) {
      nodeEquationArray[(i + x_size * baseIndx_size) +
                        nodeEquationArray.size(0) * b_i] =
          yEquationArray[baseIndx_size + yEquationArray.size(0) * b_i];
    }
  }
  coder::mldivide(nodeEquationArray, tensionArray);
  // Solving the systems to find the tension array
}

// End of code generation (tensionCalculator3.cpp)
