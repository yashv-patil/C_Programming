#include <stdio.h>
#include <string.h>

void StrCopy(char *src, char *dest, int iCnt)
{
    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src ++;
        dest++;
        iCnt--;
    }  
    *dest = '\0';
    
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the String:-\n");
    scanf("%[^'\n\']s",Arr);

    StrCopy(Arr,Brr,10);

    printf("%s", Brr);
    
    return 0;
}