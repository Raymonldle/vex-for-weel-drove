#pragma once

#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

#include "api.h"   //pros library
#include <cstdint>
//note: const is to c++ as final is to java
namespace DriveConstants {
    const std::int8_t kTopLeftPort = 11;
    const std::int8_t kTopRightPort = 1;
    const std::int8_t kBotLeftPort = 10;
    const std::int8_t kBotRightPort = 20;
}

#endif