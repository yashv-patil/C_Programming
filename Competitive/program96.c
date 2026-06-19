# include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for (i = 1, iCnt = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iCnt++)
        {
            if (iCnt == 10)
            {
                iCnt = 1;
            }
    
            printf("%d\t",iCnt);  
        }
        printf("\n");
    }
   

}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Acceps the Number of Rows :");
    scanf("%d", &iValue1);

    printf("Acceps the Number of Columns :");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}     

