# include<stdio.h>
# include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
     
}

int main()
{
    int iSize = 0; 
    int iCnt = 0;
    int iStart = 0;
    int iEnd = 0;
    
    int *p = NULL;

    printf("Enter the number of element:\n");
    scanf("%d",&iSize);

    printf("Enter Starting :\n");
    scanf("%d",&iStart);

    printf("Enter Ending:\n");
    scanf("%d",&iEnd);

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

    Range(p,iSize,iStart,iEnd);
    
    free(p);

    return 0;
}