#include <stdio.h>
#include <math.h>

int main(){
    float w, h;

    printf("Enter weight and height: ");
    scanf("%f %f", &w, &h);

    float bmi = w / pow(h, 2);

    printf("BMI: %.2f", bmi);

    return 0;
}