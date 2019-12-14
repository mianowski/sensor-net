
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include <RCF/RCF.hpp>

#include "PlatformInterface.hpp"

class PlatformService
{
    std::vector<int> buffer;
public:
    PlatformService()
    {}

    bool add_measurement(int sensor_id, int measurement)
    {
        std::cout << "Added measurement: " << measurement << "form sensor: " << sensor_id << std::endl;
        return false;
    }

    int subscribe()
    {
        int client_id = 0;
        std::cout << "New client subscribed, got id: "<< client_id <<  std::endl;
        return client_id;
    }

    bool unsubscribe(int client_id)
    {
        std::cout << "Client of id: "<< client_id << " unsubscribed" <<  std::endl;
        return false;
    }
};

int main()
{
    RCF::RcfInit rcfInit;

	std::string networkInterface = "localhost";
	int port = 50001;
	std::cout << "Starting server on " << networkInterface << ":" << port << "." << std::endl;

    // Start a TCP server, and expose PlatformService.
    PlatformService demoService;
    RCF::RcfServer server( RCF::TcpEndpoint(networkInterface, port) );
    server.bind<I_PlatformService>(demoService);
    server.start();

    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.get();

    return 0;
}
