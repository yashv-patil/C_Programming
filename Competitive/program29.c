#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iTable = iNo * iCnt;
        
        printf("%d\t",iTable);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    Table(iValue);
    
    return 0;
}