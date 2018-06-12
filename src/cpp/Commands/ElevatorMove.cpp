/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/ElevatorMove.h"
#include "Robot.h"

ElevatorMove::ElevatorMove(double setpoint) {
  m_setpoint = setpoint;
  Requires(Robot::elevator);
}

void ElevatorMove::Initialize() {
  Robot::elevator->Enable();
  Robot::elevator->SetSetpoint(m_setpoint);
}

bool ElevatorMove::IsFinished() { return Robot::elevator->OnTarget(); }
