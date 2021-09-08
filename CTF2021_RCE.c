#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];

    printf("Enter you name : ");
    gets(str);
    if(strcmp(str,"3agleEy3_1337")==0)
    {
        printf("Hello %s",str);
    }
    else
    {
        printf("Access Denied");
    }
    
}

