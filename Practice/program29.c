#include <stdio.h>
    
void Display(int iNo)
{
    // Updator
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganseh...\n");
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



