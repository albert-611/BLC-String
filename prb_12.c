// Write a program in C to compare two strings without using string library functions.

#include <stdio.h>
int main(){

    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int i, x = 0;

    for ( i = 0; str1[i] != '\0' ; i++)
    {
        if ((str1[i] != str2[i]) )
        {
             x = str1[i] - str2[i];
            break;
        }

        else{
             x = str1[i] - str2[i];
        }
        
    }

    printf("Compare = %d", x);

    return 0;
}