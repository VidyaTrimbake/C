//Write a program which accept N and print first 5 multiples of N.

//Input : 4
//Output :4 8 12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}