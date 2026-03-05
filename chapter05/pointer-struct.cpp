#include <iostream>
#include <cstring>


using namespace std;


struct Student{
    char name[5];
    int born;
    bool male;
};


int main(int argc, char **argv){
    
    Student stu = {"Duan", 2005, true};
    Student * pStu = &stu;

    cout << stu.name << " was born in " << stu.born << 
        ". Gender: " << (stu.male ? "Male" : "Female") << endl;

    strncpy(pStu->name, "Tang", 5);
    pStu -> born = 2001;
    (*pStu).born = 2005;
    pStu -> male = false;

    cout << stu.name << " was born in " << stu.born << 
        ". Gender: " << (stu.male ? "Male" : "Female") << endl;

    printf("Address of stu: %p\n",pStu);          //C style
    cout << "Address of stu: " << pStu << endl;
    cout << "Address of stu: " << &stu << endl;
    cout << "Address of member name: " << &(pStu -> name) << endl;
    cout << "Address of member born: " << &(pStu -> born) << endl;
    cout << "Address of member male: " << &(pStu -> male) << endl;

    cout << "sizeof(pStu) = " << sizeof(pStu) << endl;


    return 0;
}