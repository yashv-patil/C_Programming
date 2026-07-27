#include<stdio.h>

#define TRUE 1
#define FAlSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iLastDigit = 0;

    while (iNo != 0)
    {
        iLastDigit = iNo % 10;

        if (iLastDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
        
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FAlSE;


    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("In contain Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}