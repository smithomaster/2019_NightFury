#include "main.h"

#ifndef GLOBALS
#define GLOBALS

extern int FRONT_LEFT_MOTOR_PORT;
extern int BACK_LEFT_MOTOR_PORT;
extern int LEFT_LINEAR_MOTOR_PORT;
extern int RIGHT_LINEAR_MOTOR_PORT;
extern int FRONT_RIGHT_MOTOR_PORT;
extern int BACK_RIGHT_MOTOR_PORT;
extern int VISION_PORT;
extern int TORTEX_YELLOW;

extern okapi::Controller master;
extern pros::Vision camera;
extern okapi::ChassisControllerIntegrated drive;

extern okapi::ChassisControllerIntegrated linear;

#endif
