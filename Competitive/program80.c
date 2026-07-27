#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iLastDigit = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iTemp = Arr[iCnt];
        int iDigitSum = 0;
        
        while (iTemp != 0)
        {
            iLastDigit = iTemp % 10;

            iDigitSum = iDigitSum + iLastDigit;

            iTemp = iTemp / 10;
        }
        
        printf("%d\t",iDigitSum);
    }

    
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
   
    int *p = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    if(iSize <= 0)
    {
        printf("Invalid size\n");
        return -1;
    }

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    DigitsSum(p,iSize);

    free(p);

    return 0;
}