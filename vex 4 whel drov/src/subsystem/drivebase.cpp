#include "subsystems/drivebase.h"


drivebase::drivebase(std::int8_t  topLeftPort, std::int8_t  topRightPort, std::int8_t  botLeftPort, std::int8_t  botRightPort): 
    m_topLeftMotor{TopLeftPort},
    m_topRightMotor{TopRightPort}
    m_botLeftMotor(BotLeftPort,true),
    m_botRightMotor(BotRightPort,true), {}


void drivebase::arcadeDrive(std::int32_t xAxisSpeed, std::int32_t zAxisSpeed){
    std::int32_t left = xAxisSpeed + zAxisSpeed;
    std::int32_t right = xAxisSpeed + zAxisSpeed;
    m_topLeftMotor.move(left);
    m_topRightMotor.move(right);
    m_botLeftMotor.move(left);
    m_botRightMotor.move(right);
}