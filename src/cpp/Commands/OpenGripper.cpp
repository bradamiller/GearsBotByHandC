#include "OpenGripper.h"

OpenGripper::OpenGripper() : frc::TimedCommand(1) {
	Requires(Robot::gripper);
}

void OpenGripper::Initialize() {
	Robot::gripper->open();
}
void OpenGripper::End() {
	Robot::gripper->close();
}
