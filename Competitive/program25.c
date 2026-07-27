#include <stdio.h>

void MultiDisplay(int iNo)
{
    int iCnt = 0;
    int iMilt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMilt = iNo * iCnt;
        printf("%d \t ",iMilt);
        
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter Numbet:");
    scanf("%d",&iValue);

    MultiDisplay(iValue);

    return 0;
}