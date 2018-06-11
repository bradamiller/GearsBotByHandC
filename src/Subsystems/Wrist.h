#ifndef WRIST_H
#define WRIST_H

#include "Commands/PIDSubsystem.h"
#include "WPILib.h"

class Wrist: public frc::PIDSubsystem {
 public:
	std::shared_ptr<frc::AnalogPotentiometer> pot;
	std::shared_ptr<frc::SpeedController> motor;
	Wrist();
	double ReturnPIDInput() override;
	void UsePIDOutput(double output) override;
	void InitDefaultCommand() override;
};

#endif
