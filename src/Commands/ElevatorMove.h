#ifndef ELEVATORMOVE_H
#define ELEVATORMOVE_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class ElevatorMove: public frc::Command {
public:

ElevatorMove(double setpoint);

	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;

private:
    double m_setpoint;
};

#endif
