# include <stdio.h>

int  KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        return 0;

    }
    else
    {
        int iMeter = 1000;
        return iMeter * iNo;
    }

}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter kilometer :\n");
   scanf("%d",&iValue);

   iRet = KMtoMeter(iValue);

   printf("%d Km In Meter is %d\n", iValue, iRet);
   
   return 0;
}