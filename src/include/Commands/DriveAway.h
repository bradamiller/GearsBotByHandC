#ifndef DRIVEAWAY_H
#define DRIVEAWAY_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class DriveAway: public frc::TimedCommand {
public:
	DriveAway();

	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
};

#endif
