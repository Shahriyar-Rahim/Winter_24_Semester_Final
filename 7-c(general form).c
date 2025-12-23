#include <stdio.h>
#include <stdlib.h>

int largest(int *x, int n);

int largest(int *x, int n)
{
    int max = x[0];
    for(int i = 1; i < n; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }

    return max;
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *p;

    p = (int *)calloc(n, sizeof(int)); 

    if (p == NULL)
    {
        printf("Memory error\n");
        return 1;
    }

    printf("Enter the elements: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Largest element: %d", largest(p, n));

    free(p);

    return 0;
}