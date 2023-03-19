#include <iostream>

class TestEnviroment {
    public:
        TestEnviroment() {
            std::cout << "TestEnviroment constructor called with dim" << std::endl;
        };

        double sample() {
            return 69.420;
        }
};


