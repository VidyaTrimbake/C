//Write a program which accept width and height of rectangle from user and 
//calculate its area(Area = length * Width)

//Input  : 5.3  9.78
//Output : 51.834

#include<stdio.h>

double RectArea(float fLength, float fWidth)
{
    double dArea = 0.0;
    dArea = fLength * fWidth;
    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter length:");
    scanf("%f",&fValue1);

    printf("Enter Width:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of rectangle is:%lf",dRet);

    return 0;
}
