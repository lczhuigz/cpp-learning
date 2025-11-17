#include <iostream>
#include <typeinfo>


using namespace std;


template<typename T>
T sum(T x, T y){
    cout << "The input type is " << typeid(T).name() << endl;
    return (x + y);
}


//Explicity instantiate(实例化)
template double sum<double>(double, double);


int main(int argc, char **argv){

    auto val = sum(4.1, 5.2);
    cout << val << endl;


    return 0;
}


/*tips:在本例中模板采用显式实例化*/