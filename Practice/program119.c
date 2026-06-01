#include<stdio.h>
//Error due to stdlib.in

int main()
{
    int *Brr = NULL;
    int iLength = 0;
    int iCnt = 0;

    // Step 1 Accept the Number of elements
    printf("Enter Numbet of Element :\n");
    scanf("%d",&iLength);

    // Step 2 Allocate the Memory
    Brr = (int *)malloc(iLength * sizeof(int));

    // Step 3 Accept the values from user
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       scanf("%d",&Brr[iCnt]);
    }

    // Step 4 Use the Memory(Logic)

    // Step 5 Deallocate the Memory
    free(Brr);

    return 0;

}