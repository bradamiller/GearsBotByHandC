/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/PlaceSoda.h"

#include "Commands/ElevatorMove.h"
#include "Commands/OpenGripper.h"
#include "Commands/WristMove.h"

PlaceSoda::PlaceSoda() {
  AddSequential(new WristMove(3.4));
  AddSequential(new ElevatorMove(2.7));
  AddSequential(new OpenGripper());
}
