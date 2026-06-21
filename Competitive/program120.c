# include<stdio.h>

void DisplayShedule(char ch)
{
    if(ch >= 'a' &&  ch <= 'z')
    {
        printf("Invalid Entered Divisopn because you enter the small letter");
    }

    if(ch == 'A')
    {
        printf("Exam time is 7 Am");
    }
    else if (ch == 'B')
    {
        printf("Exam time is 8.30 Am");
    }
    else if (ch == 'C')
    {
        printf("Exam time is 9.20 Am");
    }
    else if(ch == 'D')
    {
        printf("Exam time is 10.30 Am");
    }
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the charactor:\n");
    scanf("%c",&cValue);

    DisplayShedule(cValue);

    return 0;
}