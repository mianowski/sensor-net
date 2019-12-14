
#ifndef INCLUDE_PLATFORMINTERFACE_HPP
#define INCLUDE_PLATFORMINTERFACE_HPP

#include <string>
#include <vector>

#include <RCF/Idl.hpp>
#include <SF/vector.hpp>

RCF_BEGIN(I_PlatformService, "I_PlatformService")
    RCF_METHOD_V1(void, Reverse, std::vector<std::string> &);
RCF_END(I_PlatformService);

#endif // ! INCLUDE_PLATFORMINTERFACE_HPP
