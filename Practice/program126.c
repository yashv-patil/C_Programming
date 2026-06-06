# include<stdio.h>
# include<stdlib.h>

int CountOdd(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *Brr = NULL;
    int iLenght = 0;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the Number of elements that you want to store:\n");
    scanf("%d",&iLenght);

    Brr = (int *) malloc(iLenght * sizeof(int));

    printf("Enter Elements Now:\n");

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    if (Brr == NULL)
    {
        printf("Memory is not Allocated");
    }
    

    iRet = CountOdd(Brr, iLenght);

    printf("Odd element are : %d",iRet);
    
    free(Brr);
    
    return 0;
}