
#ifndef INCLUDE_CLIENTSERVICE_HPP
#define INCLUDE_CLIENTSERVICE_HPP
#include <vector>
#include "Measurement.hpp"

class ClientService
{
    public:
    void getNotified(std::vector<Measurement>);
};


#endif // ! INCLUDE_CLIENTSERVICE_HPP