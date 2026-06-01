#include<stdio.h>

void Disply(int *iPtr)
{
    printf("Value of iPtr:%d\n",iPtr);

}

int main()
{
    int Arr [5] = {10,20,30,40,50};

    printf("Base Address of Arr: %d\n",Arr);
    
    Disply(Arr);
    
    return 0;
}

