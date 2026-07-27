# include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;
    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while(ch <= 'z')
        {
            printf("%c\t", ch);
            ch++;
        }
    }
    else
    {
        return;
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