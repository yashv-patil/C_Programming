# include<stdio.h>
# include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
    
}



int main()
{
    int iSize = 0; 
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the number of element:\n");
    scanf("%d",&iSize);

    p = (int*) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the Memory");
        return -1;
    }

    printf("Enter %d Elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iSize);

    printf("Count of Even is %d :",iRet);
    
    free(p);

    return 0;
}