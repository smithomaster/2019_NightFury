#include "main.h"
#include "globals.hpp"

void autonomous() {
    using namespace okapi;
    drive.moveDistance(1_ft);
    drive.turnAngle(90_deg);
    rollers.forward(-127);
    drive.moveDistance(26_in);
    drive.turnAngle(90_deg);
    drive.moveDistance(3_ft);
    rollers.stop();
    drive.turnAngle(90_deg);
    drive.moveDistance(38_in);
    linear.moveDistance(1000);
}
