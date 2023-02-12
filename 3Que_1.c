//Write a program which accept one number from user and print that number of even numbers on screen

//Input:  7
//Output: 2 4 6 8 10 12 14

#include<stdio.h>

int PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        return 0;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    if(iCnt % 2 == 0)
    { 
       printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}    