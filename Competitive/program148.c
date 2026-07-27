# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

// ON bit 7, 15, 21, 28
bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0x40;         
    UINT iMask2 = 0x4000;      
    UINT iMask3 = 0x100000;
    UINT iMask4 = 0x8000000;
    UINT iMask = 0;
    UINT iAns = 0;

    iMask = iMask1 | iMask2 | iMask3 | iMask4 ;
    
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
        printf("7, 15, 21, 28 Bit is On");
    }
    else
    {
        printf("7, 15, 21, 28 bit is off");
    }    
    
    return 0;

}