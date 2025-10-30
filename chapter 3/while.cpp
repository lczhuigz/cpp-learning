#include <iostream>


using namespace std;


int main(int argc, char **argv){

    // size_t num = 10;

    // while(num >= 0){
    //     cout << "num = " << num << endl;
    //     num --;
    // }

    bool flag = true;

    int count = 0;
    
    while(flag = true){
        cout << "count = " << count ++ << endl;
        if(count == 10){
            flag = false;
        }
    }

    return 0;
}