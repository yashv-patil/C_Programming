#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    // BOOL bRet = FALSE;
    if (iNo % 2 == 0)
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
    BOOL bRet = FALSE;

    printf("Enter Number:");
    scanf("%d", &iValue);
    
    bRet = ChkEven(iValue);

    if (bRet == 1)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}