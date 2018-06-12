/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/DriveBase.h"

#include <ctre/Phoenix.h>

#include "Robot.h"

DriveBase::DriveBase() : frc::Subsystem("DriveBase") {
  m_leftMotors.SetName("DriveBase", "leftMotors");
  m_rightMotors.SetName("DriveBase", "rightMotors");
}

void DriveBase::InitDefaultCommand() {}

void DriveBase::Periodic() {}

void DriveBase::DriveWithJoystick() {
  auto& stick = Robot::oi.GetStick();
  m_differentialDrive.ArcadeDrive(-stick.GetY(), -stick.GetX());
}

void DriveBase::Forwards() { m_differentialDrive.ArcadeDrive(0.5, 0); }

void DriveBase::Backwards() { m_differentialDrive.ArcadeDrive(-0.5, 0); }

void DriveBase::Stop() { m_differentialDrive.StopMotor(); }
