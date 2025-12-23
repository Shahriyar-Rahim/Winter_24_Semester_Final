#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1. Hardcode the size (no user input)
    int n = 3; 

    // 2. Dynamic Memory Allocation
    int **matrix;
    matrix = (int **)malloc(n * sizeof(int *)); // Allocate array of pointers

    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n * sizeof(int)); // Allocate each row
    }

    // 3. Initialize with values automatically (1 to 9)
    int count = 1;
    printf("The Matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = count++;
            printf("%d ", matrix[i][j]); // Print to visualize
        }
        printf("\n");
    }

    // 4. Calculate Diagonal Sum
    // Optimization: We only need one loop. Diagonal elements are always matrix[i][i].
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("\nThe sum of the diagonal elements is: %d\n", sum);

    // 5. Free Memory
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}