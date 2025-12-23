#include <stdio.h>

int main(){
    int i;
    scanf("%d", &i);

    if(++i)
    {
        int i = 36;
        int x = i--;
        printf("%d\n", x);
    }

    printf("%d\n", i);

    return 0;
}