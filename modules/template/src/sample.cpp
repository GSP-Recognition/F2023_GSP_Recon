#include <sample.hpp>

#include <iostream>

namespace namespace_name {
    sample::sample(){
        std::cout << "Sample Was Constructed" << std::endl;
    }

    void sample::helloWorld(){
        std::cout << "Hello World" << std::endl;
    }

    sample::~sample(){
        std::cout << "Sample Was Destructed" << std::endl;
    }
}
