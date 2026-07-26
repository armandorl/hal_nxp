/*==================================================================================================
*   Zephyr RTD System Stub
*   Provides stub for rtd.h when needed
==================================================================================================*/

#ifndef RTD_H
#define RTD_H

#ifdef __cplusplus
extern "C"{
#endif

/* Stub for RTD system calls - not needed in Zephyr kernel environment */

/* RTD expects these typedefs */
typedef unsigned long uint_cpu_type;

/* RTD expects these function stubs */
static inline uint_cpu_type sys_enter_critical(void) {
    return 0;
}

static inline void sys_exit_critical(uint_cpu_type critical) {
    (void)critical;
}

#ifdef __cplusplus
}
#endif

#endif /* RTD_H */
