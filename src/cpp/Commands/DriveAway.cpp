/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/DriveAway.h"
#include "Robot.h"

DriveAway::DriveAway() : frc::TimedCommand(1) {
  Requires(Robot::driveBase.get());
}

void DriveAway::Initialize() { Robot::driveBase->Backwards(); }

void DriveAway::End() { Robot::driveBase->Stop(); }
