#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCount);
        iCount = iCount + 2;
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter the Number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}