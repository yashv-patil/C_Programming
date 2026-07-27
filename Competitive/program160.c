# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;
    UINT iAns = 0;

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

    printf("Changed Number is : %d", iRet);

    
    return 0;

}
