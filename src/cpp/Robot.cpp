/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <Commands/Scheduler.h>
#include <SmartDashboard/SmartDashboard.h>

OI * Robot::oi = NULL;
Gripper * Robot::gripper = NULL;
DriveBase * Robot::driveBase = NULL;
Elevator * Robot::elevator = NULL;
Wrist * Robot::wrist = NULL;

void Robot::RobotInit() {
	Robot::oi = new OI();
	Robot::driveBase = new DriveBase();
	Robot::gripper = new Gripper();
	Robot::wrist = new Wrist();
	Robot::elevator = new Elevator();

  // FIXME: Add reference overload of frc::SendableChooser::AddDefault()
  m_chooser.AddDefault("Everything", &m_autonomousCommand);
  // FIXME: Add reference overload of frc::SmartDashboard::PutData()
  frc::SmartDashboard::PutData("Auto Modes", &m_chooser);
}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::AutonomousInit() {
  m_chosenCommand = m_chooser.GetSelected();
  m_chosenCommand->Start();
}

void Robot::AutonomousPeriodic() { frc::Scheduler::GetInstance()->Run(); }

void Robot::TeleopInit() { m_chosenCommand->Cancel(); }

void Robot::TeleopPeriodic() { frc::Scheduler::GetInstance()->Run(); }

START_ROBOT_CLASS(Robot);
