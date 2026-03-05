#include <iostream>


using namespace std;


int main(int argc, char **argv)
{
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        sum += i;
        cout << "Line " << i << endl;
    }
    cout << "sum = "  << sum << endl;


    return 0;
}