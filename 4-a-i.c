#include <stdio.h>

int main(){
    int i;
    scanf("%d", &i);
    
    ++i;
    i = 15;

    printf("%d\n", i++);
    printf("%d", i);


    return 0;
}