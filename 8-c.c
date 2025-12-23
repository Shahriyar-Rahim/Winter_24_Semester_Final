#include <stdio.h>

int main() {
    FILE *input = fopen("in.txt", "r");
    FILE *output = fopen("out.txt", "w");

    if (input == NULL || output == NULL) {
        printf("File error\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(input)) != EOF) {
        fputc(ch, output);
        putchar(ch);
    }

    fclose(input);
    fclose(output);
    return 0;
}
