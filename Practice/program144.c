#include <stdio.h>

void Update(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }
    
    printf("\nArray Elements After Function call\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d \t",Arr[iCnt]);
    }

}

int main()
{
    int Brr [] = {10,20,30,40,50};

    int iCnt = 0;

    printf("Array Elements Before Function call\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\t",Brr[iCnt]);
    }

    Update(Brr,5);

    return 0;
}