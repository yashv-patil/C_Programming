#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str == '\0')
    {
        return iCount;
    }

    iCount++;

    Strlen(str + 1);
}

int main()
{
    char ch[100];
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%s", ch);

    iRet = Strlen(ch);

    printf("No of letters in the string is : %d\n", iRet);

    return 0;
}