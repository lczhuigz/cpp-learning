#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// struct Student{
//     char name[5];
//     int born;
//     bool male;
// };

typedef struct _Student{
    char name[5];
    int born;
    bool male;
}Student;


int main(int argc,char **argv){

    // struct Student stu = {"Duan", 2005, true};  //初始化结构体
    Student stu;
    strcpy(stu.name, "Duan");
    stu.born = 2005;
    stu.male = true;

    printf("Student %s, born in %d, gender %s\n",
        stu.name, 
        stu.born, 
        stu.male ? "male" : "female");

    Student students[100];

    students[50].born = 2004;


    return 0;
}