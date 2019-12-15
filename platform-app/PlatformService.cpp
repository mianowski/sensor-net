#include "PlatformService.hpp"

#include <iostream>

PlatformService::PlatformService(uint buffer_size)
{
    buffer = boost::circular_buffer<Measurement> (buffer_size);
}

void PlatformService::addMeasurement(int sensor_id, int measurement)
{
    std::cout << "Added measurement: " << measurement << "form sensor: " << sensor_id << std::endl;
}

int PlatformService::subscribe()
{
    int client_id = 0;
    std::cout << "New client subscribed, got id: "<< client_id <<  std::endl;
    return client_id;
}

bool PlatformService::unsubscribe(int client_id)
{
    std::cout << "Client of id: "<< client_id << " unsubscribed" <<  std::endl;
    return false;
}

void PlatformService::changeBufferSize(const uint new_size)
{
    buffer.resize(new_size);
}

std::vector<Measurement> PlatformService::getCurrentMeasurements()
{
    std::vector<Measurement> vec{{0,1}};
    return vec;
}
