//Write a program in C to count the total number of words in a string.

#include <stdio.h>

int main(){

    char str[100];
    int count = 1;
    fgets(str,sizeof(str),stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }

        if (str[i] == ' ')
        {
            count ++;
        } 
    }

    printf("%d", count);
   
}