//Write a program in C to Concatenate Two Strings Manually.


//this code didnt count any white space

/*#include <stdio.h>

int main(){

    char str1[100], str2[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int i, j;
    for(i = 0; str1[i] != '\0'; i++); // counting length of albert; i = 6

    for (int j = 0; str2[j] != '\0';i++,j++) // now i = 6 and it will increment with j;
    {
        str1[i] = str2[j]; 
    }

    str1[i] = '\0';

    printf("%s", str1);

    return 0;
}*/

// this code will count white spaces

#include<stdio.h>

int main(){

    char str1[100];
    char str2[100];

    fgets(str1, sizeof(str1), stdin); // 'a' 'l' 'b' 'e' 'r' 't' ' ' '\n' '\0'
    fgets(str2, sizeof(str2), stdin); // 's' 'm' 'i' 't' 'h' '\n' '\0'

    int i, j;
//for string 1 albert
    int len1;
    for ( len1 = 0; str1[len1] != '\0'; len1++) 
    {
        /*
        'a' = 0
        'l' = 1
        'b' = 2
        'e' = 3
        'r' = 4
        't' = 5 
        ' ' = 6
        '\n' = 7
        and count extra post increment = 8
        */
    }
    
    if (str1[len1 - 1] == '\n') //means str[8 - 1] == '\n'
    {
        str1[len1 - 1] = '\0';
        len1--; //removing '\n' and inserting '\0'
    }

//for string 2 smith
    int len2;
    for (len2 = 0; str2[len2] != '\0'; len2++) 
    {
        /*
        's' = 0
        'm' = 1
        'i' = 2
        't' = 3
        'h' = 4
        \n' = 5
        and count extra post increment = 6
        */
    }
    
    if (str2[len2 - 1] == '\n') //means str[6 - 1] == '\n'
    {
        str2[len2 - 1] = '\0'; 
        len2--;//removing '\n' and inserting '\0'
    }
    
    for (i = len1, j = 0; str2[j] != '\0'; i++,j++)
    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';
    printf("%s", str1);

    return 0;
    
}