#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	std::shared_ptr<frc::Joystick> driverStick;
	std::shared_ptr<frc::JoystickButton> button2;
	std::shared_ptr<frc::JoystickButton> button1;
public:
	OI();
	frc::Joystick * getStick();
};

#endif
