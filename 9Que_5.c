//Write a program which returns difference between even factorial and odd factorial of given number

//Input : 5
//Output: -7    (8 - 15)

//Input : -5
//Output: -7    (8 - 15)

//Input : 10
//Output: 2895   (3840 - 945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt%2 != 0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }
    return (iFactOdd - iFactEven);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf(" factorial  is %d",iRet);

    return 0;
}