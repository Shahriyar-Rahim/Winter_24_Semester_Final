#include <stdio.h>
#include <string.h>


struct StudentInfo{
    long ID;
    char name[20];
    char gender;
    double CGPA;  
};

int main(){
    struct StudentInfo student2;

    student2.ID = 12345;
    strcpy(student2.name, "John Doe");
    student2.gender = 'M';
    student2.CGPA = 3.9;

    //print all values using for loop
    for(int i = 0; i < sizeof(struct StudentInfo); i++){
        printf("%c ", ((char*)&student2)[i]);
    }

    //print all values using pointer
    printf("ID: %ld\n", student2.ID);
    printf("Name: %s\n", student2.name);
    printf("Gender: %c\n", student2.gender);
    printf("CGPA: %.2lf\n", student2.CGPA);

    return 0;
}