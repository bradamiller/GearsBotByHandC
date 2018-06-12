/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/WristMove.h"
#include "Robot.h"

WristMove::WristMove(double setpoint) {
  m_setpoint = setpoint;
  Requires(Robot::wrist);
}

void WristMove::Initialize() {
  Robot::wrist->Enable();
  Robot::wrist->SetSetpoint(m_setpoint);
}

bool WristMove::IsFinished() { return Robot::wrist->OnTarget(); }
