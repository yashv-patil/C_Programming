# include <stdio.h>

float AddTwoNumber(float fNo1, float fNo2)
{
    float fAns = 0.0f;

    fAns = fNo1 + fNo2;

    return fAns;
}

int main()
{
   
    float fValue1 = 0.0f;                       // To Store First Input
    float fValue2 = 0.0f;                       // To Store Second Input
    float fResult = 0.0f;                       // To Store Result

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fResult = AddTwoNumber(fValue1,fValue2);     // Performed the Addition 

    printf("Addition is : %f\n", fResult);
    
    return 0;           
}
