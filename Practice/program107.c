#include<stdio.h>

void Disply(int iPtr[])             // We remove the Star its looks like array but it internally trated as array
{
    printf("%d\n", *iPtr);
    
    iPtr++;

    printf("%d\n", *iPtr);
    
    iPtr++;

    printf("%d\n", *iPtr);
    

}

int main()
{
    int Arr [5] = {10,20,30,40,50};
 
    Disply(Arr);
    
    return 0;
}

