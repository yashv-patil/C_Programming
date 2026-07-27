#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

UINT TaggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask = 0;
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | (1 << (iCnt - 1));
    }

    return (iNo ^ iMask);
  
}

int main()
{
    UINT iValue = 0;
    UINT iPos1 = 0;
    UINT iPos2 = 0;
    UINT iRet = false;

    printf("Enter the Number : ");
    scanf("%u", &iValue);

    printf("Enter First Position : ");
    scanf("%u", &iPos1);

    printf("Enter Second Position : ");
    scanf("%u", &iPos2);

    iRet = TaggleBitRange   (iValue, iPos1, iPos2);

    printf("Updated Number = %u\n", iRet);

    return 0;
}