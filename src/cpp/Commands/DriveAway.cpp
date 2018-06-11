#include "DriveAway.h"
#include "Commands/TimedCommand.h"

DriveAway::DriveAway(): frc::TimedCommand(1) {
	Requires(Robot::driveBase);
}

void DriveAway::Initialize() {
	Robot::driveBase->backwards();
}

void DriveAway::End() {
	Robot::driveBase->stop();
}
