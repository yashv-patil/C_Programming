#include <stdio.h>

int LastOcc(char *str, char ch)
{
    int iIndex = 0;
    int iLast = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iLast = iIndex;
        }

        iIndex++;
        str++;
    }

    return iLast;
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

    iRet = LastOcc(Arr, cValue);

    if(iRet != -1)
    {
        printf("Last occurrence index is : %d\n", iRet);
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}