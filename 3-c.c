// fibonacci series where n is the postive integer and less than 100
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

// now use pointer to do this
#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int *p1 = &a, *p2 = &b, *p3 = &c;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", *p1);
        *p3 = *p1 + *p2;
        *p1 = *p2;
        *p2 = *p3;
    }
    return 0;
}

// now use function for this
#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

// use pointer and function for this
#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", *p1);
        *p3 = *p1 + *p2;
        *p1 = *p2;
        *p2 = *p3;
    }
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

// use recursion for this
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", fibonacci(i));
    }
    return 0;
}

