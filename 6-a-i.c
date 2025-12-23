#include <stdio.h>

struct StudentInfo{
    long ID;
    char name[20];
    char gender;
    double CGPA;
};

int main(){
    
    struct StudentInfo student1;

    printf("The size of ID is %d bytes\n", sizeof(student1.ID));
    printf("The size of name is %d bytes\n", sizeof(student1.name));
    printf("The size of gender is %d bytes\n", sizeof(student1.gender));
    printf("The size of CGPA is %d bytes\n", sizeof(student1.CGPA));
    printf("The size of the structure is %d bytes\n", sizeof(struct StudentInfo));

    return 0;
}