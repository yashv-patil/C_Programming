#include <stdio.h>
#include <string.h>

void StrCopy(char *src, char *dest)
{
    while (*src != '\0')
    {
        *dest = *src;
        src ++;
        dest++;
    }  
    *dest = '\0';
    
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the String:-\n");
    scanf("%[^'\n\']s",Arr);

    StrCopy(Arr,Brr);

    printf("%s", Brr);
    
    return 0;
}