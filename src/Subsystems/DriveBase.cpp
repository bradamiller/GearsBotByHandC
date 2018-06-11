#include "ctre/Phoenix.h"

#include "DriveBase.h"
#include "Robot.h"
#include "SpeedControllerGroup.h"
#include "LiveWindow/LiveWindow.h"
#include "Joystick.h"
#include "Drive/DifferentialDrive.h"

DriveBase::DriveBase() : frc::Subsystem("DriveBase") {
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();

    leftFront = new WPI_TalonSRX(0);
    leftRear = new WPI_TalonSRX(1);
    leftMotors = frc::SpeedControllerGroup(*leftFront, *leftRear  );
    lw->AddActuator("DriveBase", "leftMotors", leftMotors);

    rightFront = new WPI_TalonSRX(2);
    rightRear = new WPI_TalonSRX(3);
    rightMotors = new frc::SpeedControllerGroup(*rightFront, *rightRear  );

    differentialDrive = new frc::DifferentialDrive(leftMotors, rightMotors);
    lw->AddActuator("DriveBase", "rightMotors", rightMotors);
}

void DriveBase::InitDefaultCommand() {
}

void DriveBase::Periodic() {
}

void DriveBase::driveWithJoystick() {
	frc::Joystick *stick = Robot::oi->getStick();
	differentialDrive->ArcadeDrive(-stick->GetY(), -stick->GetX());
}

void DriveBase::backwards() {
	differentialDrive->ArcadeDrive(-0.5, 0);
}

void DriveBase::stop() {
	differentialDrive->StopMotor();
}

void DriveBase::forwards() {
	differentialDrive->ArcadeDrive(0.5, 0);
}
