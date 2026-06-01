# include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 70;
        
    return iINR * iNo;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Dollar $: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Dollar to INR is %d",iRet);

    return 0;
}