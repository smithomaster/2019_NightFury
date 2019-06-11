#include "main.h"

int FRONT_LEFT_MOTOR_PORT =  1;
int BACK_LEFT_MOTOR_PORT =  2;
int LEFT_LINEAR_MOTOR_PORT = 3;
int RIGHT_LINEAR_MOTOR_PORT = 8;
int FRONT_RIGHT_MOTOR_PORT =  9;
int BACK_RIGHT_MOTOR_PORT =  10;
int VISION_PORT = 11;
int TORTEX_YELLOW = 2;
okapi::Controller master;

pros::Vision camera(VISION_PORT);
using namespace okapi::literals;
okapi::ChassisControllerIntegrated drive = okapi::ChassisControllerFactory::create(
    {FRONT_LEFT_MOTOR_PORT, BACK_LEFT_MOTOR_PORT}, {FRONT_RIGHT_MOTOR_PORT, BACK_RIGHT_MOTOR_PORT},
    okapi::AbstractMotor::gearset::green,
    {4_in, 11.5_in}
);

okapi::ChassisControllerIntegrated linear = okapi::ChassisControllerFactory::create(
    LEFT_LINEAR_MOTOR_PORT, RIGHT_LINEAR_MOTOR_PORT, 
    okapi::AbstractMotor::gearset::red
);