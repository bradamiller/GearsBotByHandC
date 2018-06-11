#ifndef DRIVEBASE_H
#define DRIVEBASE_H
#include "Commands/Subsystem.h"
#include "ctre/Phoenix.h"

#include "WPILib.h"

class DriveBase: public frc::Subsystem {
private:
	WPI_TalonSRX *leftFront;
	WPI_TalonSRX *leftRear;
	frc::SpeedControllerGroup *leftMotors;
	WPI_TalonSRX *rightFront;
	WPI_TalonSRX *rightRear;
	frc::SpeedControllerGroup *rightMotors;
	frc::DifferentialDrive *differentialDrive;
public:
	DriveBase();
	void InitDefaultCommand() override;
	void Periodic() override;
	void driveWithJoystick();
	void backwards();
	void forwards();
	void stop();
};

#endif
