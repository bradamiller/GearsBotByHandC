/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/OpenGripper.h"

#include "Robot.h"

OpenGripper::OpenGripper() : frc::TimedCommand(1) {
  Requires(Robot::gripper);
}

void OpenGripper::Initialize() { Robot::gripper->Open(); }
void OpenGripper::End() { Robot::gripper->Close(); }
