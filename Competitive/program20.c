# include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iNonSumFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }

    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iNonSumFact = iNonSumFact + iCnt;
        }
    }

    return iSumFact - iNonSumFact;  

}

int main()
{
   int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Diff between sum of fact and nonfat number is  %d", iRet);

    return 0;
}