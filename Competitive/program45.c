# include <stdio.h>

int CountDiff(int iNo)
{
    int iLastDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while (iNo > 0)
    {
        iLastDigit = iNo % 10;
        
        if (iLastDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iLastDigit;
        }
        else
        {
            iOddSum = iOddSum + iLastDigit;
        } 

        iNo = iNo / 10;

    }
    return iEvenSum - iOddSum; 
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}