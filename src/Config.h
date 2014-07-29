/*
 * Config.h
 *
 *  Created on: 16 maj 2014
 *      Author: MattLech
 */

#ifndef CONFIG_H_
#define CONFIG_H_

const int LOGGING = 0;

const unsigned int MAX_STEPS_PER_SECOND = 1000;
const unsigned int MAX_ACCELERATION_STEPS_PER_SECOND = 2;
const unsigned int HOME_MOVEMENT_SPEED_S_P_S = 200;
const unsigned int INVERT_ENDSTOPS = 1;

const bool AXIS_HOME_UP_X = false;
const bool AXIS_HOME_UP_Y = false;
const bool AXIS_HOME_UP_Z = true;

const unsigned int MOVEMENT_TIMEOUT = 30;

const String SOFTWARE_VERSION = "GENESIS V.01.01";

#endif /* CONFIG_H_ */
