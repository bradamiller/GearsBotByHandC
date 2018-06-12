/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Command.h>

class WristMove : public frc::Command {
 public:
  explicit WristMove(double setpoint);

  void Initialize() override;
  bool IsFinished() override;

 private:
  double m_setpoint;
};
