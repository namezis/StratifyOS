/*! \file */

#ifndef CONFIG_H_
#define CONFIG_H_

#include "mcu/debug.h"

#if MCU_DEBUG
#define VERSION "3.7.0bd"
#else
#define VERSION "3.7.0b"
#endif

#define BCD_VERSION 0x370


#include <stdint.h>


#define PTHREAD_MAX_LOCKS 1024
#define PTHREAD_MUTEX_PRIO_CEILING 0
#define PTHREAD_STACK_MIN 128
#define SCHED_LOWEST_PRIORITY 0
#define SCHED_HIGHEST_PRIORITY 31
#define SCHED_DEFAULT_PRIORITY 0
#define SCHED_RR_DURATION 10

#define USE_STDIO 1

#include "mcu/arch.h"

#endif
