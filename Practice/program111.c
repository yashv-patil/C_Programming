#include<stdio.h>

void Disply(int Arr[])             
{
    int iCnt = 5;

                   // Issue
    for (iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
    
}

int main()
{
    int Brr [8] = {10,20,30,40,50,60,70,80};
 
    Disply(Brr);
    
    return 0;
}

