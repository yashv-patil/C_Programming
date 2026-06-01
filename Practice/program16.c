#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNO)
{
    if ((iNO % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number to check whether is it Even or Odd:");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);                           // Function call

    if(bRet == true)
    {
        printf("%d is Even \n",iValue);
    }
    else
    {
        printf("%d is odd \n",iValue);
    }

    return 0;
}



