//Write a program which accept number from user and returns sum of all its non-factors.
// Input: 12
//Output: 50

//Input:  10
//Output: 37
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumNFact = 0;
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumNFact = iSumNFact + iCnt;
        }
    }
    return iSumNFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of non factors of %d is: %d",iValue,iRet);
    
    return 0;
}