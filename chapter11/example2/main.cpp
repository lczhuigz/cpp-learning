#include <iostream>
#include "mystring.hpp"


using namespace std;


int main(int argc, char ** argv){

    {
        MyString str1(9, "YiChang");
        cout << "str1: " << str1 << endl;

        MyString str2 = str1; 
        cout << "str2: " << str2 << endl;

        MyString str3;
        cout << "str3: " << str3 << endl;
        str3 = str1;
        cout << "str3: " << str3 << endl;
    }
    cout << "end of main()" << endl; // it can be printed out


    return 0;
}