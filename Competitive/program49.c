# include <stdio.h>

double FhtoCs(float fTemp)
{
    float fCs = ((fTemp - 32) * (5.0/9.0));

    return fCs;
}

int main()
{
   float fValue = 0.0f;
   double dRet = 0.0;

   printf("Enter the Temepreature in FH :");
   scanf("%f",&fValue);

   dRet = FhtoCs(fValue);

   printf("FH to CS is  %lf",dRet);
   
   return 0;
}