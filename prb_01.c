//Write a program in C to find the length of a string without using library function.
#include <stdio.h>

int main(){

    char str[100];
    scanf("%s", str);

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }

    printf("%d", count);

    return 0;

}