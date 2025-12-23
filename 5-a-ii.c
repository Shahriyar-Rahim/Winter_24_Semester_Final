// sort an pay using bubble sort
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = (int *)calloc(5, sizeof(int));

    p[0] = 50, p[1] = 40, p[2] = 30, p[3] = 10, p[4] = 20;

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (p[j] > p[j + 1]) {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("Sorted pay: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}