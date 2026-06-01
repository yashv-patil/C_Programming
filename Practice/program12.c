# include <stdio.h>

void CheckEvenOdd(int iNO)
{
    int iRemainder = 0;

    iRemainder = iNO % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);                           // Function call

    return 0;
}



