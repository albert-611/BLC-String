#include <stdio.h>

int main(){

    char str[100];
    fgets(str,sizeof(str), stdin);

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
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            
        }

        else if(str[i] == ' '){

            str[i] = ' ';
        }
        else{
            str[i] = str[i] + 32;
        }
        
    }

    printf("%s",str);
    
    return 0;
}