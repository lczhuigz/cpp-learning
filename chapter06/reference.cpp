#include <iostream>


using namespace std;


int main(int argc, char **argv){

    int num = 0;
    int &num_ref = num; //equivalent to a variable alias
    cout << "num = " << num << endl;

    num_ref = 10;
    cout << "num = " << num << endl;

    return 0;
}