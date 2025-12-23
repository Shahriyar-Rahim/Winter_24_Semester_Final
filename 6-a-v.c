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
    
    student1.ID = 12345;
    strcpy(student1.name, "John Doe");
    student1.gender = 'M';
    student1.CGPA = 3.9;

    student2->ID = 54321;
    strcpy(student2->name, "Jane Doe");
    student2->gender = 'F';
    student2->CGPA = 4.0;

    printf("ID: %ld\n", student1.ID);
    printf("Name: %s\n", student1.name);
    printf("Gender: %c\n", student1.gender);
    printf("CGPA: %.2lf\n", student1.CGPA);
    printf("\n");
    printf("ID: %ld\n", student2->ID);
    printf("Name: %s\n", student2->name);
    printf("Gender: %c\n", student2->gender);
    printf("CGPA: %.2lf\n", student2->CGPA);

    return 0;
}