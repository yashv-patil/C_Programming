#include <stdio.h>

void DisplyDigit(char *ch)
{
    while (*ch != 0)
    {
        if(*ch >= '0' && *ch <= '9')
        {
            printf("%c",*ch);
        }
        ch++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the String:-\n");
    scanf("%[^'\n\']s",Arr);

    DisplyDigit(Arr);
    
    return 0;
}