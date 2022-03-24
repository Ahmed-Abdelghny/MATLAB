/*
 * File: grading_system.h
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

#ifndef RTW_HEADER_grading_system_h_
#define RTW_HEADER_grading_system_h_
#include <string.h>
#include <stddef.h>
#ifndef grading_system_COMMON_INCLUDES_
# define grading_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* grading_system_COMMON_INCLUDES_ */

#include "grading_system_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S1>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_g
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String_g[256];

  /* Computed Parameter: StringConstant_String_e
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_e[256];

  /* Computed Parameter: StringConstant_String_o
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_o[256];

  /* Computed Parameter: StringConstant_String_m
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_m[256];
} ConstP_grading_system_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_grading_system_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Output[256];                  /* '<Root>/Output' */
} ExtY_grading_system_T;

/* Real-time Model Data Structure */
struct tag_RTM_grading_system_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_grading_system_T grading_system_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_grading_system_T grading_system_Y;

/* Constant parameters (default storage) */
extern const ConstP_grading_system_T grading_system_ConstP;

/* Model entry point functions */
extern void grading_system_initialize(void);
extern void grading_system_step(void);
extern void grading_system_terminate(void);

/* Real-time Model object */
extern RT_MODEL_grading_system_T *const grading_system_M;

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
 * '<Root>' : 'grading_system'
 * '<S1>'   : 'grading_system/If Action Subsystem'
 * '<S2>'   : 'grading_system/If Action Subsystem1'
 * '<S3>'   : 'grading_system/If Action Subsystem2'
 * '<S4>'   : 'grading_system/If Action Subsystem3'
 * '<S5>'   : 'grading_system/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_grading_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
