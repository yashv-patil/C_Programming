# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

// Off 7th bit if on
UINT OffBit(UINT iNo)
{
    UINT iMask = 0x40;              
    UINT iAns = 0;
    
    iAns = iNo & (~iMask);

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = OffBit(iValue);

    printf("Changed Number is : %d",iRet);

    
    return 0;

}
