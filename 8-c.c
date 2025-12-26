#include <stdio.h>

int main() {
    FILE *input = fopen("in.txt", "r");
    FILE *output = fopen("out.txt", "w");

    if (input == NULL || output == NULL) {
        printf("File error\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(input)) != EOF) {  //hello\0
        fputc(ch, output);
        putchar(ch);
    }

    fclose(input);
    fclose(output);
    return 0;
}

#include <stdio.h>

int main() {
    FILE *input = fopen("in.txt", "r");

    char ch;
    while ((ch = fgetc(input)) != EOF) {  //hello\0
        putchar(ch);
    }

    fclose(input);
    return 0;
}

int main(){
    FILE *input = fopen("in.txt", "r");

    char ch[80];
    fgets(ch, 80, input);

    printf("%s", ch);

    fclose(input);
    return 0;
}