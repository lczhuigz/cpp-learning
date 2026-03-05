#include <iostream>
#include <cstring>


class Student{

    private:
        char name[5];
        int born;
        bool male;
    public:
        void setName(const char * s){
            strncpy(name, s, sizeof(name));
        }

        void setBorn(int b){
            born = b;
        }

        void setGender(bool isMale){
            male = isMale;
        }

        void outputInfo(void){
            std::cout << "Name: " << name << std::endl;
            std::cout << "Born in " << born << std::endl;
            std::cout << "Gender: " << (male ? "Male" : "Female") << std::endl;
        }
};



int main(int argc, char **argv){

    Student tang;
    tang.setName("Tang");
    tang.setBorn(2005);
    tang.setGender(false);
    //tang.born = 2005;   // You cannot access a private member
    tang.outputInfo();

    return 0;
}