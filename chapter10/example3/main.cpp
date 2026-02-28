#include <iostream>
#include "time.hpp"


int main(int argc, char **argv){

    MyTime t1(2, 40);
    std::cout << (30 + t1).getTime() << std::endl;

    std::cout << t1 << std::endl;
    std::cout << "Please input two integers:" << std::endl;
    std::cin >> t1;
    std::cout << t1 << std::endl;


    return 0;
}