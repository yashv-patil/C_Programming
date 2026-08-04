#include<stdio.h>

void Display(int iNo)
{
    static int i = 5;

    while(i != 0)
    {
        printf("%d\t*\t", i);
        i--;
        Display(i);
    }

    printf("\n");
}

int main()
{
    Display(5);
    return 0;
}

