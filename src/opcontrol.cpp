#include "main.h"
#include "globals.hpp"

#define TORTEX_GREEN 1
#define TORTEX_YELLOW 2
#define TORTEX_ORANGE 3
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
	pros::Vision vision_sensor (11);
	while(true){
		if(master.getDigital(okapi::ControllerDigital::A) == true){
			linear.forward(master.getDigital(
				okapi::ControllerDigital::A));
		}
		drive.tank(master.getAnalog(okapi::ControllerAnalog::leftY),
				   master.getAnalog(okapi::ControllerAnalog::rightY) * -1);

		pros::vision_object_s_t rtn = vision_sensor.get_by_sig(0, TORTEX_YELLOW);

		if (rtn.signature == TORTEX_YELLOW){
			if (rtn.x_middle_coord < 130 && rtn.x_middle_coord > 0){
				drive.right(20);
			} else if (rtn.x_middle_coord > 190 && rtn.x_middle_coord < 320) {
				drive.left(20);
			} else if (rtn.width < 280) {
				drive.forward (20);
			} else {
				drive.stop();
			}
			// while (rtn.x_middle_coord > 310 && rtn.x_middle_coord <330 && rtn.width < 400){
			// 	drive.forward(50);
			// }
		}
		// Prints "sig: 1"
		pros::delay(2);
	}
}
