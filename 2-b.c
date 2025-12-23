#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isalpha(ch)){
        int toLower = tolower(ch);
    int isVowel = (toLower == 'a' || toLower == 'e' || toLower == 'i' || toLower == 'o' || toLower == 'u');

    if (isVowel){
        if(isupper(ch)) printf("Vowel in capital letter\n");
        else printf("Vowel in small letter\n");
    }
    else{
        if(isupper(ch)) printf("Consonant in capital letter\n");
        else printf("Consonant in small letter\n");
    }
    }
    else{
        printf("Invalid input\n");
    }

    return 0;
}