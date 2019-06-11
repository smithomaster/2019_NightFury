#include "main.h"
#include "globals.hpp"

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
    pros::Vision vision_sensor(11);
    while(true){
        pros::vision_object_s_t rtn = vision_sensor.get_by_sig(0, TORTEX_YELLOW);

        if (rtn.signature == TORTEX_YELLOW)
        {
            if (rtn.x_middle_coord < 130 && rtn.x_middle_coord > 0)
            {
                drive.right(20);
            }
            else if (rtn.x_middle_coord > 190 && rtn.x_middle_coord < 320)
            {
                drive.left(20);
            }
            else if (rtn.width < 280)
            {
                drive.forward(20);
            }
            else
            {
                drive.stop();
            }
            // while (rtn.x_middle_coord > 310 && rtn.x_middle_coord <330 && rtn.width < 400){
            // 	drive.forward(50);
            // }
        }
    }
}
