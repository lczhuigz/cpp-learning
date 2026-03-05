#include <iostream>


using namespace std;


int sum(int x, int y){
    cout << "sum(int, int) is called." << endl;
    return (x + y);
}

float sum(float x, float y){
    cout << "sum(float, float) is called." << endl;
    return (x + y);
}

double sum(double x, double y){
    cout << "sum(double, double) is called." << endl;
    return (x + y);
}

// //Is the following definition correct?
// double sum(int x, int y){
//     cout << "sum(int, int) is called." << endl;
//     return (x + y);
// }


int main(int argc, char **argv){

    cout << "sum = " << sum(1, 2) << endl;
    cout << "sum = " << sum(1.1f, 2.2f) << endl;
    cout << "sum = " << sum(1.1, 2.2) << endl;

    // //which function will be called?
    // cout << "sum = " << sum(1, 2.2) << endl;

    
    return 0;
}


/*tips:函数的重载是通过搜索参数函数参数列表实现的，即ADL(Argument-dependent lookup)*/