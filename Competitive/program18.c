# include<stdio.h>

void NOnFact(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d",iCnt);
        }
    }
}

int  main()
{
    int iValue = 0;

    printf("Enter the number:");
    scanf("%d",&iValue);

    NOnFact(iValue);

    return 0;
}