# include<stdio.h>
# include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers are:");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
    
    
}



int main()
{
    int iSize = 0; 
    int iCnt = 0;
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

    Display(p,iSize);
    
    free(p);

    return 0;
}