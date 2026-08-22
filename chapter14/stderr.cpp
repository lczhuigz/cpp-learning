#include <iostream>


using namespace std;


void div2(int n){

    if(n % 2 != 0){

        cerr << "Error: The input must be an even number. Here it's " << n << "." << endl;

    }else{

        int result = n / 2;
        cout << "Info: The result is " << result << endl;
    }
}


int main(int argc, char ** argv){

    for(int n = -5; n <= 5; n ++){

        div2(n);
    }


    return 0;
}