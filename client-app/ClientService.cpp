#include "ClientService.hpp"
#include <iostream>
#include "Measurement.hpp"

void ClientService::getNotified(std::vector<Measurement> measurements)
{
    std::cout << "Client got notified:" << std::endl;
    for(auto measurement: measurements)
    {
        std::cout << "Measurement: "<< measurement.value << " from sensor: " << measurement.sensor_id << std::endl;
    }
}