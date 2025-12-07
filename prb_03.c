//Write a program in C to print individual characters of string in reverse order.

#include <stdio.h>
int main(){

    char str[100];

    scanf("%s", str);
    int len = 0;

    for (len; str[len] != '\0'; )
    {
        len++;
    }
    
    for ( int i = len ; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}