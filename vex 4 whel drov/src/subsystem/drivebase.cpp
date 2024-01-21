#include "subsystems/drivebase.h"


drivebase::drivebase(std::int8_t  topLeftPort, std::int8_t  topRightPort, std::int8_t  botLeftPort, std::int8_t  botRightPort) {
    m_topLeftMotor  = pros::Motor(TopLeftPort);
    m_topRightMotor = pros::Motor(TopRightPort,true);
    m_botLeftMotor  = pros::Motor(BotLeftPort);
    m_botRightMotor = pros::Motor(BotRightPort,true);
}

void drivebase::arcadeDrive(std::int32_t xAxisSpeed, std::int32_t zAxisSpeed){
    std::int32_t left = xAxisSpeed + zAxisSpeed;
    std::int32_t right = xAxisSpeed + zAxisSpeed;
    m_topLeftMotor.move(left);
    m_topRightMotor.move(right);
    m_botLeftMotor.move(left);
    m_botRightMotor.move(right);
}