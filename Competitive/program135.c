#include <stdio.h>

int CountSpace(char *ch)
{
    int iCnt = 0;

    while (*ch != 0)
    {
        if (*ch == ' ')
        {
            iCnt++;
        }
        ch++;
    }

    return iCnt;
    
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String:-\n");
    scanf("%[^'\n\']s",Arr);

    iRet =  CountSpace(Arr);

    printf("Number of White Spaces in the String is %d",iRet);
    
    return 0;
}