//Write a program which accept number from user and return difference between summation of all its factors and non factors
// Input: 12
//Output: 134    (16-50)

//Input:  10
//Output: -29      (8-50)
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumNFact = 0;
    int iSumFact = 0;
    int iDiff = 0;
    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else if(iNo % iCnt != 0)
        {
            iSumNFact = iSumNFact + iCnt;
        }
    }
    iDiff = iSumNFact - iSumFact;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Difference of Sum of non factors & factors of %d is: %d",iValue,iRet);
    
    return 0;
}