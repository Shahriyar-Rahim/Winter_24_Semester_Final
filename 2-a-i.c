// using temp variable
#include <stdio.h>

int main(){
    int busket_10 = 20, busket_20 = 10;
    
    int temp = busket_10;
    busket_10 = busket_20;
    busket_20 = temp;

    printf("Busket 10: %d\n", busket_10);
    printf("Busket 20: %d\n", busket_20);
    return 0;
}