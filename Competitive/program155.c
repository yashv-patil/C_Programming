# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

// On firts 4 bit 
UINT OnBit(UINT iNo)
{
    UINT iMask1 = 0x1;    
    UINT iMask2 = 0x2;
    UINT iMask3 = 0x4;
    UINT iMask4 = 0x8;
    UINT iMask = 0;              
    UINT iAns = 0;

    iMask = iMask1 | iMask2 | iMask3 | iMask4;

    iAns = iNo | iMask;

    return iAns;

}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = OnBit(iValue);

    printf("Toggle Number is : %d",iRet);

    
    return 0;

}
