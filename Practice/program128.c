# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>


bool LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;
   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;            // Bad Programming
        }
    }
    return false;
    
}

int main()
{
    int *Brr = NULL;
    int iLenght = 0;
    bool bRet = false;
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
    

    bRet = LinearSearch(Brr, iLenght);

    if(bRet == true)
    {
        printf(" Element is Preset");
    }
    else
    {
        printf("Element is Not Present");
    }
    
    free(Brr);
    
    return 0;
}