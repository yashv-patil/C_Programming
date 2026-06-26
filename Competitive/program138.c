#include <stdio.h>
#include <string.h>

void StrCopyCap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
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

    StrCopyCap(Arr,Brr);

    printf("%s", Brr);
    
    return 0;
}