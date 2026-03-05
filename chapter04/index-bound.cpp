#include <iostream>


using namespace std;


int main(int argc,char *argv[]){

    int num_array[5];

    for(int index = -1; index <= 5; index ++){      //out of bounds

        num_array[index] = index * index;

    }

    for(int index = -1; index <= 5; index ++){       //out of bounds

        cout << "num_array[" << index << "] = " << num_array[index] << endl;

    }

    
    return 0;
}