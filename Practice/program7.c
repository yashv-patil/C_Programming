# include <stdio.h>

int Add

int main()
{
   
    float fValue1 = 0.0f;                       // To Store First Input
    float fValue2 = 0.0f;                       // To Store Second Input
    float fResult = 0.0f;                       // To Store Result

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fResult = fValue1 + fValue2;                // Performed the Addition 

    printf("Addition is : %f\n", fResult);
    
    return 0;           
}
