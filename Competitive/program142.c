#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str == ch)
        {
            iCnt ++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[60];
    char cValue = '\0';
    int iRet = 0;
    
    printf("Enter the String:\n");
    scanf(" %[^\n]", Arr);

    printf("Enter the Character:\n");
    scanf(" %c", &cValue);
    
    iRet = CountChar(Arr, cValue);

    printf("Count of Charactor are : %d",iRet);
    
    return 0;
}