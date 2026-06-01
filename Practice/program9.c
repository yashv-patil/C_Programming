/////////////////////////////////////////////////////////////////////
//
//  Include Required header file
//
/////////////////////////////////////////////////////////////////////

# include <stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbe
//  Input :         float, float
//  Output:         float
//  Description:    Performs Addition of 2 floats
//  Date :          08/05/2026
//  Auther:         Yash Virendrasing Patil
// 
/////////////////////////////////////////////////////////////////////

float AddTwoNumber (
                        float fNo1,             // Firts input 
                        float fNo2              // Second input
                    )
{
    float fAns = 0.0f;                          // variable to store result

    fAns = fNo1 + fNo2;                         // Performed the Addition 

    return fAns;
}

/////////////////////////////////////////////////////////////////////
//
//  Application to perform Addition of 2 float values
//
/////////////////////////////////////////////////////////////////////

int main()
{
   
    float fValue1 = 0.0f;                       // To Store First Input
    float fValue2 = 0.0f;                       // To Store Second Input
    float fResult = 0.0f;                       // To Store Result

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fResult = AddTwoNumber(fValue1,fValue2);     

    printf("Addition is : %f\n", fResult);
    
    return 0;        
    
    

}

/////////////////////////////////////////////////////////////////////
//
//  Input : 10.0    11.0
//  Outpt :
//
/////////////////////////////////////////////////////////////////////
