#include <stdio.h>
#include <string.h>

struct StudentInfo{
    long ID;
    char name[20];
    char gender;
    double CGPA;
};
int main(){
    struct StudentInfo student1;
    struct StudentInfo *student2 = &student1;

    return 0;
}