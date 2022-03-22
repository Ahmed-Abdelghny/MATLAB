/*
 * File: calculater_sub_sys.c
 *
 * Code generated for Simulink model 'calculater_sub_sys'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Mon Mar 21 19:26:16 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "calculater_sub_sys.h"
#include "calculater_sub_sys_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_calculater_sub_sys_T calculater_sub_sys_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calculater_sub_sys_T calculater_sub_sys_Y;

/* Real-time model */
RT_MODEL_calculater_sub_sys_T calculater_sub_sys_M_;
RT_MODEL_calculater_sub_sys_T *const calculater_sub_sys_M =
  &calculater_sub_sys_M_;

/* Model step function */
void calculater_sub_sys_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Add'
   */
  calculater_sub_sys_Y.Output = calculater_sub_sys_U.Input +
    calculater_sub_sys_U.Input1;

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Sum: '<S1>/Subtract'
   */
  calculater_sub_sys_Y.Output1 = calculater_sub_sys_U.Input -
    calculater_sub_sys_U.Input1;

  /* Outport: '<Root>/Output2' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Multiply'
   */
  calculater_sub_sys_Y.Output2 = calculater_sub_sys_U.Input *
    calculater_sub_sys_U.Input1;

  /* Outport: '<Root>/Output3' incorporates:
   *  Inport: '<Root>/Input'
   *  Inport: '<Root>/Input1'
   *  Product: '<S1>/Divide'
   */
  calculater_sub_sys_Y.Output3 = calculater_sub_sys_U.Input /
    calculater_sub_sys_U.Input1;
}

/* Model initialize function */
void calculater_sub_sys_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calculater_sub_sys_M, (NULL));

  /* external inputs */
  (void)memset(&calculater_sub_sys_U, 0, sizeof(ExtU_calculater_sub_sys_T));

  /* external outputs */
  (void) memset((void *)&calculater_sub_sys_Y, 0,
                sizeof(ExtY_calculater_sub_sys_T));
}

/* Model terminate function */
void calculater_sub_sys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
