# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

// 15 Bit check 
bool ChkBit(UINT iNo)
{
    UINT iMask = 0x4000;
    UINT iAns = 0;

    iAns = iNo & iMask;

    if (iAns == iMask)
    {
        return TRUE;
    }
    return FALSE;
    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = ChkBit(iValue);

    if(iRet == TRUE)
    {
        printf("15 Bit is On");
    }
    else
    {
        printf("15th bit is off");
    }    
    
    return 0;

}