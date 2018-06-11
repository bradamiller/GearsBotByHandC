#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class Elevator: public frc::PIDSubsystem {
 public:
	std::shared_ptr<frc::SpeedController> motor;
	std::shared_ptr<frc::AnalogPotentiometer> pot;
	Elevator();
	double ReturnPIDInput() override;
	void UsePIDOutput(double output) override;
	void InitDefaultCommand() override;
};

#endif
