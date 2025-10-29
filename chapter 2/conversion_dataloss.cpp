#include <iostream>


using namespace std;


int main(int argc,char **argv){
    int num_int = 0x7ABCDEF0;
    float num_int_float = num_int;
    int num_int1 = (int )num_int_float;

    cout << hex << "original int: " << num_int << endl;
    cout << hex << "converted float: " << num_int1 << endl;

    return 0;
}