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
#include "findMemberType5.h"
#include "findMemberType5_terminate.h"
#include "findMemberType5_types.h"
#include "rt_nonfinite.h"
#include "coder_bounded_array.h"

// Function Declarations
static void argInit_1xd25_char_T(char result_data[], int result_size[2]);

static cell_wrap_0 argInit_cell_wrap_0();

static char argInit_char_T();

static void argInit_d195x1_cell_wrap_0(cell_wrap_0 result_data[],
                                       int *result_size);

static void argInit_d195x1_real_T(double result_data[], int *result_size);

static double argInit_real_T();

static void main_findMemberType5();

// Function Definitions
static void argInit_1xd25_char_T(char result_data[], int result_size[2])
{
  // Set the size of the array.
  // Change this size to the value that the application requires.
  result_size[0] = 1;
  result_size[1] = 2;
  // Loop over the array to initialize each element.
  for (int idx1{0}; idx1 < 2; idx1++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result_data[idx1] = argInit_char_T();
  }
}

static cell_wrap_0 argInit_cell_wrap_0()
{
  cell_wrap_0 result;
  // Set the value of each structure field.
  // Change this value to the value that the application requires.
  argInit_1xd25_char_T(result.f1.data, result.f1.size);
  return result;
}

static char argInit_char_T()
{
  return '?';
}

static void argInit_d195x1_cell_wrap_0(cell_wrap_0 result_data[],
                                       int *result_size)
{
  // Set the size of the array.
  // Change this size to the value that the application requires.
  *result_size = 2;
  // Loop over the array to initialize each element.
  for (int idx0{0}; idx0 < *result_size; idx0++) {
    // Set the value of the array element.
    // Change this value to the value that the application requires.
    result_data[idx0] = argInit_cell_wrap_0();
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

static double argInit_real_T()
{
  return 0.0;
}

static void main_findMemberType5()
{
  coder::bounded_array<cell_wrap_0, 195U, 1U> beamType;
  double memLenghths_data[195];
  double memberForces_data[195];
  double safteyFactor_Members_data[195];
  int memLenghths_size;
  int memberForces_size;
  int safteyFactor_Members_size;
  boolean_T isPossible;
  // Initialize function 'findMemberType5' input arguments.
  // Initialize function input argument 'memberForces'.
  argInit_d195x1_real_T(memberForces_data, &memberForces_size);
  // Initialize function input argument 'beamType'.
  argInit_d195x1_cell_wrap_0(beamType.data, &beamType.size[0]);
  // Initialize function input argument 'memLenghths'.
  argInit_d195x1_real_T(memLenghths_data, &memLenghths_size);
  // Call the entry-point 'findMemberType5'.
  findMemberType5(memberForces_data, *(int(*)[1]) & memberForces_size,
                  beamType.data, beamType.size, memLenghths_data,
                  *(int(*)[1]) & memLenghths_size, argInit_real_T(),
                  safteyFactor_Members_data,
                  *(int(*)[1]) & safteyFactor_Members_size, &isPossible);
}

int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_findMemberType5();
  // Terminate the application.
  // You do not need to do this more than one time.
  findMemberType5_terminate();
  return 0;
}

// End of code generation (main.cpp)
