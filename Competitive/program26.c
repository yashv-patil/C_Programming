# include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("It is Small");
    }
    else if (iNo > 50 && iNo < 101)
    {
        printf("It is Medium");
    }
    else
    {
        printf("It is Large");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}