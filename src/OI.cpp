#include "OI.h"

#include "SmartDashboard/SmartDashboard.h"
#include "Commands/CloseGripper.h"
#include "Commands/DefaultDrive.h"
#include "Commands/DriveAway.h"
#include "Commands/DriveForward.h"
#include "Commands/ElevatorMove.h"
#include "Commands/Everything.h"
#include "Commands/Grab.h"
#include "Commands/OpenGripper.h"
#include "Commands/PlaceSoda.h"
#include "Commands/PrepareToGrab.h"
#include "Commands/WristMove.h"
#include "OI.h"

OI::OI() {
    driverStick.reset(new frc::Joystick(0));
    
    button2.reset(new frc::JoystickButton(driverStick.get(), 1));
    button2->WhileHeld(new OpenGripper(0));
    button1.reset(new frc::JoystickButton(driverStick.get(), 1));
    button1->WhileHeld(new Everything());

    frc::SmartDashboard::PutData("WristMove", new WristMove(1));
    frc::SmartDashboard::PutData("PrepareToGrab", new PrepareToGrab());
    frc::SmartDashboard::PutData("PlaceSoda", new PlaceSoda());
    frc::SmartDashboard::PutData("CloseGripper", new CloseGripper());
    frc::SmartDashboard::PutData("OpenGripper", new OpenGripper());
    frc::SmartDashboard::PutData("Grab", new Grab());
    frc::SmartDashboard::PutData("Everything", new Everything());
    frc::SmartDashboard::PutData("ElevatorMove", new ElevatorMove(3));
    frc::SmartDashboard::PutData("DriveForward", new DriveForward());
    frc::SmartDashboard::PutData("DriveAway", new DriveAway());
    frc::SmartDashboard::PutData("DefaultDrive", new DefaultDrive());
}

frc::Joystick * OI::getStick() {
   return driverStick;
}
