#include <stdio.h>

union StudentInfo{
    long ID;
    char name[20];
    char gender;
    double CGPA;
};

int main(){
    union StudentInfo student1;

    printf("The size of ID is %d bytes\n", sizeof(student1.ID));
    printf("The size of name is %d bytes\n", sizeof(student1.name));
    printf("The size of gender is %d bytes\n", sizeof(student1.gender));
    printf("The size of CGPA is %d bytes\n", sizeof(student1.CGPA));
    printf("The size of the union is %d bytes\n", sizeof(union StudentInfo));

    return 0;
}