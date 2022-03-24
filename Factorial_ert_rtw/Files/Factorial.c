/*
 * File: Factorial.c
 *
 * Code generated for Simulink model 'Factorial'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Mar 24 15:18:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial.h"
#include "Factorial_private.h"

/* Block states (default storage) */
DW_Factorial_T Factorial_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_T Factorial_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_T Factorial_Y;

/* Real-time model */
RT_MODEL_Factorial_T Factorial_M_;
RT_MODEL_Factorial_T *const Factorial_M = &Factorial_M_;

/* Model step function */
void Factorial_step(void)
{
  int32_T s1_iter;
  real_T tmp;
  real_T tmp_0;
  int32_T exitg1;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  s1_iter = 1;

  /* Inport: '<Root>/Input' */
  if (Factorial_U.Input < 0.0) {
    tmp_0 = ceil(Factorial_U.Input);
  } else {
    tmp_0 = floor(Factorial_U.Input);
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
  do {
    exitg1 = 0;
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp_0, 4.294967296E+9);
    }

    if (s1_iter <= (tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)
                    tmp)) {
      Factorial_Y.Output = (real_T)s1_iter * Factorial_DW.UnitDelay_DSTATE;
      Factorial_DW.UnitDelay_DSTATE = Factorial_Y.Output;
      s1_iter++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  /* End of Inport: '<Root>/Input' */
}

/* Model initialize function */
void Factorial_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Factorial_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Factorial_DW, 0,
                sizeof(DW_Factorial_T));

  /* external inputs */
  Factorial_U.Input = 0.0;

  /* external outputs */
  Factorial_Y.Output = 0.0;

  /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Factorial_DW.UnitDelay_DSTATE = 1.0;

  /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model terminate function */
void Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
