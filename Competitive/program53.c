# include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if ((iStart < 0) || (iStart > iEnd))
    {
        return -1;
    }


    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
    
}

int main()
{
    int iValue1= 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Starting point\n");
    scanf("%d", &iValue1);

    printf("Enter ending point\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if (iRet == -1)
    {
        printf("Invalid");
    }
    else
    {
        printf("Sum is %d",iRet);
    }
    
    return 0;
}