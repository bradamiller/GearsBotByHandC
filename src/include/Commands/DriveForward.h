#ifndef DRIVEFORWARD_H
#define DRIVEFORWARD_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class DriveForward: public frc::TimedCommand {
public:
	DriveForward();
	void Initialize() override;
	void End() override;

private:
};

#endif
