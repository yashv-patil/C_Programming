#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iTemp = Arr[iCnt];
        int iDigitCnt = 0;

        while(iTemp != 0)
        {
            iDigitCnt++;
            iTemp = iTemp / 10;
        }

        if(iDigitCnt == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
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

    Digits(p,iSize);

    free(p);

    return 0;
}