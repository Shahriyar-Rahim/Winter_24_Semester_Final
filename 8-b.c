#include <stdio.h>
#include <string.h>

int main(){
    //palindrome check code for a string inputted by the user

    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0, j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not a palindrome");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome");

    return 0;
}