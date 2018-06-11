#include "DriveForward.h"

DriveForward::DriveForward(): frc::TimedCommand(1) {
	Requires(Robot::driveBase);
}

void DriveForward::Initialize() {
	Robot::driveBase->forwards();
}

void DriveForward::End() {
	Robot::driveBase->stop();
}
