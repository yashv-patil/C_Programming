# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPose)
{
    UINT iMask = 0x1;
    UINT iAns = 0;

    iMask = iMask << (iPose - 1);

    iAns = iNo | iMask;

    return iAns;
   
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

    iRet = OffBit(iValue, iPose);

    printf("Changed Number is : %d", iRet);

    
    return 0;

}
