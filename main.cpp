#include <iostream>
#include <string>
#include <thread>
#include <vector>

#include "enumserial.h"

int main() {
    EnumSerial enumSerial;

    std::vector<std::string> paths = enumSerial.enumSerialPort();

    if (paths.size() == 0) {
        std::cout << "failed to find serial port" << std::endl;
        return -1;
    }

    std::cout << "found serial devices:" << std::endl;
    for (size_t i = 0; i < paths.size(); i++) {
        std::string path = paths.at(i);
        std::cout << "  " << path << std::endl;
    }

    return 0;
}
