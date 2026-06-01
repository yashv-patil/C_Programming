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
    int Brr [iLength] ;

    Brr[0] = 10;
    Brr[1] = 20;
    Brr[2] = 30;
    Brr[3] = 40;
 
    Disply(Brr,iLength);
    
    return 0;
}

