/*
 * File: calculater_sub_sys.h
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

#ifndef RTW_HEADER_calculater_sub_sys_h_
#define RTW_HEADER_calculater_sub_sys_h_
#include <string.h>
#include <stddef.h>
#ifndef calculater_sub_sys_COMMON_INCLUDES_
# define calculater_sub_sys_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calculater_sub_sys_COMMON_INCLUDES_ */

#include "calculater_sub_sys_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
  real_T Input1;                       /* '<Root>/Input1' */
} ExtU_calculater_sub_sys_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
  real_T Output2;                      /* '<Root>/Output2' */
  real_T Output3;                      /* '<Root>/Output3' */
} ExtY_calculater_sub_sys_T;

/* Real-time Model Data Structure */
struct tag_RTM_calculater_sub_sys_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_calculater_sub_sys_T calculater_sub_sys_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_calculater_sub_sys_T calculater_sub_sys_Y;

/* Model entry point functions */
extern void calculater_sub_sys_initialize(void);
extern void calculater_sub_sys_step(void);
extern void calculater_sub_sys_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calculater_sub_sys_T *const calculater_sub_sys_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'calculater_sub_sys'
 * '<S1>'   : 'calculater_sub_sys/Subsystem'
 */
#endif                                 /* RTW_HEADER_calculater_sub_sys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
