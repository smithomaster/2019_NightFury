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
// false far, true near

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
    if(POSITION == false){
        POSITION = true;
        pros::lcd::print(1, "POSITION (BTN 2): NEAR");
    }
    else if (POSITION == true) {
        POSITION = false;
        pros::lcd::print(1, "POSITION (BTN 2): FAR");
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
    pros::lcd::print(1, "POSITION (BTN 2): FAR");
    pros::lcd::print(2, "STACK (BTN 3): BIG");
    pros::lcd::print(4, "PEMBROKE PEMBOTS 12223C");
    pros::lcd::print(7, "GOOD LUCK, TEAM!");

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
