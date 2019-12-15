#include "Measurement.hpp"

void Measurement::serialize(SF::Archive& ar)
{
    ar & value;
    ar & sensor_id;
}
