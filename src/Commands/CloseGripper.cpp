#include "CloseGripper.h"

CloseGripper::CloseGripper() : frc::TimedCommand(1) {
	Requires(Robot::gripper);
}

void CloseGripper::Initialize() {
	Robot::gripper->close();
}

void CloseGripper::End() {
	Robot::gripper->stop();
}
