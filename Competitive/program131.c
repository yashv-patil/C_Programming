#include <stdio.h>

void strlwrx(char *ch)
{
    while (*ch != 0)
    {
        if(*ch >= 'A' && *ch <= 'Z')
        {
            *ch = *ch +  32;
        }
        ch++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the String:-\n");
    scanf("%[^'\n\']s",Arr);

    strlwrx(Arr);

    printf("Modified String is: %s",Arr);
    
    return 0;
}