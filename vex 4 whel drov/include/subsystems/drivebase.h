#pragma once

#ifndef _SUBSYSTEMS_DRIVEBASE_H_
#define _SUBSYSTEMS_DRIVEBASE_H_

#include "api.h"   //pros library
#include "constants.h"
#include <cstdint>

class drivebase {
  public:
     drivebase(std::int8_t topLeft, std::int8_t topRight, std::int8_t botLeft, std::int8_t botRight);
     void arcadeDrive(int xAxisSpeed, int zAxisTurn);
  private:  
   /*by default if no value is provided as an object, then c++
   will call the default constructor for you */
     pros::Motor m_topLeftMotor; //ISSUE: pro's motor have no default constructor
     pros::Motor m_topRightMotor;
     pros::Motor m_botLeftMotor;
     pros::Motor m_botRightMotor;
};



#endif