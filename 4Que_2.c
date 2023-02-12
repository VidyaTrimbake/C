//Not Completed

//Write a program which accept number from user and display its factors in decreasing order
// Input: 12
//Output: 6 4 3 2 1

//Input:  13
//Output: 1   

//Input:  10
//Output: 5 2 1

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}
