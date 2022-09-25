#include <iostream>
#include <stdio.h>
#include "mavsdk/mavsdk.h"

int main(int argc, char** argv) {
    std::cout << "Hello World!" << " Created!" << std::endl;
    mavsdk::Mavsdk mavsdk;

    mavsdk::ConnectionResult connection_result = mavsdk.add_any_connection("localhost");

    if (connection_result != mavsdk::ConnectionResult::Success) {
        std::cerr << "Connection failed: " << connection_result << '\n';
        return 1;
    }

    printf("Hello There!");

    std::cin.get();

    return 0;
}
