#include "main.h"
#include "globals.hpp"

void opcontrol() {
	while(true){
		drive.tank(master.getAnalog(okapi::ControllerAnalog::leftY),
				   master.getAnalog(okapi::ControllerAnalog::rightY) * -1);

		if (master.getDigital(okapi::ControllerDigital::R1) == true){
			linear.forward(127);
		} else if (master.getDigital(okapi::ControllerDigital::R2) == true){
			linear.forward(-127);
		} else {
			linear.stop();
		}

		if (master.getDigital(okapi::ControllerDigital::L1)){
			rollers.forward(-127);
		} else if (master.getDigital(okapi::ControllerDigital::L2)){
			rollers.forward(127);
		} else {
			linear.stop();
		}

		pros::delay(2);
	}
}
