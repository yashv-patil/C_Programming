#include <stdio.h>
#include <string.h>

void StrCopySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the String:-\n");
    scanf("%[^'\n\']s",Arr);

    StrCopySmall(Arr,Brr);

    printf("%s", Brr);
    
    return 0;
}