#include <iostream>


using namespace std;


float my_square(float value);


int main(int argc, char **argv){

    float value;
    cout << "Input a floating_point number." << endl;
    cin >> value;

    float result = my_square(value);

    if(result > 0){
        cout << "The square is " << result << "." << endl;
    }


    return 0;
}



float my_square(float value){

    float result = 0.0f;

    if(value >= 1.0f || value <= 0.0f){
        cerr << "The input is out of range." << endl;   //错误输出，没有缓冲区，用于错误信息和诊断.
        goto EXIT_ERROR;
    }

    result = value * value;

    return result;

    EXIT_ERROR:
        //do sth such as closing files here
    return 0.0f;
}