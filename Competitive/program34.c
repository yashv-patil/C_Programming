# include<stdio.h>

int OddFact(int iNo)
{
    int iCnt = 0;
    int iOddFactMult = 1;

    if(iNo < 0)
    {
        iNo = (-iNo);
    }

    for(iCnt = iNo; iCnt > 1 ; iCnt--)
    {
        if (iCnt % 2 != 0)
        {
            iOddFactMult = iOddFactMult * iCnt;
        }
    }

    return iOddFactMult;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = OddFact(iValue);

    printf("%d", iRet);
   

    return 0;
}
