# include <stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    
    int iCnt = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCnt++;
        }

        iNo = iNo >> 1;
    }

    return iCnt;
    
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);

    printf("Count of 1 ON bit is : %d", iRet);

    return 0;

}
