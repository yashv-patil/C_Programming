#include<stdio.h>

void Disply(int Arr[], int iSize)             
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
    
}

int main()
{
    int iLength = 4;
    int Brr [iLength] = {10,20,30,40};          // Error
 
    Disply(Brr,iLength);
    
    return 0;
}

