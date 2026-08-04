#include<stdio.h>

int Product(int iNo)
{
    static int iProduct = 1;
    int iLast = 0;

    if(iNo != 0)
    {
        iLast = iNo % 10;

        iProduct = iProduct * iLast;

        Product(iNo / 10);
    }

    return iProduct;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = Product(iValue);

    printf("Product of Number is : %d\n", iRet);

    return 0;
}


// Assignmant 41 completed