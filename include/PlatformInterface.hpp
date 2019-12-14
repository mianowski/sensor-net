
#ifndef INCLUDE_PLATFORMINTERFACE_HPP
#define INCLUDE_PLATFORMINTERFACE_HPP

#include <string>
#include <vector>

#include <RCF/Idl.hpp>
#include <SF/vector.hpp>

RCF_BEGIN(I_PlatformService, "I_PlatformService")
    RCF_METHOD_V2(void, add_measurement, int, int);
    RCF_METHOD_R0(bool, subscribe);
    RCF_METHOD_R1(bool, unsubscribe, int);
RCF_END(I_PlatformService);

#endif // ! INCLUDE_PLATFORMINTERFACE_HPP
