#include "main.h"

int FRONT_LEFT_MOTOR_PORT =  1;
int BACK_LEFT_MOTOR_PORT =  2;
int FRONT_RIGHT_MOTOR_PORT =  9;
int BACK_RIGHT_MOTOR_PORT =  10;

okapi::Controller master;

using namespace okapi::literals;
okapi::ChassisControllerIntegrated drive = okapi::ChassisControllerFactory::create(
    {FRONT_LEFT_MOTOR_PORT, BACK_LEFT_MOTOR_PORT}, {FRONT_RIGHT_MOTOR_PORT, BACK_RIGHT_MOTOR_PORT},
    okapi::AbstractMotor::gearset::green,
    {4_in, 11.5_in}
);