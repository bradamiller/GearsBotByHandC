/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <Drive/DifferentialDrive.h>
#include <SpeedControllerGroup.h>
#include <ctre/Phoenix.h>

class DriveBase : public frc::Subsystem {
 public:
  DriveBase();

  void InitDefaultCommand() override;
  void Periodic() override;

  void DriveWithJoystick();
  void Forwards();
  void Backwards();
  void Stop();

 private:
  WPI_TalonSRX m_leftFront{0};
  WPI_TalonSRX m_leftRear{1};
  frc::SpeedControllerGroup m_leftMotors{m_leftFront, m_rightFront};

  WPI_TalonSRX m_rightFront{2};
  WPI_TalonSRX m_rightRear{3};
  frc::SpeedControllerGroup m_rightMotors{m_rightFront, m_rightRear};

  frc::DifferentialDrive m_differentialDrive{m_leftMotors, m_rightMotors};
};
