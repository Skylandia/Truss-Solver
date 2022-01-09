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
#include "tensionCalculator3.h"
#include "tensionCalculator3_terminate.h"
#include "coder_array.h"

// Function Declarations
static void argInit_d195x2_real_T(double result_data[], int result_size[2]);

static void argInit_d99x1_real_T(double result_data[], int *result_size);

static double argInit_real_T();

static void main_tensionCalculator3();

// Function Definitions
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

static void argInit_d99x1_real_T(double result_data[], int *result_size)
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

static void main_tensionCalculator3()
{
  coder::array<double, 1U> tensionArray;
  double endNodes_data[390];
  double nodesX_data[99];
  double nodesY_data[99];
  double numNodes_tmp;
  int endNodes_size[2];
  int nodesX_size;
  int nodesY_size;
  // Initialize function 'tensionCalculator3' input arguments.
  // Initialize function input argument 'nodesX'.
  argInit_d99x1_real_T(nodesX_data, &nodesX_size);
  // Initialize function input argument 'nodesY'.
  argInit_d99x1_real_T(nodesY_data, &nodesY_size);
  numNodes_tmp = argInit_real_T();
  // Initialize function input argument 'endNodes'.
  argInit_d195x2_real_T(endNodes_data, endNodes_size);
  // Call the entry-point 'tensionCalculator3'.
  tensionCalculator3(nodesX_data, *(int(*)[1]) & nodesX_size, nodesY_data,
                     *(int(*)[1]) & nodesY_size, numNodes_tmp, numNodes_tmp,
                     endNodes_data, endNodes_size, numNodes_tmp, numNodes_tmp,
                     tensionArray);
}

int main(int, char **)
{
  // The initialize function is being called automatically from your entry-point
  // function. So, a call to initialize is not included here. Invoke the
  // entry-point functions.
  // You can call entry-point functions multiple times.
  main_tensionCalculator3();
  // Terminate the application.
  // You do not need to do this more than one time.
  tensionCalculator3_terminate();
  return 0;
}

// End of code generation (main.cpp)
