#include "Gripper.h"

#include "LiveWindow/LiveWindow.h"
#include "Victor.h"
#include "SpeedController.h"

Gripper::Gripper() : frc::Subsystem("Gripper") {
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();
    motor.reset(new frc::Victor(0));
    lw->AddActuator("Gripper", "motor", std::static_pointer_cast<frc::Victor>(motor));
}

void Gripper::InitDefaultCommand() {
}

void Gripper::close() {
	motor->Set(-1.0);
}

void Gripper::open() {
	motor->Set(1.0);
}

void Gripper::stop() {
	motor->StopMotor();
}

