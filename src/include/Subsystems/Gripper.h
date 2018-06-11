#ifndef GRIPPER_H
#define GRIPPER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

class Gripper: public frc::Subsystem {
private:
	std::shared_ptr<frc::SpeedController> motor;
public:
	Gripper();
	void open();
	void close();
	void stop();
};

#endif
