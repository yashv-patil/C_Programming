# include<stdio.h>

int EvenFact(int iNo)
{
    int iCnt = 0;
    int iEvenFactMult = 1;

    if(iNo < 0)
    {
        iNo = (-iNo);
    }

    for(iCnt = iNo; iCnt > 1 ; iCnt--)
    {
        if (iCnt % 2 == 0)
        {
            iEvenFactMult = iEvenFactMult * iCnt;
        }
    }

    return iEvenFactMult;

    
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = EvenFact(iValue);

    printf("%d", iRet);
   

    return 0;
}
