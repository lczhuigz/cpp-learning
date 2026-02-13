#include <iostream>
#include <cstring>


using namespace std;


class Student{
    private:
        char name[6];
        int born;
        bool male;

    public:

        Student(){
            name[0] = '\0';
            born = 0;
            male = true;
            cout << "Constructor: Person()" << endl;
        }

        Student(const char * initName) : born(0) , male(false){
            setName(initName);
            cout << "Constructor: Person(const char *)" << endl;
        }

        Student(const char * initName , int initBorn , bool isMale){
            setName(initName);
            born = initBorn;
            male = isMale;
            cout << "Constructor: Person(const char , int , bool)" << endl;
        }

        void setName(const char * s){
            if(s == NULL){
                std::cerr << "The input is NULL." << std::endl;
                return;
            }
            size_t len = sizeof(name) - 1;
            strncpy(name, s, len);
            name[len] = '\0';
        }

        void setBorn(int b){
            if(b >= 1990 && b <= 2020){
                born = b;
            }else{
                std::cerr << "The input b is " << b << ", and should be in [1990, 2020]." << endl;
            }
        }

        void setGender(bool isMale);
        void printinfo();

};


void Student::setGender(bool isMale){
    male = isMale;
}

void Student::printinfo(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Born in " << born << std::endl;
    std::cout << "Gender: " << (male ? "Male" : "Female") << std::endl;
}

int main(int argc, char ** argv){

    Student duan;
    duan.printinfo();

    duan.setName("duan");
    duan.setBorn(2005);
    duan.setGender(true);
    duan.printinfo();

    Student fang("fang");
    fang.printinfo();

    Student tang = Student("TangHang", 2005, false);
    tang.printinfo();

    Student * xiang = new Student("xiang", 2004, true);
    xiang -> printinfo();
    delete xiang;

    Student * s = new Student();
    //Student *s = new Student; //the same
    s -> printinfo();
    delete s;

    
    return 0;
}