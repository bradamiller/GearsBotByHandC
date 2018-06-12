/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "../../include/Subsystems/Elevator.h"

#include <PIDController.h>
#include <SmartDashboard/Sendable.h>

Elevator::Elevator() : frc::PIDSubsystem("Elevator", 1.0, 0.0, 0.0) {
  SetAbsoluteTolerance(0.2);
  GetPIDController()->SetContinuous(false);

  m_motor.SetName("Elevator", "motor");
  m_pot.SetName("Elevator", "pot");
  GetPIDController()->SetName("Elevator", "PIDSubsystem Controller");
}

double Elevator::ReturnPIDInput() { return m_pot.Get(); }

void Elevator::UsePIDOutput(double output) { m_motor.PIDWrite(output); }

void Elevator::InitDefaultCommand() {}
