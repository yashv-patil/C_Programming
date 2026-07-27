# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

// toggle 7th and 10th bit
UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0x40;    
    UINT iMask2 = 0x200;
    UINT iMask = 0;              
    UINT iAns = 0;

    iMask = iMask1 | iMask2;

    iAns = iNo ^ iMask;
    
    return iAns;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Toggle Number is : %d",iRet);

    
    return 0;

}
