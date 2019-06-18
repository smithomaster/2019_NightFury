#include "main.h"
#include "globals.hpp"

void opcontrol() {
	while(true){
		if(master.getDigital(okapi::ControllerDigital::A) == true){
			linear.forward(master.getDigital(
				okapi::ControllerDigital::A));
		}
		drive.tank(master.getAnalog(okapi::ControllerAnalog::leftY),
				   master.getAnalog(okapi::ControllerAnalog::rightY) * -1);
		
		pros::delay(2);
	}
}
