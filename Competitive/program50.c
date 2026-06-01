# include <stdio.h>

double SquareMeter(float iNo)
{
    double iSquareMeter = 0.0929 ;

    return iNo * iSquareMeter;
}

int main()
{
   float fValue = 0;
   double dRet = 0;

   printf("Enter area in squarefeet :\n");
   scanf("%f",&fValue);

   dRet = SquareMeter(fValue);

   printf("%f Square feet In  Square Meter is %lf\n", fValue, dRet);
   
   return 0;
}