/* 
    Algorithm
    START
        Accept Firts number as no 1
        Accept Second number as no 2
        Perform addition of no 1 and no 2 and store in variable sum
        Display the Result
    STOP

*/

# include <stdio.h>

int main()
{
    // Variable Creation with Default Value
    float i = 0.0f, j = 0.0f, k = 0.0f;

    printf("Enter first number : \n");
    scanf("%f", &i);

    printf("Enter second number: \n");
    scanf("%f", &j);

    k = i + j;

    printf("Addition is : %f\n", k);
    
    return 0;           
}
