#include<stdio.h>

void Disply(int Arr[])             
{
    printf("%d\n", *Arr);
    
    Arr++;

    printf("%d\n", *Arr);
    
    Arr++;

    printf("%d\n", *Arr);
    

}

int main()
{
    int Brr [5] = {10,20,30,40,50};
 
    Disply(Brr);
    
    return 0;
}

