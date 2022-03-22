/*
 * File: calculator.c
 *
 * Code generated for Simulink model 'calculator'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Mar 21 19:05:02 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calculator.h"
#include "calculator_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_calculator_T calculator_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calculator_T calculator_Y;

/* Real-time model */
RT_MODEL_calculator_T calculator_M_;
RT_MODEL_calculator_T *const calculator_M = &calculator_M_;

/* Model step function */
void calculator_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Add'
   */
  calculator_Y.Output = calculator_U.Input + calculator_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<Root>/Subtract'
   */
  calculator_Y.Output1 = calculator_U.Input - calculator_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Multiply'
   */
  calculator_Y.Output2 = calculator_U.Input * calculator_U.Input1;

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<Root>/Divide'
   */
  calculator_Y.Output3 = calculator_U.Input / calculator_U.Input1;
}

/* Model initialize function */
void calculator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calculator_M, (NULL));

  /* external inputs */
  (void)memset(&calculator_U, 0, sizeof(ExtU_calculator_T));

  /* external outputs */
  (void) memset((void *)&calculator_Y, 0,
                sizeof(ExtY_calculator_T));
}

/* Model terminate function */
void calculator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
