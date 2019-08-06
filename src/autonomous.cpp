#include "main.h"
#include "globals.hpp"

void autonomous() {
    using namespace okapi;
    rollers.forward(-127);
    if (ALLIANCE == false){ // RED
        if (STACK == false) { // BIG
            if (POSITION == false){ // FAR

            } if (POSITION == true){ // NEAR

            }
        }
        if (STACK == true) { // SMALL
            if (POSITION == false){ // FAR

            } if (POSITION == true){ // NEAR

            }
        }
    }
    if (ALLIANCE == true){ // BLUE
        if (STACK == false) { // BIG
            if (POSITION == false){ // FAR
                drive.moveDistance(2_ft);
                drive.turnAngle(90_deg);
                drive.moveDistance(3.5_ft);
                drive.turnAngle(90_deg);
                /* DROP */
            } if (POSITION == true){ // NEAR
                drive.moveDistance(1_ft);
                drive.turnAngle(-90_deg);
                drive.moveDistance(2_ft);
                drive.turnAngle(-90_deg);
                drive.moveDistance(1.5_ft);
                drive.turnAngle(-90_deg);
                drive.moveDistance(2_ft);
                /* DROP */
            }
        }
        if (STACK == true) { // SMALL
            if (POSITION == false){ // FAR

            } if (POSITION == true){ // NEAR

            }
        }
    }
    rollers.stop();
    // drive.moveDistance(1_ft);
    // drive.turnAngle(90_deg);
    // rollers.forward(-127);
    // drive.moveDistance(26_in);
    // drive.turnAngle(90_deg);
    // drive.moveDistance(3_ft);
    // rollers.stop();
    // drive.turnAngle(90_deg);
    // drive.moveDistance(38_in);
    // linear.moveDistance(1000);
}
