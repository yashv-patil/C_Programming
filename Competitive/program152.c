# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

// Off 7th and 10th bit if on
UINT OffBit(UINT iNo)
{
    UINT iMask1 = 0x40;  
    UINT iMask2 = 0x200;             
    UINT iAns = 0;
    
    iAns = iNo & (~(iMask1 | iMask2));

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
