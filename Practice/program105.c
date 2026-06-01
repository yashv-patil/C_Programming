#include<stdio.h>

void Disply(int *iPtr)
{
    printf("%d\n", *iPtr);

}

int main()
{
    int Arr [5] = {10,20,30,40,50};
 
    Disply(Arr);
    
    return 0;
}

