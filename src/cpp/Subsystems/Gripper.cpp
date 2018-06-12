/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/Gripper.h"
#include <Victor.h>

Gripper::Gripper() : frc::Subsystem("Gripper") {
  m_motor.SetName("Gripper", "motor");
}

void Gripper::InitDefaultCommand() {}

void Gripper::Open() { m_motor.Set(1.0); }

void Gripper::Close() { m_motor.Set(-1.0); }

void Gripper::Stop() { m_motor.StopMotor(); }
