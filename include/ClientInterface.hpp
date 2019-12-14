
#ifndef INCLUDE_CLIENTINTERFACE_HPP
#define INCLUDE_CLIENTINTERFACE_HPP

#include <string>
#include <vector>

#include <RCF/Idl.hpp>
#include <SF/vector.hpp>
#include "Measurement.hpp"

RCF_BEGIN(I_ClientService, "I_ClientService")
    RCF_METHOD_V1(void, getNotified, std::vector<Measurement>);
RCF_END(I_ClientService);

#endif // ! INCLUDE_CLIENTINTERFACE_HPP
