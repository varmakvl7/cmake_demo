#include <iostream>
#include <string>
#include "AIPExceptions.h"

int main()
{
    LOG_ERROR << "HELLO FROM LOGGER";
    boost::this_thread::sleep_for(boost::chrono::milliseconds(2000));
    throw AIPException(AIP_CONNECTION_INCOMPATIBLE,__FILE__,__LINE__,"Hello from AIPException");
    std::cout<< "It is working";
    return 0;
}