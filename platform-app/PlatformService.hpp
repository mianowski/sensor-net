
#ifndef INCLUDE_PLATFORMSERVICE_HPP
#define INCLUDE_PLATFORMSERVICE_HPP

#include <set>
#include <boost/circular_buffer.hpp>
#include "Measurement.hpp"

class PlatformService
{
    boost::circular_buffer<Measurement> buffer;
    std::set<int> subscribers;

public:
    PlatformService(uint buffer_size);
    void addMeasurement(int sensor_id, int measurement);
    int subscribe();
    bool unsubscribe(int client_id);
    void changeBufferSize(const uint new_size);
    std::vector<Measurement> getCurrentMeasurements();
};

#endif // ! INCLUDE_PLATFORMSERVICE_HPP