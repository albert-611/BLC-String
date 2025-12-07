// Write a program in C to count total number of alphabets, digits and special characters in a string. 

#include <stdio.h>

int main(){

    int alpha = 0, num = 0, chrc = 0;

    char str1[100];

    fgets(str1, sizeof(str1), stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
        } 
    }

     for (int i = 0; str1[i] != '\0'; i++)
    {
        if ( (str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z'))
        {
            alpha++;
        }
        
        else if (str1[i] >= '0' && str1[i] <= '9')
        {
            num++;
        }

        else{
            chrc++;
        }
        
    }
    

    printf("Alpha = %d\nNumber = %d\ncharacter = %d\n", alpha, num, chrc);
    

}