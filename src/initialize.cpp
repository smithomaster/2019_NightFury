#include "main.h"
#include "globals.hpp"

/**
 * Occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; 
 * keep execution time for this mode under a few seconds.
 */
void initialize() {
}

/**
 * while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol.
 */
void disabled() {}

/**
 * Competition-specific initalisation, after initialise before auto
 * Stuff like LCD selectors
 */
void competition_initialize() {}
