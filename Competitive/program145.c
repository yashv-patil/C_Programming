#include <stdio.h>

void StrRevX(char *ch)
{
    char Temp = '\0';
    char *Start = ch;
    char *End = ch;

    while (*End != '\0')
    {
        End++;
    }
    End--;
   
    while (Start < End)
    {
        Temp = *Start;
        *Start = *End;
        *End = Temp;

        Start ++;
        End--;
    }
    
}

int main()
{
    char Arr[60];
    
    printf("Enter the String:\n");
    scanf(" %[^\n]", Arr);

    StrRevX(Arr);

    printf("Reverse Sting is : %s",Arr);
    
    return 0;
}