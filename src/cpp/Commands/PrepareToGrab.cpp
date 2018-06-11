/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/PrepareToGrab.h"

#include "Commands/ElevatorMove.h"
#include "Commands/OpenGripper.h"
#include "Commands/WristMove.h"

PrepareToGrab::PrepareToGrab() {
  AddParallel(new ElevatorMove(1.5));
  AddParallel(new OpenGripper());
  AddParallel(new WristMove(3.4));
}
