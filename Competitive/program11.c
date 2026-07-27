#include <stdio.h>

void PrintEven(int iNo)
{
    int iCount = 0;
    if (iNo < 0)
    {
        return;
    }
    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if(iCount % 2 == 0)
        {
            printf("%d",iCount);
        }
    }
        
}
int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    PrintEven(iValue);


    return 0;
}