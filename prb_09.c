// Write a C program to copy  one string to another string without using library function..
#include <stdio.h>

int main(){

    char destination[100], source[100];

    int descount = 0, soucount = 0;
    scanf("%s", destination);
    scanf("%s", source);

    int i;

        for (i = 0; source[i] != '\0'; i++)
        {
            destination[i] = source[i];
        }

        destination[i] = '\0';
   
    printf("%s", destination);
  
    return 0;
}