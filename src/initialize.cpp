#include "main.h"
#include "globals.hpp"

/**
 * Occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; 
 * keep execution time for this mode under a few seconds.
 */

// red false, blue true
// big false, small true
// 0 next to big stack, 1 next down,
// 3 next to small stack, 2 next up

void on_alliance_button () {
    if(ALLIANCE == false){
        ALLIANCE = true;
        pros::lcd::print(0, "ALLIANCE (BTN 1): BLUE");
    }
    else if(ALLIANCE == true){
        ALLIANCE = false;
        pros::lcd::print(0, "ALLIANCE (BTN 1): RED");
    }
}
void on_position_button()
{
    if(POSITION == 0){
        POSITION = 1;
        pros::lcd::print(1, "POSITION (BTN 2): 2");
    }
    else if (POSITION == 1)
    {
        POSITION = 2;
        pros::lcd::print(1, "POSITION (BTN 2): 3");
    }
    else if (POSITION == 2)
    {
        POSITION = 3;
        pros::lcd::print(1, "POSITION (BTN 2): 4");
    }
    else if (POSITION == 3)
    {
        POSITION = 0;
        pros::lcd::print(1, "POSITION (BTN 2): 1");
    }
}
void on_stack_button()
{
    if (STACK == false)
    {
        STACK = true;
        pros::lcd::print(0, "STACK (BTN 3): SMALL");
    }
    else if (STACK == true)
    {
        STACK = false;
        pros::lcd::print(0, "STACK (BTN 3): BIG");
    }
}
void initialize() {
    pros::lcd::initialize();

    pros::lcd::print(0, "ALLIANCE (BTN 1): RED");
    pros::lcd::print(1, "POSITION (BTN 2): 1");
    pros::lcd::print(2, "STACK (BTN 3): BIG");

    pros::lcd::register_btn0_cb(on_alliance_button);
    pros::lcd::register_btn1_cb(on_position_button);
    pros::lcd::register_btn2_cb(on_stack_button);
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
