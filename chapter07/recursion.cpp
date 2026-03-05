#include <iostream>


using namespace std;


void div_two(double value);


int main(int argc, char **argv){

    div_two(1024.0);    //call the recursive function
    return 0;
}


void div_two(double value){

    cout << "Entering val = " << value << endl;
    if(value > 2.0){
        div_two(value / 2);     //function calls itself
    }else{
        cout << "--------------------------" << endl;
    }

    cout << "Leaving val = " << value << endl;
}