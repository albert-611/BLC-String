// Write a program in C to find maximum occurring character in a string. 

#include <stdio.h>

int main(){

    char str[100];
    int freq[256] = {0};
    fgets(str, sizeof(str), stdin);

    int i;

    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        
    }

    for ( i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    int Maxoccur = 0;
    char maxChar = '\0';

    for(i = 0; i < 256; i++){

        if (Maxoccur < freq[i])
        {
            Maxoccur = freq[i];
            maxChar = i;
        }
        
    }

    printf("%c is %d times", maxChar, Maxoccur);
    
    return 0;
}