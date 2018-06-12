/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Command.h>
#include <SmartDashboard/SendableChooser.h>
#include <TimedRobot.h>

#include "Commands/Everything.h"
#include "OI.h"
#include "Subsystems/DriveBase.h"
#include "Subsystems/Elevator.h"
#include "Subsystems/Gripper.h"
#include "Subsystems/Wrist.h"

class Robot : public frc::TimedRobot {
 public:
  static OI * oi;
  static DriveBase * driveBase;
  static Gripper * gripper;
  static Wrist * wrist;
  static Elevator * elevator;

  void RobotInit() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;

 private:
  Everything m_autonomousCommand;
  frc::SendableChooser<frc::Command*> m_chooser;
  frc::Command* m_chosenCommand = &m_autonomousCommand;
};
