/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <Victor.h>

class Gripper : public frc::Subsystem {
 public:
  Gripper();

  void InitDefaultCommand() override;

  void Open();
  void Close();
  void Stop();

 private:
  frc::Victor m_motor{0};
};
