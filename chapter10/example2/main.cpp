#include <iostream>
#include "time.hpp"


int main(int argc, char ** argv){

    MyTime t1(2, 40);
    std::cout << (t1 + 30).getTime() << std::endl;

    t1 += 30;   //opertor
    t1.operator+=(30);  //function

    std::cout << t1.getTime() << std::endl;

    std::cout << (t1 + "one hour").getTime() << std::endl;
    std::cout << (t1 + "two hour").getTime() << std::endl;


    return 0;
}