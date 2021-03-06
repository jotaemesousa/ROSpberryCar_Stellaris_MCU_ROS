/*
 * common_includes.h
 *
 *  Created on: Dec 22, 2013
 *      Author: joao
 */

#ifndef COMMON_INCLUDES_H_
#define COMMON_INCLUDES_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <math.h>
#include <inc/hw_memmap.h>
#include <inc/hw_types.h>
#include <inc/hw_i2c.h>
#include <inc/hw_ints.h>
#include <driverlib/adc.h>
#include <driverlib/interrupt.h>
#include <driverlib/i2c.h>
#include <driverlib/pwm.h>
#include <driverlib/rom.h>
#include <driverlib/rom_map.h>
#include <driverlib/sysctl.h>
#include <driverlib/systick.h>
#include <driverlib/gpio.h>
#include <driverlib/uart.h>
#include "utils/uartstdio.h"
#include "utils/ustdlib.h"
#include <stdint.h>
#include <driverlib/ssi.h>
#include "timer.h"

#ifdef __cplusplus
}
#endif

#endif /* COMMON_INCLUDES_H_ */
