#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0x00000001;
    UINT iMask = 0;
    UINT iAns = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

    iAns = iNo & iMask;

    if(iAns != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    UINT iPos1 = 0;
    UINT iPos2 = 0;
    bool bRet = false;

    printf("Enter the Number : ");
    scanf("%u", &iValue);

    printf("Enter First Position : ");
    scanf("%u", &iPos1);

    printf("Enter Second Position : ");
    scanf("%u", &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}