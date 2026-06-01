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
    int Brr [4] = {10,20,30,40};
 
    Disply(Brr,4);
    
    return 0;
}

