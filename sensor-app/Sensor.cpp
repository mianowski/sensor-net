
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "PlatformInterface.hpp"

#include <RCF/RCF.hpp>

int main()
{
    RCF::RcfInit rcfInit;

    try
    {

        std::string networkInterface = "127.0.0.1";
        int port = 50001;
        std::cout << "Connecting to server on " << networkInterface << ":" << port << "." << std::endl;

        // Make the call.
        RcfClient<I_PlatformService> sensor( RCF::TcpEndpoint(networkInterface, port) );
        int measurement = std::rand();
        int sensor_id = std::rand();
        sensor.add_measurement(RCF::Oneway, sensor_id, measurement);
    
    }
    catch(const RCF::Exception & e)
    {
        std::cout << "Caught exception:\n";
        std::cout << e.getErrorMessage() << std::endl;
        return 1;
    }

    return 0;
}
