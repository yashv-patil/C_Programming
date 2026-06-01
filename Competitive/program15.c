#include<stdio.h>

typedef int Bool;

# define TRUE 1;
# define FALSE 0;

char ChkVowels(char cValue)
{
    if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u'|| cValue == 'A'|| cValue == 'E'|| cValue == 'I'|| cValue == 'O'|| cValue == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    char cValue = '\0';
    Bool bRet = FALSE;

    printf("Enter charator :");
    scanf("%c",&cValue);

    bRet = ChkVowels(cValue);

    if (bRet == 1)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is Not Vowel");
    }

    return 0;
}