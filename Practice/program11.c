/* 
    Algorithm
    START
        Accept number as no
        If no is completely divisible by 2 
            print even
        Otherwise 
            Print Odd
    STOP

    START
        Accept number as no
        Divide no by 2 
        if remainder is 0 
            then print as even
        Otherwise 
            print as Odd
    STOP
*/

# include <stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}



