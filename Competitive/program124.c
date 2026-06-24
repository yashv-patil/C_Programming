# include <stdio.h>
#define TRUE 1
#define FALSE 0
#define BOOL int

BOOL ChkSpecial(char ch)
{
    if(ch >= '!' && ch <= '/')
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
    char ch = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter the Charactor:\n");
    scanf("%c",&ch);

    bRet = ChkSpecial(ch);

    if (bRet == TRUE)
    {
        printf("It is Special Charactor"); 
    }
    else
    {
        printf("It is Not Special charactor");
    }
    
    return 0;
}