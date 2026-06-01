# include <stdio.h>

int CheckEvenOdd(int iNO)
{
    int iRemainder = 0;

    iRemainder = iNO % 2;

    return iRemainder;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number to check whether is it Even or Odd:");
    scanf("%d", &iValue);

    iRet = CheckEvenOdd(iValue);                           // Function call

    if(iRet == 0)
    {
        printf("%d is Even \n",iValue);
    }
    else
    {
        printf("%d is odd \n",iValue);
    }

    return 0;
}



