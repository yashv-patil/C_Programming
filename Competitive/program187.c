#include<stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;
    int iLast = 0;

    if(iNo == 0)
    {
        return iSum;
    }

    iLast = iNo % 10;

    iSum = iSum + iLast;

    iNo = iNo / 10;

    return Summation(iNo);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = Summation(iValue);

    printf("Summation is : %d \n", iRet);

    return 0;
}

