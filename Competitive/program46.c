# include <stdio.h>

double AreaCircle(float fRadious)
{
    float iPi = 3.14;

    float Area = iPi * fRadious * fRadious;

    return Area;
}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter circle radious:");
    scanf("%f", &fValue);

    dRet = AreaCircle(fValue);

    printf("%lf",dRet);

    return 0;
}