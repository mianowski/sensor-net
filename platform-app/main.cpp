#include <RCF/RCF.hpp>
#include <iostream>
#include "PlatformInterface.hpp"

class PlatformService
{
public:
    // Reverses the order of strings in the vector.
    void Reverse(std::vector<std::string> &v)
    {
        std::cout << "Reversing a vector of strings...\n";
        std::vector<std::string> w;
        std::copy(v.rbegin(), v.rend(), std::back_inserter(w));
        v.swap(w);
    }
};

int main()
{
    RCF::RcfInit rcfInit;

	std::string networkInterface = "localhost";
	int port = 50001;
	std::cout << "Starting server on " << networkInterface << ":" << port << "." << std::endl;

    // Start a TCP server, and expose PlatformService.
    PlatformService PlatformService;
    RCF::RcfServer server( RCF::TcpEndpoint(networkInterface, port) );
    server.bind<I_PlatformService>(PlatformService);
    server.start();

    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.get();

    return 0;
}