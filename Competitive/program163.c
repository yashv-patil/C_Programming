# include <stdio.h>
# include <stdbool.h>

typedef unsigned int UINT;

// Check Bit ON or OFF 9 or 12
bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0x100;        // 9th

    UINT iAns = 0;

    iAns = iNo | iMask1;

    if (iAns == iNo)
    {
        return true;
    }
    return false;  
}

int main()
{
    UINT iValue = 0;
    bool iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = ChkBit(iValue);

    if(iRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;

}
