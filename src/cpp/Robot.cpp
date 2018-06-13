/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <Commands/Scheduler.h>
#include <SmartDashboard/SmartDashboard.h>

std::unique_ptr<OI> Robot::oi;
std::unique_ptr<Gripper> Robot::gripper;
std::unique_ptr<DriveBase> Robot::driveBase;
std::unique_ptr<Elevator> Robot::elevator;
std::unique_ptr<Wrist> Robot::wrist;

void Robot::RobotInit() {
	Robot::oi = std::make_unique<OI>();
	Robot::driveBase = std::make_unique<DriveBase>();
	Robot::gripper = std::make_unique<Gripper>();
	Robot::wrist = std::make_unique<Wrist>();
	Robot::elevator = std::make_unique<Elevator>();

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
