#include <iostream>


using namespace std;


inline float max_function(float a, float b){
    if (a > b)
    {
        return a;
    }else{
        return b;
    }
}


//#define MACX_MACRO(a, b) a>b ? a : b
#define MACX_MACRO(a, b) (a)>(b) ? (a) : (b)


int main(){

    int num1 = 20;
    int num2 = 30;
    int maxv = max_function(num1, num2);
    cout << maxv << endl;

    maxv = MACX_MACRO(num1, num2);
    cout << maxv << endl;

    maxv = MACX_MACRO(num1++, num2++);
    cout << maxv << endl;

    num1 = 0xAB09;
    num2 = 0xEF08;
    maxv = MACX_MACRO(num1&0xFF, num2&0xFF);
    cout << maxv << endl;

    
    return 0;
}