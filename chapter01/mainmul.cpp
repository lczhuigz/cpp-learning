#include <iostream>


using namespace std;


int mul(int a, int b);


int main(int argc, char **argv)
{
    int a = 0, b = 0;
    int result = 0;

    cout << "Pick two integers:";
    cin >> a;
    cin >> b;

    result = mul(a, b);

    cout << "The result is " << result << endl;


    return 0;
}


int mul(int a, int b)
{
    return a * b;
}