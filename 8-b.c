#include <stdio.h>

int main() {
    char str[20];
    int i = 0, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // find length
    while (str[len] != '\0') {
        len++;
    }

    // palindrome check
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("Not a palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}
