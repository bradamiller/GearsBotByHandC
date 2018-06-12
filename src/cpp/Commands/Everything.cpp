/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/Everything.h"

#include "Commands/DriveForward.h"
#include "Commands/Grab.h"
#include "Commands/PlaceSoda.h"
#include "Commands/PrepareToGrab.h"

Everything::Everything() {
  AddSequential(new PrepareToGrab());
  AddSequential(new Grab());
  AddSequential(new DriveForward());
  AddSequential(new PlaceSoda());
}
