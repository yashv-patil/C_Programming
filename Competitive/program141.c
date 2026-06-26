#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
    
}

int main()
{
    char Arr[60];
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter the String:\n");
    scanf(" %[^\n]", Arr);

    printf("Enter the Character:\n");
    scanf(" %c", &cValue);

    
    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Charactor Present");
    }
    else
    {
        printf("Charactor is not Present");
    }

    return 0;
}