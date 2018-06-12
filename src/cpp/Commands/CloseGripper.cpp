/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/CloseGripper.h"
#include "Robot.h"

CloseGripper::CloseGripper() : frc::TimedCommand(1) {
  Requires(Robot::gripper);
}

void CloseGripper::Initialize() { Robot::gripper->Close(); }

void CloseGripper::End() { Robot::gripper->Stop(); }
