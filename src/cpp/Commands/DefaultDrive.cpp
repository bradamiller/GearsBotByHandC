/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/DefaultDrive.h"

#include "Robot.h"

DefaultDrive::DefaultDrive() {
  Requires(Robot::driveBase);
}

void DefaultDrive::Execute() { Robot::driveBase->DriveWithJoystick(); }

bool DefaultDrive::IsFinished() { return false; }
