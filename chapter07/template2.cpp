#include <iostream>
#include <typeinfo>


using namespace std;


template<typename T>
T sum(T x, T y){
    cout << "The input type is " << typeid(T).name() << endl;
    return (x + y);
}


int main(int argc, char **argv){
    //Implicitly instantiates product<int>(int, int)
    cout << "sum = " << sum<int>(2.2f, 3.0f) << endl;
    //Implicitly instantiates product<float>(float, float)
    cout << "sum = " << sum(2.2f, 3.0f) << endl;


    return 0;
}


/*tips:在本例中模板采用隐式实例化*/