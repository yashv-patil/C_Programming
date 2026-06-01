# include <stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = (-iNo);
    }

    while(iNo > 0)
    {
        int iLastDigit = iNo % 10;
        if(iLastDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;

    }
    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    
    printf("%d",iRet);

    return 0;
}