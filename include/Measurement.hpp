
#ifndef INCLUDE_MEASUREMENT_HPP
#define INCLUDE_MEASUREMENT_HPP

#include <SF/Archive.hpp>
struct Measurement
{
    int value;
    int sensor_id;
    void serialize(SF::Archive& ar);
};

#endif // ! INCLUDE_MEASUREMENT_HPP