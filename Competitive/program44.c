# include <stdio.h>

int MultiDigits(int iNo)
{
    int iMultipliation = 1;
    int iLastDigit = 0;

    while (iNo > 0)
    {
        iLastDigit = iNo % 10;

        if(iLastDigit == 0)
        {
            iLastDigit = 1;
        }
        
        iMultipliation = iLastDigit * iMultipliation;

        iNo = iNo / 10;
        
    }
    return iMultipliation;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
    
    iRet = MultiDigits(iValue);
    
    printf("%d",iRet);

    return 0;
}