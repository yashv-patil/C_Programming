# include <stdio.h>

void Display(char ch)
{
    printf("Decimal\t Octal\t Hexadecimal\n");

    printf("%d\t%o\t%X\n", ch, ch, ch);
}

int main()
{
    char ch = '\0';

    printf("Enter the Charactor:\n");
    scanf("%c",&ch);

    Display(ch);

    return 0;

}