#include <stdio.h>
    
void Display(int iNo)
{
    // Filter
    if (iNo < 0)
    {
        printf("Invalid Input");
        return;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d :Jay Ganseh...\n", iCnt);
    }
}

int main()
{
    
    int iValue = 0;

    printf("Enter the Frequency: \n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}



