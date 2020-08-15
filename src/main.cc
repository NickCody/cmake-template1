#include <iostream>
#include "cmake_config.h"

int main(int argc, char** argv) {
    std::cout << "NewProject Version " << NewProject_VERSION_MAJOR << "." << NewProject_VERSION_MINOR << std::endl;

    return EXIT_SUCCESS;
}