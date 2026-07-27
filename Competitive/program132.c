#include <stdio.h>

void struwrx(char *ch)
{
    while (*ch != 0)
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            *ch = *ch -  32;
        }
        ch++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the String:-\n");
    scanf("%[^'\n\']s",Arr);

    struwrx(Arr);

    printf("Modified String is: %s",Arr);
    
    return 0;
}