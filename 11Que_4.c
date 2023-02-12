//Write a prgram which accpet range from user and display all numbers in between that range

//Input  : 23  35
//Output : 108

//Input  : 10 18
//Output : 70

//Input  : -10 2
//Output : Invalid Range

//Input  : 90 18
//Output : Invalid Range

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return 0;
    }    

    if((iStart < 0) || (iEnd < 0))
    {
        printf("Invalid Range\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    
    printf("Enter the starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point:\n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is %d:\n",iRet);

    return 0;
}