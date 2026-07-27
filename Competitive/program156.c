# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

UINT ChkBit(UINT iNo, UINT iPose)
{
    UINT iMask = 0x1;
    UINT iAns = 0;

    iMask = iMask << (iPose - 1);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        return true;
    }
    return false;
   
}

int main()
{
    UINT iValue = 0;
    UINT iPose = 0;
    UINT iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    printf("Enter the position:\n");
    scanf("%d", &iPose);

    iRet = ChkBit(iValue, iPose);

    if(iRet == true)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is off");
    }
    
    return 0;

}
