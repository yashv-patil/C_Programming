#include <stdio.h>

int Display(int iNo1, int iFrequency)
{
    int i = 0;

    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d",iNo1);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    printf("Enter Frequency :\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}