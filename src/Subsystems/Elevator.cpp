
#include "Elevator.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "AnalogPotentiometer.h"
#include "PIDController.h"
#include "Victor.h"

Elevator::Elevator() : PIDSubsystem("Elevator", 1.0, 0.0, 0.0) {
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();
    motor = new frc::Victor(2);
    lw->AddActuator("Elevator", "motor", std::static_pointer_cast<frc::Victor>(motor));

    pot = new frc::AnalogPotentiometer(1, 1.0, 0.0);
    lw->AddSensor("Elevator", "pot", pot);

	SetAbsoluteTolerance(0.2);
    GetPIDController()->SetContinuous(false);
    lw->AddActuator("Elevator", "PIDSubsystem Controller", GetPIDController());
}

double Elevator::ReturnPIDInput() {
        return pot->Get();
}

void Elevator::UsePIDOutput(double output) {
    motor->PIDWrite(output);
}

void Elevator::InitDefaultCommand() {
}
