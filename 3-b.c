// input char and print color name based on char (eg r or R is red)
#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'r' || ch == 'R') {
        printf("Red\n");
    } else if (ch == 'b' || ch == 'B') {
        printf("Blue\n");
    } else if (ch == 'g' || ch == 'G') {
        printf("Green\n");
    } else {
        printf("Invalid input\n");
    }
    return 0;

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (tolower(ch) == 'r') {
        printf("Red\n");
    } else if (tolower(ch) == 'b') {
        printf("Blue\n");
    } else if (tolower(ch) == 'g') {
        printf("Green\n");
    } else {
        printf("Black\n");
    }

    return 0;
}

// now use switch case function to perform this
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (tolower(ch)) {
    case 'r':
        printf("Red\n");
        break;
    case 'b':
        printf("Blue\n");
        break;
    case 'g':
        printf("Green\n");
        break;
    default:
        printf("Black\n");
        break;
    }
    return 0;
}