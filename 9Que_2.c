//Accept amount is US doller and return its corresponding value in Indian currency

//Input : 10
//Output: 700

//Input : 3
//Output: 270

//Input : 1200
//Output: 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iConvert = 0;

    iConvert = iNo * 70;

    return iConvert;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return 0;
}