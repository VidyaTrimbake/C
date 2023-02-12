//Write a program which accept temperature in Fahrenheit and convert it into clesius
// Celsius = (Fahrenheit - 32) * (5/9)

//Input  : 10
//Output : -12.2222  (10 - 32) * (5/9)

//Input  : 34
//Output : 1.11111   (34 - 32) * (5/9)

#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCs = 0.0;
    dCs = ((fTemp - 32) * 5)/9;
    return dCs;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Fahrenheit to celsius value is: %lf",dRet);

    return 0;
}