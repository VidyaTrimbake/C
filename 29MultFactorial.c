//Sum n natural number
#include<stdio.h>

int SumFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iRet = 0;
    int iValue = 0;
    printf("Enter any number\n");
    scanf("%d",&iValue);

    iRet = SumFactorial(iValue);

    printf("Sum of Factorial of %d is : %d\n",iValue,iRet);
    return 0;
}