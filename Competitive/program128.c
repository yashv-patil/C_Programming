# include <stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0;
    int iCntCapital = 0;

    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        else
        {
            iCntCapital++;
        }
        str++;
            
    }
    return iCntSmall - iCntCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Small and Capital Letter Difference is : %d",iRet);

    return 0;

}