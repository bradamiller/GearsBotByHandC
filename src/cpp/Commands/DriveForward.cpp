/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/DriveForward.h"

#include "Robot.h"

DriveForward::DriveForward() : frc::TimedCommand(1) {
  Requires(Robot::driveBase.get());
}

void DriveForward::Initialize() { Robot::driveBase->Forwards(); }

void DriveForward::End() { Robot::driveBase->Stop(); }
