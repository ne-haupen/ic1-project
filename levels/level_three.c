#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buffer[15];
    int pass= 0;

    printf("\n Enter your password : \n");
    gets(buffer);

    if(strcmp(buffer, "Pasword123"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
        printf ("\n Root privileges given to the user \n");
        return 0;
    }
    return 1;
    
}