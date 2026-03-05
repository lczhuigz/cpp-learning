#include <iostream>


using namespace std;


int main(int argc, char **argv)
{
    int num = 10;
    int * p = &num;
    int ** pp = &p;
    *(*pp) = 20;

    cout << "num = " << num << endl;


    return 0;
}