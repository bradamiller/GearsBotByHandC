/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "../../include/Subsystems/Wrist.h"

#include <PIDController.h>
#include <SmartDashboard/Sendable.h>
#include <Commands/PIDSubsystem.h>
#include <Victor.h>

Wrist::Wrist() : PIDSubsystem("Wrist", 1.0, 0.0, 0.0) {
  SetAbsoluteTolerance(0.2);
  GetPIDController()->SetContinuous(false);

  GetPIDController()->SetName("Wrist", "PIDSubsystem Controller");
  m_pot.SetName("Wrist", "pot");
  m_motor.SetName("Wrist", "motor");
}

double Wrist::ReturnPIDInput() { return m_pot.Get(); }

void Wrist::UsePIDOutput(double output) { m_motor.PIDWrite(output); }

void Wrist::InitDefaultCommand() {}
