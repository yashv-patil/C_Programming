# include <stdio.h>

double CircleArea(float fRadious)
{
    float PI = 3.14;

    return PI * fRadious * fRadious;

}

int main()
{
   float fValue = 0.0f;
   double dRet = 0.0;

   printf("Enter radious of circle :");
   scanf("%f",&fValue);

   dRet = CircleArea(fValue);

   printf("Area of circle is %lf",dRet);
   
   return 0;
}