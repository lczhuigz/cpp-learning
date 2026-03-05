#include <iostream>
#include <vector>
#include <string>


using namespace std;


int main(int argc, char **argv)
{
    vector<string> msg {"Hello", "C++", "World", "!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    
    return 0;
}