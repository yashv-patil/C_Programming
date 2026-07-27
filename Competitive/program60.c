#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0;
    int iLastDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iLastDigit = iNo % 10;

        if(iLastDigit < 6)
        {
            iCnt ++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("Count of less than 6 numbers is: %d",iRet);

    return 0;
}