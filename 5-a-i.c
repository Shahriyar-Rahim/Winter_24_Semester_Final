#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;

    p = (int *)calloc(5, sizeof(int));

    p[0] = 50, p[1] = 40, p[2] = 30, p[3] = 10, p[4] = 20;
   
    free(p);
    return 0;
}