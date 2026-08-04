#include<stdio.h>

int Factorial(int iNo)
{
    static int i = 1;
    static int iFact = 1;

    if(i > iNo)
    {
        return iFact;
    }

    iFact = iFact * i;
    i++;

    Factorial(iNo);

    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial os Number is : %d\n", iRet);

    return 0;
}