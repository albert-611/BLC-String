//Write a program in C to extract a substring from a given string.
#include <stdio.h>

int main(){

    int i = 0;
    char str[100], substr[100];
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        
    }
    
    int start, length;

    printf("Enter starting Index: ");
    scanf("%d", &start);
    printf("Enter length: ");
    scanf("%d", &length);

    for (i = 0 ;i < length && str[start + i] ; i++)
    {
        substr[i] = str[start + i];
    }
    
    substr[i] = '\0';

    printf("%s", substr);

    return 0;

}