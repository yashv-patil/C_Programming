#include<stdio.h>
#include<stdlib.h>

int  Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    // Step 1 Accept the Number of elements
    printf("Enter Numbet of Element :\n");
    scanf("%d",&iLength);

    // Step 2 Allocate the Memory
    Brr = (int *)malloc(iLength * sizeof(int));

    // Step 3 Accept the values from user
    
    printf("Enter the Elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       scanf("%d",&Brr[iCnt]);
    }

    // Step 4 Use the Memory(Logic)
    iRet =  Summation(Brr,iLength);

    printf("Sum of elements of array is :%d",iRet);

    // Step 5 Deallocate the Memory
    free(Brr);

    return 0;

}