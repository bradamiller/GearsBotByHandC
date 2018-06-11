/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/Grab.h"

#include "Commands/CloseGripper.h"
#include "Commands/ElevatorMove.h"
#include "Commands/WristMove.h"

Grab::Grab() {
  AddSequential(new CloseGripper());
  AddParallel(new ElevatorMove(2.7));
  AddParallel(new WristMove(4.1));
}
