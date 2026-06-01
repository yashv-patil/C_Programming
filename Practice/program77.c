// Input : 5
// Output : 5 4 3 2 1
# include <stdio.h>

void Display(int iNo)
{
    int iDigit = 0;
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo =  iNo / 10;
    }
}

int main()
{
   int iValue = 0;
   int iDigit = 0;

   printf("Enter Number :");
   scanf("%d",&iValue);

   Display(iValue);
   
   return 0;
}
