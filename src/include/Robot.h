#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "LiveWindow/LiveWindow.h"

#include "Commands/Everything.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/Elevator.h"
#include "Subsystems/Gripper.h"
#include "Subsystems/Wrist.h"
#include "OI.h"

class Robot : public frc::TimedRobot {
public:
	frc::Command* autonomousCommand = nullptr;
	static OI *oi;
	frc::LiveWindow *lw;
	frc::SendableChooser<frc::Command*> chooser;
	static DriveBase * driveBase;
	static Gripper *gripper;
	static Wrist * wrist;
	static Elevator * elevator;
	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
};
#endif
