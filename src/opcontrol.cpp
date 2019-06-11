#include "main.h"
#include "globals.hpp"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	while(true){
		if(master.getDigital(okapi::ControllerDigital::A) == true){
			linear.forward(master.getDigital(
				okapi::ControllerDigital::A));
		}
		drive.tank(master.getAnalog(okapi::ControllerAnalog::leftY),
				   master.getAnalog(okapi::ControllerAnalog::rightY) * -1);

		
		// Prints "sig: 1"
		pros::delay(2);
	}
}
