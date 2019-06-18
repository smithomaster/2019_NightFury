#include "main.h"
#include "globals.hpp"

void autonomous() {
    while(true){
        pros::vision_object_s_t rtn = camera.get_by_sig(0, TORTEX_YELLOW);

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
