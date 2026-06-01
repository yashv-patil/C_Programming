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
    int iCnt = 0;

    printf("Enter 4 Elements :");

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Elements of Array are :");
    Disply(Brr,iLength);
    
    return 0;
}

