# include <stdio.h>

int CountRange(int iNo)
{
    int iCnt = 0;
    int iLastDigit = 0;

    while (iNo > 0)
    {
        iLastDigit = iNo % 10;              // % 10 gives last digit

        if(iLastDigit > 3 && iLastDigit < 7)
        {
            iCnt ++;
        }
        iNo = iNo / 10;                     // / 10 remove last digit
    }
    return iCnt;
    

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    iRet = CountRange(iValue);
    
    printf("%d",iRet);

    return 0;
}