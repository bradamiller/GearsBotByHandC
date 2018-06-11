#ifndef WRISTMOVE_H
#define WRISTMOVE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class WristMove: public frc::Command {
public:

WristMove(double setpoint);
	void Initialize() override;
	bool IsFinished() override;

private:
    double m_setpoint;
};

#endif
