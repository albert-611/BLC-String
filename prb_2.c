//Write a program in C to separate the individual characters from a string.

#include <stdio.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == '\n')
        {
            break;
        }

        for (int j = 0; j < 1; j++) {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
