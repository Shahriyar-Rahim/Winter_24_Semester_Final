#include <stdio.h>

int main(){
    int p [] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *x = p;

    printf("%d", x);
    printf("\n");
    printf("%d", (x+2));
    printf("\n");    
    printf("%d", *x);
    printf("\n");
    printf("%d", *p);
    printf("\n");
    printf("%d", (*x+2));
    printf("\n");
    printf("%d", *(x+5));
    printf("\n");
    printf("%d", p[5]);
    printf("\n");
    printf("%d", x[5]);
    return 0;
}