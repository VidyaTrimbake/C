//Write a program which accept area in square feet and convert it into square meter
// 1 Sq feet = 0.0929 Sq meter

//Input  : 5
//Output : 0.464515

//Input  : 7
//Output : 0.650321

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;
    dSqMeter = 0.0929 * iValue;
    return dSqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area insquare feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Square feet to square meter is: %lf Sq Meter",dRet);

    return 0;
}