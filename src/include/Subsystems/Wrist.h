/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <AnalogPotentiometer.h>
#include <Commands/PIDSubsystem.h>
#include <Victor.h>

class Wrist : public frc::PIDSubsystem {
 public:
  Wrist();

  double ReturnPIDInput() override;
  void UsePIDOutput(double output) override;
  void InitDefaultCommand() override;

 private:
  frc::AnalogPotentiometer m_pot{0, 1.0, 0.0};
  frc::Victor m_motor{1};
};
