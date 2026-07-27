# include<stdio.h>

int EvenOddFactDiff(int iNo)
{
    int iCnt = 0;
    int iOddFactMult = 1;
    int iEvenFactMult = 1;
    int iTemp = iNo;
    int iResult = 0;


    if(iNo < 0)
    {
        iNo = (-iNo);
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFactMult = iEvenFactMult * iCnt;
        }
        else
        {
            iOddFactMult = iOddFactMult * iCnt;
        }
    }

    if(iOddFactMult > iEvenFactMult)
    {
        iResult = iOddFactMult - iEvenFactMult;
    }
    else
    {
        iResult = iEvenFactMult - iOddFactMult;
    }

    if (iTemp < 0)
    {
        iResult = -iResult;
    }

    return iResult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = EvenOddFactDiff(iValue);

    printf("%d", iRet);
   

    return 0;
}
