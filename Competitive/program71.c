# include<stdio.h>
# include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
   
}


int main()
{
    int iSize = 0; 
    int iCnt = 0;
    BOOL bRet = 0;
    int No = 0;
    int *p = NULL;

    printf("Enter the number of element:\n");
    scanf("%d",&iSize);

    printf("Enter the Number that  you want to count a frequency:\n");
    scanf("%d",&No);

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

    bRet = Check(p,iSize,No);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
       printf("FALSE");
    }
    
    free(p);

    return 0;
}