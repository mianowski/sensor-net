
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include <RCF/RCF.hpp>

#include "ClientInterface.hpp"
#include "PlatformInterface.hpp"
#include "PlatformService.hpp"


int main()
{
    RCF::RcfInit rcfInit;

    std::string networkInterface = "localhost";
    int port = 50001;
    std::cout << "Starting server on " << networkInterface << ":" << port << "." << std::endl;
    uint buffer_size(3);
    // Start a TCP server, and expose PlatformService.

    PlatformService demoService(buffer_size);
    RCF::RcfServer server( RCF::TcpEndpoint(networkInterface, port) );

    server.bind<I_PlatformService>(demoService);
    server.start();

    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.get();

    return 0;
}
