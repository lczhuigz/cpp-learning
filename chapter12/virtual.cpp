#include <iostream>
#include <cstring>


using namespace std;


class Person{

    public:

        string name;

        Person(string n): name(n){}

        void print(){
            cout << "Name: " << name << endl;
        }
};

class Person2{

    public:

        string name;

        Person2(string n): name(n){}

        virtual void print() = 0;
};

class Student: public Person{
    
    public:

        string id;

        Student(string n, string i): Person(n), id(i){}

        void print(){
            cout << "Name: " << name;
            cout << ". ID: " << id << endl;
        }
};

void printObjectInfo(Person &p){

    p.print();
}


int main(int argc, char ** argv){

    {
        Student stu("Duan", "2005");
        printObjectInfo(stu);
    }

    {
        Person *p = new Student("Tang", "2005");
        p -> print();   // if print() is not a virtual function, different output
        delete p;   // if its destructor is not virtual
    }

    // {
    //     // if you want to call a function in the base class
    //     Student stu("Fang", "2004");
    //     stu.Person::print();

    //     Person *p = new Student("Qi", "2003");
    //     p -> Person::print();
    //     delete p;
    // }


    return 0;
}