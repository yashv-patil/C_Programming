# include<stdio.h>
# include <stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
    
    
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

    iRet = Product(p,iSize);

    if(iRet == 1)
    {
        printf("Product is 0");
    }
    else
    {
        printf("Product is %d",iRet);
    }

  
    
    free(p);

    return 0;
}