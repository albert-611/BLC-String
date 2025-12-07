//Write a program in C to Find the Frequency of Characters.

#include <stdio.h>

int main(){

    char str[100];
    int freq[256] ={0};

    fgets(str, sizeof(str), stdin);
 
    //line 13 to 20 is best practice for string chapter
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
        }
        
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    
    for (int i = 0; i < 256 ; i++)
    {
        if (freq[i] > 0)
        {
            printf("'%c' = %d\n", i, freq[i] );
        }
        
    }

    return 0;
   
}