# include <stdio.h>

void Display(char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        printf("%C", ch + 32);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c",ch - 32);
    }
    else
    {
        printf("%c",ch);
    }

}


int main()
{
    char ch = '\0';

    printf("Enter the Charactor:\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;

}