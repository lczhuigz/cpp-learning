#include <iostream>


#define PI 2.14+1.0


using namespace std;


int main(int argc,char **argv)
{
    double len = 2 * PI * 3;
    cout << "len = " << len << endl; //it will output 7.28, nor 18.84

    
    return 0;
}