/*
 * File: grading_system.c
 *
 * Code generated for Simulink model 'grading_system'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar 24 14:54:02 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "grading_system.h"
#include "grading_system_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_grading_system_T grading_system_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_grading_system_T grading_system_Y;

/* Real-time model */
RT_MODEL_grading_system_T grading_system_M_;
RT_MODEL_grading_system_T *const grading_system_M = &grading_system_M_;

/* Model step function */
void grading_system_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Output'
   *  StringConstant: '<S1>/String Constant'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   */
  if (grading_system_U.Input >= 85.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    strncpy(&grading_system_Y.Output[0],
            grading_system_ConstP.StringConstant_String, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
    grading_system_Y.Output[255] = '\x00';
  } else if (grading_system_U.Input >= 75.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    strncpy(&grading_system_Y.Output[0],
            grading_system_ConstP.StringConstant_String_g, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    grading_system_Y.Output[255] = '\x00';
  } else if (grading_system_U.Input >= 65.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&grading_system_Y.Output[0],
            grading_system_ConstP.StringConstant_String_e, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
    grading_system_Y.Output[255] = '\x00';
  } else if (grading_system_U.Input >= 50.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&grading_system_Y.Output[0],
            grading_system_ConstP.StringConstant_String_o, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
    grading_system_Y.Output[255] = '\x00';
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&grading_system_Y.Output[0],
            grading_system_ConstP.StringConstant_String_m, 255U);

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
    grading_system_Y.Output[255] = '\x00';
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void grading_system_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(grading_system_M, (NULL));

  /* external inputs */
  grading_system_U.Input = 0.0;

  /* external outputs */
  (void) memset(&grading_system_Y.Output[0], 0,
                256U*sizeof(char_T));
}

/* Model terminate function */
void grading_system_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
