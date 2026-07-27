# include <stdio.h>
# define BOOL int
# define TRUE 1
# define FALSE 0

BOOL ChkVowels(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U' ||

           *str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter String:\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowels(arr);

    if(bRet == TRUE)
    {
        printf("String Containg Vowels");
    }
    else
    {
        printf("String Not Containg Vowels");
    }
    
    return 0;

}