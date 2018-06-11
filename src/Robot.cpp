#include "Robot.h"


void Robot::RobotInit() {
	lw = frc::LiveWindow::GetInstance();
    driveBase = new DriveBase();
    gripper = new Gripper();
    wrist = new Wrist();
    elevator = new Elevator();
	oi = new OI();
	chooser.AddDefault("Everything", new Everything());
	frc::SmartDashboard::PutData("Auto Modes", &chooser);
}

void Robot::DisabledInit(){
}

void Robot::DisabledPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {
	autonomousCommand = chooser.GetSelected();
	if (autonomousCommand != nullptr)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	if (autonomousCommand != nullptr)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

START_ROBOT_CLASS(Robot);

