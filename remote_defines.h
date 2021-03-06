/*
 * remote_defines.h
 *
 *  Created on: May 9, 2013
 *      Author: joao
 */

#ifndef REMOTE_DEFINES_H_
#define REMOTE_DEFINES_H_

#include <stdint.h>

#define DRV_ZERO			0
#define DRV_REAR			-50
#define DRV_FRONT			50
#define DRV_REAR_N2O		-70
#define DRV_FRONT_N2O		70

#define SEND_MSG_TIME		500

#define DONGLE_MILLIS		1000
#define CAR_PARAM_MILLIS	500
#define ASK_BIT				0x10

#define L1_BUTTON			0x01
#define R1_BUTTON			0x04
#define L2_BUTTON			0x02
#define R2_BUTTON			0x08
#define ASK_BIT				0x10

#define VEL_STEER_MIN		40
#define VEL_STEER_MAX		100


typedef struct ROSpberryRemote
{
	int16_t linear;
	int16_t steer;
	uint8_t buttons;

}RC_remote;

#endif /* REMOTE_DEFINES_H_ */
