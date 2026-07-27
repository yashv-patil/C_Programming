# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

// 5, 18 Bit check 
bool ChkBit(UINT iNo)
{
    UINT iMask2 = 0x10;         // 5 th bit on
    UINT iMask1 = 0x20000;      // 18 th bit on
    UINT iMask = 0;
    UINT iAns = 0;

    iMask = iMask1 | iMask2 ;

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
        printf("5, 18 Bit is On");
    }
    else
    {
        printf("5, 18 bit is off");
    }    
    
    return 0;

}