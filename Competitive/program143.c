#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;
    while (*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
        iIndex++;
        str++;
    }
    return -1;
    
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
    
    iRet = FirstChar(Arr, cValue);

    printf("First occurence index of Charactor is : %d",iRet);
    
    return 0;
}