#include<stdio.h>

typedef int BooL;
# define TRUE 1
# define FALSE 0

BooL Check(int iNo1)
{
    if ((iNo1 % 5)== 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    int iValue = 0;
    BooL bRet = FALSE;

    printf("Enter the number:");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divide by 5");
    }
    else
    {
        printf("Not Divide by 5");
    }

    return 0;
}