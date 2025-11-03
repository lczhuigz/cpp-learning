#include <iostream>
#include <cstring>


using namespace std;


int main(int argc,char **argv){
    std::string str1 = "Hello";
    std::string str2 = "World!";
    std::string result = str1 + "," + str2;

    cout << "result = " + result << endl;


    return 0;
}