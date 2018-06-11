#include "DefaultDrive.h"

DefaultDrive::DefaultDrive(): frc::Command() {
	Requires(Robot::driveBase);
}

void DefaultDrive::Execute() {
	Robot::driveBase->driveWithJoystick();
}

bool DefaultDrive::IsFinished() {
    return false;
}
