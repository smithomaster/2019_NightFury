#include "main.h"

#ifndef GLOBALS
#define GLOBALS

// vision
extern int VISION_PORT;
extern int TORTEX_YELLOW;
extern pros::Vision camera;

// controllers
extern okapi::Controller master;

// drive motors
extern int FRONT_LEFT_MOTOR_PORT;
extern int BACK_LEFT_MOTOR_PORT;

// linear motors
extern int LEFT_LINEAR_MOTOR_PORT;
extern int RIGHT_LINEAR_MOTOR_PORT;
extern int FRONT_RIGHT_MOTOR_PORT;
extern int BACK_RIGHT_MOTOR_PORT;

// chassis
extern okapi::ChassisControllerIntegrated drive;
extern okapi::ChassisControllerIntegrated linear;

#endif
