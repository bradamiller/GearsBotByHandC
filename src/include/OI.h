/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Buttons/JoystickButton.h>
#include <Joystick.h>

class OI {
 public:
  OI();

  frc::Joystick& GetStick();

 private:
  frc::Joystick m_driverStick{0};
  // FIXME: Add reference overloads of frc::JoystickButton constructor
  frc::JoystickButton m_button1{&m_driverStick, 1};
  frc::JoystickButton m_button2{&m_driverStick, 2};
};
