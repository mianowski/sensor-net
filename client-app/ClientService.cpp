#include "ClientService.hpp"
#include <iostream>

void ClientService::getNotified(std::vector<Measurement> measurements)
{

    std::cout << "Client got notified:" << std::endl;
    for(measurement: measurements)
    {
        std::cout << "Measurement: "<< measurement.value << " from sensor: " << measurement.sensor_id << std::endl;
    }
}