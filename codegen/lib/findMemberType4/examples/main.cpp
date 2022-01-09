//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// main.cpp
//
// Code generation for function 'main'
//

/*************************************************************************/
/* This automatically generated example C++ main file shows how to call  */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

// Include files
#include "main.h"
#include "findMemberType4.h"
#include "findMemberType4_data.h"
#include "findMemberType4_terminate.h"
#include "metaDim.h"
#include "rowNamesDim.h"
#include "rt_nonfinite.h"
#include "table.h"
#include "varNamesDim.h"
#include "coder_bounded_array.h"

// Function Declarations
static void argInit_1x10_char_T(char result[10]);

static void argInit_1x5_Continuity(
    coder::matlab::internal::coder::tabular::Continuity result[5]);

static coder::matlab::internal::coder::tabular::Continuity argInit_Continuity();

static boolean_T argInit_boolean_T();

static void argInit_cell_5(cell_5 *result);

static cell_wrap_4 argInit_cell_wrap_4();

static char argInit_char_T();

static void argInit_d195x1_cell_wrap_4(cell_wrap_4 result_data[],
                                       int *result_size);

static void argInit_d195x1_real_T(double result_data[], int *result_size);

static void argInit_d195x2_real_T(double result_data[], int result_size[2]);

static coder::matlab::internal::coder::tabular::private_::metaDim
argInit_metaDim();

static double argInit_real_T();

static void argInit_table(coder::c_table *result);

static coder::matlab::internal::coder::tabular::private_::varNamesDim
argInit_varNamesDim();

static void main_findMemberType4();

// Function Definitions
static void argInit_1x10_char_T(char result[10])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 10; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_char_T();
  }
}

static void argInit_1x5_Continuity(
    coder::matlab::internal::coder::tabular::Continuity result[5])
{
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 5; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result[idx1] = argInit_Continuity();
  }
}

static coder::matlab::internal::coder::tabular::Continuity argInit_Continuity()
{
  return coder::matlab::internal::coder::tabular::unset;
}

static boolean_T argInit_boolean_T()
{
  return false;
}

static void argInit_cell_5(cell_5 *result)
{
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  argInit_d195x2_real_T(result->f1.data, result->f1.size);
  argInit_d195x1_cell_wrap_4(result->f2.data, &result->f2.size[0]);
  argInit_d195x1_real_T(result->f3.data, &result->f3.size[0]);
  argInit_d195x1_real_T(result->f4.data, &result->f4.size[0]);
  argInit_d195x1_real_T(result->f5.data, &result->f5.size[0]);
}

static cell_wrap_4 argInit_cell_wrap_4()
{
  cell_wrap_4 result;
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  argInit_1x10_char_T(result.f1);
  return result;
}

static char argInit_char_T()
{
  return '?';
}

static void argInit_d195x1_cell_wrap_4(cell_wrap_4 result_data[],
                                       int *result_size)
{
  // Set the size of the array.
  // Change this size to the value that the application requires.
  *result_size = 2;
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 2; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result_data[idx0] = argInit_cell_wrap_4();
  }
}

static void argInit_d195x1_real_T(double result_data[], int *result_size)
{
  // Set the size of the array.
  // Change this size to the value that the application requires.
  *result_size = 2;
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 2; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result_data[idx0] = argInit_real_T();
  }
}

static void argInit_d195x2_real_T(double result_data[], int result_size[2])
{
  // Set the size of the array.
  // Change this size to the value that the application requires.
  result_size[0] = 2;
  result_size[1] = 2;
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < 2; idx0++) {
    for (int idx1{0}; idx1 < 2; idx1++) {
      // Set the value of the array element.
      // Change this value to the value that the application requires.
      result_data[idx0 + 2 * idx1] = argInit_real_T();
    }
  }
}

static coder::matlab::internal::coder::tabular::private_::metaDim
argInit_metaDim()
{
  coder::matlab::internal::coder::tabular::private_::metaDim result;
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  result.init(argInit_real_T());
  return result;
}

static double argInit_real_T()
{
  return 0.0;
}

static void argInit_table(coder::c_table *result)
{
  coder::matlab::internal::coder::tabular::private_::rowNamesDim r;
  cell_5 expl_temp;
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  argInit_cell_5(&expl_temp);
  result->init(argInit_metaDim(), r, argInit_varNamesDim(), expl_temp.f1.data,
               expl_temp.f1.size, expl_temp.f2.data, expl_temp.f2.size[0],
               expl_temp.f3.data, expl_temp.f3.size[0], expl_temp.f4.data,
               expl_temp.f4.size[0], expl_temp.f5.data, expl_temp.f5.size[0]);
}

static coder::matlab::internal::coder::tabular::private_::varNamesDim
argInit_varNamesDim()
{
  coder::matlab::internal::coder::tabular::private_::varNamesDim result;
  boolean_T result_tmp;
  coder::matlab::internal::coder::tabular::Continuity rv[5];
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  result_tmp = argInit_boolean_T();
  argInit_1x5_Continuity(rv);
  result.init(argInit_real_T(), rv, result_tmp, result_tmp, result_tmp,
              result_tmp);
  return result;
}

static void main_findMemberType4()
{
  coder::c_table edgesTable;
  coder::bounded_array<cell_wrap_6, 195U, 1U> beamType;
  double safteyFactor_Members_data[195];
  int safteyFactor_Members_size;
  boolean_T isPossible;
  // Initialize function 'findMemberType4' input arguments.
  // Initialize function input argument 'edgesTable'.
  argInit_table(&edgesTable);
  // Call the entry-point 'findMemberType4'.
  findMemberType4(&edgesTable, argInit_real_T(), beamType.data, beamType.size,
                  safteyFactor_Members_data,
                  *(int(*)[1]) & safteyFactor_Members_size, &isPossible);
}

int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_findMemberType4();
  // Terminate the application.
  // You do not need to do this more than one time.
  findMemberType4_terminate();
  return 0;
}

// End of code generation (main.cpp)
