# include<stdio.h>
# include<stdlib.h>

int Summation(int Arr[], int iSize)
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

    iRet = Summation(Brr, iLenght);

    printf("Summation of Element is : %d",iRet);
    
    free(Brr);

    return 0;
}