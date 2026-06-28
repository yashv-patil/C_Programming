# include <stdio.h>
#include<stdbool.h> 

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

// ON bit 7, 8, 9
bool ChkBit(UINT iNo)
{

    UINT iMask1 = 0x1;              
    UINT iMask2 = 0x80000000;    
    UINT iMask = 0;
    UINT iAns = 0;

    iMask = iMask1 | iMask2;
    
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
        printf("lats and first Bit is On");
    }
    else
    {
        printf("last and firts Bit is off");
    }    
    
    return 0;

}