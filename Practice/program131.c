# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>

// Time Complexity  O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    
    if (iCnt == 0)
    {
        return false;
    }
    else
    {
        return true;
    }

}

int main()
{
    int *Brr = NULL;
    int iLenght = 0;
    bool bRet = false;
    int iCnt = 0;
    int iValue = 0;

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

    printf("Enter the element that you want to Search:\n");
    scanf("%d",&iValue);
    
    bRet = LinearSearch(Brr, iLenght,iValue);

    if(bRet == true)
    {
        printf("Element is Preset");
    }
    else
    {
        printf("Element is Not Present");
    }
    
    free(Brr);
    
    return 0;
}