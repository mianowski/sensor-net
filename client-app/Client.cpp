
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

        std::string networkInterface = "localhost";
        int port = 50001;
        std::cout << "Connecting to server on " << networkInterface << ":" << port << "." << std::endl;



        // RcfClient<I_PlatformService> platformClient( RCF::TcpEndpoint(networkInterface, port) );
        // const int client_id = platformClient.subscribe(RCF::Twoway);
        // platformClient.unsubscribe(client_id);

    }
    catch(const RCF::Exception & e)
    {
        std::cout << "Caught exception:\n";
        std::cout << e.getErrorMessage() << std::endl;
        return 1;
    }

    return 0;
}
