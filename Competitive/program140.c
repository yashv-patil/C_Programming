#include <stdio.h>

void StrCopyCap(char *src, char *dest)
{
    while (*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

int main()
{
    char Arr[60];
    char Brr[30];

    scanf(" %[^\n]", Arr);
    scanf(" %[^\n]", Brr);

    StrCopyCap(Arr, Brr);

    printf("%s", Arr);

    return 0;
}